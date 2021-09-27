#pragma once


#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define NAME_MAX 30
#define SEX_MAX 15
#define TELE_MAX 15
#define ADDR_MAX 30

#define MAX 1000

#define DEFAULT_SZ 3


struct PeoInfo
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
};


// ͨѶ¼
// 1. ��̬�汾
//struct Contact
//{
//	struct PeoInfo data[MAX]; // ���1000���˵�������data������
//	int sz; // ��¼��ǰͨѶ¼��Ч��Ϣ�ĸ���
//};

// ��̬�����汾
struct Contact
{
	struct PeoInfo* data;
	int sz; // ͨѶ¼�е�ǰ��Ч��Ϣ�ĸ���
	int capacity; // ͨѶ¼��ǰ���������
};


// ��ʼ��ͨѶ¼
void InitContact(struct Contact* pc);

// ������ϵ��
void AddContact(struct Contact* pc);

// ��ʾ������ϵ��
void ShowContact(struct Contact* pc);

// ɾ��ָ����ϵ��
void DelContact(struct Contact* pc);

// ����ָ����ϵ��
void SearchContact(const struct Contact* pc);

// �޸�ָ����ϵ��
void ModifyContact(struct Contact* pc);

// ����ͨѶ¼
void DestroyContact(struct Contact* pc);


// ������Ϣ��ͨѶ¼��
void SaveContact(struct Contact* pc);

// �����ļ��е���Ϣ��ͨѶ¼��
void LoadContact(struct Contact* pc);
