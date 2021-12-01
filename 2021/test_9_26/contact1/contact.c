#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

//void InitContact(struct Contact* pc)
//{
//	pc->sz = 0;
//	memset(pc->data, '0', MAX * sizeof(struct PeoInfo));
//}

void InitContact(struct Contact* pc)
{
	pc->sz = 0;
	pc->data = (struct PeoInfo*)malloc(DEFAULT_SZ * sizeof(struct PeoInfo));
	pc->capacity = DEFAULT_SZ;
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
//
//		pc->sz++;
//		printf("��ӳɹ�\n");
//	}
//}

void AddContact(struct Contact* pc)
{
	if (pc->sz == pc->capacity)
	{
		struct PeoInfo* ptr = realloc(pc->data, (pc->capacity + 2) * sizeof(struct PeoInfo));
		if (ptr != NULL)
		{
			pc->data = ptr;
			pc->capacity + 2;

			printf("���ݳɹ�\n");
		}
		else
		{
			return;
		}
	}
	printf("����������:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("����������:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("�������Ա�:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("������绰:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("�������ַ:>");
	scanf("%s", pc->data[pc->sz].addr);

	printf("��ӳɹ�\n");
	pc->sz++;
}

void ShowContact(struct Contact* pc)
{
	int i = 0;
	printf("%15s\t%7s\t%7s\t%15s\t%30s\n", "name", "age", "sex", "tele", "addr");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%15s\t%7d\t%7s\t%15s\t%30s\n",
			pc->data[i].name,
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
		printf("ͨѶ¼Ϊ�գ��޷�ɾ��\n");
	}

	char name[NAME_MAX] = { 0 };
	printf("������Ҫɾ��������:>");
	scanf("%s", name);

	int pos = FindContactByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫɾ������ϵ�˲�����\n");
	}
	else
	{
		int j = 0;
		for (j = pos; j < pc->sz - 1; j++)
		{
			pc->data[j] = pc->data[j + 1];
		}
		pc->sz--;
		printf("ɾ���ɹ�\n");
	}
}

void SearchContact(const struct Contact* pc)
{
	char name[NAME_MAX] = { 0 };
	printf("������Ҫ���ҵ�����:>");
	scanf("%s", name);

	int pos = FindContactByName(pc, name);
	if (pos == -1)
	{
		printf("���޴���\n");
	}
	else
	{
		printf("%15s\t%7d\t%7s\t%15s\t%30s\n",
			pc->data[pos].name,
			pc->data[pos].age,
			pc->data[pos].sex,
			pc->data[pos].tele,
			pc->data[pos].addr);
	}
}

void ModifyContact(const struct Contact* pc)
{
	char name[NAME_MAX] = { 0 };

	printf("����Ҫ�޸��˵�����:>");
	scanf("%s", name);

	int pos = FindContactByName(pc, name);
	if (-1 == pos)
	{
		printf("Ҫ�޸ĵ��˵���Ϣ������\n");
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
		printf("�������µĵ�ַ:>");
		scanf("%s", pc->data[pos].addr);

		printf("�޸ĳɹ�\n");
	}
}

void DestroyContact(struct Contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->capacity = 0;
	pc->sz = 0;
}
