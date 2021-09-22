#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"


// ��ʼ��ͨѶ¼
void InitContact(struct Contact* pc)
{
	pc->sz = 0; // Ĭ��û����Ϣ

	memset(pc->data, 0, MAX * sizeof(struct PeoInfo));
	// memset(pc->date, 0, sizeof(pc->data)); 
	// ͨ���ṹ��ָ���ҵ�����data ������data��������sizeof�ڲ���������������ܴ�С
}


// ������ϵ��
void AddContact(struct Contact* pc)
{
	if (pc->sz == MAX)
	{
		printf("ͨѶ¼����\n");
	}
	else
	{
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
}


// ��ʾ������ϵ��
void ShowContact(struct Contact* pc)
{
	int i = 0;
	printf("%15s\t%5s\t%8s\t%15s\t%30s\n\n", 
		"name", "age", "sex", "tele", "addr");
	for (i = 0; i < pc->sz; i++)
	{
		//��ӡÿһ������
		printf("%15s\t%5d\t%8s\t%15s\t%30s\n",
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}


// ɾ��ָ����ϵ��
FindContactByName(const struct Contact* pc, const char* name)
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return 1;
		}
	}
	// �Ҳ���
	return -1;
}

void DelContact(struct Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷�ɾ��\n");
		return;
	}

	char name[NAME_MAX] = { 0 };

	printf("������Ҫɾ���˵�����:>");
	scanf("%s", name);

	// ����
	int pos = FindContactByName(pc, name);
	if (pos == -1)
	{
		printf("ָ������ϵ�˲�����\n");
	}
	else
	{
		// ɾ��
		int j = 0;
		for (j = pos; j < pc->sz-1; j++)
		{
			pc->data[j] = pc->data[j + 1];
		}
		pc->sz - 1;
		printf("ɾ���ɹ���\n");
	}
}


// ����ָ����ϵ��
void SearchContact(const struct Contact* pc)
{
	char name[NAME_MAX] = { 0 };

	printf("����Ҫ�����˵�����:>");
	scanf("%s", name);

	int pos = FindContactByName(pc, name);
	if (-1 == pos)
	{
		printf("���޴���\n");
	}
	else
	{
		printf("%15s\t%5s\t%8s\t%15s\t%30s\n\n", 
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
		printf("����������:>");
		scanf("%d", &(pc->data[pos].age));
		printf("�������Ա�:>");
		scanf("%s", pc->data[pos].sex);
		printf("������绰:>");
		scanf("%s", pc->data[pos].tele);
		printf("�������ַ:>");
		scanf("%s", pc->data[pos].addr);
	}
}