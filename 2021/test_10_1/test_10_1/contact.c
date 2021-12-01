#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

//void InitContact(struct Contact* pc)
//{
//	pc->sz = 0;
//	memset(pc->data, 0, MAX * sizeof(struct PeoInfo));
//}

void CheckCapacity(struct Contact* pc);

void LoadContact(struct Contact* pc)
{
	FILE* pf = fopen("contact.txt", "rb");
	if (NULL == pf)
	{
		perror("LoadContact:fopen");
		return;
	}
	struct PeoInfo tmp = { 0 };
	while (fread(&tmp, sizeof(struct PeoInfo), 1, pf))
	{
		CheckCapacity(pc);
		pc->data[pc->sz] = tmp;
		pc->sz++;
	}
	fclose(pf);
	pf = NULL;
}

void InitContact(struct Contact* pc)
{
	pc->sz = 0;
	pc->data = (struct PeoInfo*)malloc(DEFAULT_SZ * sizeof(struct PeoInfo));
	pc->capacity = DEFAULT_SZ;

	LoadContact(pc);
}

//void AddContact(struct Contact* pc)
//{
//	if (pc->sz == MAX)
//	{
//		printf("ͨѶ¼����\n");
//	}
//	else
//	{
//		printf("����������:>");
//		scanf("%s", pc->data[pc->sz].name);
//		printf("����������:>");
//		scanf("%d", &(pc->data[pc->sz].age));
//		printf("�������Ա�:>");
//		scanf("%s", pc->data[pc->sz].sex);
//		printf("������绰:>");
//		scanf("%s", pc->data[pc->sz].tele);
//		printf("������סַ:>");
//		scanf("%s", pc->data[pc->sz].addr);
//		pc->sz++;
//		printf("������\n");
//	}
//}

void CheckCapacity(struct Contact* pc)
{
	if (pc->sz == pc->capacity)
	{
		struct PeoInfo* ptr = (struct PeoInfo*)realloc(
			pc->data, (pc->capacity + 2) * sizeof(struct PeoInfo));
		if (ptr != NULL)
		{
			pc->data = ptr;
			pc->capacity += 2;
			printf("���ݳɹ�\n");
		}
		else
		{
			perror("����ʧ��");
			exit(1);
		}
	}
}

void AddContact(struct Contact* pc)
{
	CheckCapacity(pc);
	
	printf("����������:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("����������:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("�������Ա�:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("������绰:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("������סַ:>");
	scanf("%s", pc->data[pc->sz].addr);
	pc->sz++;
	printf("������\n");
}

void ShowContact(struct Contact* pc)
{
	int i = 0;
	printf("%15s\t%5s\t%8s\t%15s\t%30s\n",
		"name", "age", "sex", "tele", "addr");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%15s\t%5d\t%8s\t%15s\t%30s\n",
			pc->data[ i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}

int FindContactByName(const struct Contact* pc, const char* name)
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}

void DelContact(struct Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ��");
		return;
	}
	char name[NAME_MAX] = { 0 };
	printf("������Ҫɾ��������:>");
	scanf("%s", name);
	int pos = FindContactByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫɾ�������ֲ�����:>");
	}
	else
	{
		int j = 0;
		for (j = pos; j < pc->sz-1; j++)
		{
			pc->data[j] = pc->data[j+1];
		}
		pc->sz--;
		printf("ɾ���ɹ�\n");
	}
}

void SearchContact(struct Contact* pc)
{
	char name[NAME_MAX] = { 0 };
	printf("������Ҫ���ҵ�����:>");
	scanf("%s", name);
	int pos = FindContactByName(pc, name);
	if (pos == -1)
	{
		printf("���������ֲ�����\n");
	}
	else
	{
		printf("%15s\t%5s\t%8s\t%15s\t%30s\n",
			"name", "age", "sex", "tele", "addr");
		printf("%15s\t%5d\t%8s\t%15s\t%30s\n",
			pc->data[pos].name,
			pc->data[pos].age,
			pc->data[pos].sex,
			pc->data[pos].tele,
			pc->data[pos].addr);
	}
}

void ModifyContact(struct Contact* pc)
{
	char name[NAME_MAX] = { 0 };
	printf("������Ҫ�޸ĵ�����:>");
	scanf("%s", name);
	int pos = FindContactByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ���ϵ�˲�����\n");
	}
	else
	{
		printf("�������µ�����:>");
		scanf("%s", pc->data[pos].name);
		printf("�������µ�����:>");
		scanf("%d", &(pc->data[pos].age));
		printf("�������µ��Ա�:>");
		scanf("%s", pc->data[pos].sex);
		printf("�������µĵ绰:>");
		scanf("%s", pc->data[pos].tele);
		printf("�������µ�סַ:>");
		scanf("%s", pc->data[pos].addr);
		printf("�޸ĳɹ�\n");
	}
}

void DestroyContact(struct Contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->sz = 0;
	pc->capacity = 0;
}

void SaveContact(struct Contact* pc)
{
	FILE* pf = fopen("contact.txt", "wb");
	if (NULL == pf)
	{
		perror("SaveContact:fopen");
		return;
	}
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		fwrite(&(pc->data[i]), sizeof(struct PeoInfo), 1, pf);
	}
	fclose(pf);
	pf = NULL;
}