#define _CRT_SECURE_NO_WARNINGS 1

// ���������

// 1��
#include <stdio.h>
#include <string.h>

void GetMemory(char* p)
{
	p = (char*)malloc(100);
}

void Test(void)
{
	char* str = NULL;
	GetMemory(str);

	strcpy(str, "hello world");
	printf(str);
}

int main()
{
	Test();
	return 0;
}
// ��������
/* 1. str����p��ʱ����ֵ���ݣ�p��str����ʱ���������Ե�malloc���ٵĿռ���ʼ��ַ����p��ʱ������Ӱ��str��str����NULL
2. ��str��NULL��strcpy���hello world������strָ��Ŀռ�ʱ������ͻ��������ΪNULLָ��ָ��Ŀռ�ʱ����ֱ�ӷ��ʵ�
3. �����ڴ�й©�����������٣��޷����տռ� */

// �޸ģ�
// �汾1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void GetMemory(char** p)
{
	*p = (char*)malloc(100);
}

void Test(void)
{
	char* str = NULL;
	GetMemory(&str); // char**

	strcpy(str, "hello world");
	printf(str);
	// �ͷ�
	free(str);
	str = NULL;
}

int main()
{
	Test();
	return 0;
}

// �汾2
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* GetMemory(char* p)
{
	p = (char*)malloc(100);

	return p;
}

void Test(void)
{
	char* str = NULL;

	str = GetMemory(str);

	strcpy(str, "hello world");

	printf(str);

	free(str);
	str = NULL;
}

int main()
{
	Test();
	return 0;
}


// 2��
#include <stdio.h>

char* GetMemory(void)
{
	char p[] = "hello world";

	return p;
}

void Test(void)
{
	char* str = NULL;

	str = GetMemory();

	printf(str);
}

int main()
{
	Test();
	return 0;
}
// �������д�ӡ���ֵ
// ����ջ�ռ��ַ����
#include <stdio.h>

int* test()
{
	int n = 10;

	return &n;
}

int main()
{
	int* p = test();

	printf("%d\n", *p);
	// ���û�б�����,�п������10

	return 0;
}


// 3��
#include <stdio.h>

void GetMemory(char** p, int num)
{
	*p = (char*)malloc(num);
}

void Test(void)
{
	char* str = NULL;
	GetMemory(&str, 100);

	strcpy(str, "hello");
	printf(str);

}

int main()
{
	Test();
	return 0;
}
//�ڴ�й©��û��free
//free(str);
//str = NULL;

// ������
#include <stdio.h>
#include <stdlib.h>

void GetMemory(char** p, int num)
{
	*p = (char*)malloc(num);
}

void Test(void)
{
	char* str = NULL;
	GetMemory(&str, 100);

	strcpy(str, "hello");
	printf(str);

	free(str);
	str = NULL;
}

int main()
{
	Test();
	return 0;
}


// 4��
#include <stdio.h>
#include <stdlib.h>

void Test(void)
{
	char* str = (char*)malloc(100);

	strcpy(str, "hello");
	free(str);

	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);
	}
}

int main()
{
	Test();
	return 0;
}
// ���world���������д���
// free��û���ÿ�

// ������
#include <stdio.h>
#include <stdlib.h>

void Test(void)
{
	char* str = (char*)malloc(100);

	strcpy(str, "hello");
	free(str);
	str = NULL;

	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);
	}
}

int main()
{
	Test();
	return 0;
}


// C/C++������ڴ濪��


// ��������
// C99 �У��ṹ�е����һ��Ԫ��������δ֪��С�����飬��ͽ������������须��Ա��

// �����С��ȷ�����ɴ��С
typedef struct st_type
{
	int i;
	int a[0];//���������Ա
}type_a;
// ��Щ�������ᱨ���޷�������Ըĳɣ�
typedef struct st_type
{
	int i;
	int a[];//���������Ա
}type_a;


//����������ص㣺
/* �ṹ�е����������Աǰ���������һ��������Ա
sizeof ���ص����ֽṹ��С����������������ڴ�
�������������Ա�Ľṹ���ʹ�ã�Ҫ���malloc���ֶ�̬�ڴ���亯��ʹ��*/

#include <stdio.h>

typedef struct st_type
{
	int i;
	int a[];//���������Ա
}type_a;

int main()
{
	printf("%d\n", sizeof(struct st_type)); // 4
	return 0;
}


// 
struct st_type
{
	int i;
	int a[];
};

int main()
{
	malloc(sizeof(struct st_type) + 10 * sizeof(int));

	return 0;
}


// ʹ��
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

struct st_type
{
	int i;
	int a[];
};

int main()
{
	struct st_type* ps = (struct st_type*)malloc(sizeof(struct st_type) + 10 * sizeof(int));
	// 4byte - i
	// 40byte - a

	if (ps == NULL)
	{
		printf("%s\n", strerror(errno));
		return -1;
	}
	// ���ٳɹ�                                         
	ps->i = 100;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		ps->a[i] = i;
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->a[i]);
	}

	// a����Ŀռ䲻���ˣ���Ϊ20����������
	struct st_type* ptr = (struct st_type*)realloc(ps, sizeof(struct st_type) + 20 * sizeof(int));
	if (ptr == NULL)
	{
		printf("���ݿռ�ʧ��");
		return -1;
	}
	else
	{
		ps = ptr;
	}

	// ʹ��...

	// �ͷ�
	free(ps);
	ps = NULL;

	return 0;
}


// ������...
struct st_type
{
	int i; // 4
	int* a; // 4
};

int main()
{
	struct st_type* ps = (struct st_type*)malloc(sizeof(struct st_type)); // ����8�ֽڿռ�
	ps->i = 100;
	ps->a = (int*)malloc(10 * sizeof(int));

	int i = 0;
	for (i = 0; i < 10; i++)
	{
		ps->a[i] = i;
	}
	for (i = 0; i < 10; i++)

	{
		printf("%d ", ps->a[i]);
	}

	// ����ps->a �ռ�
	int* ptr = (int*)realloc(ps->a, 20 * sizeof(int));
	if (ptr == NULL)
	{
		printf("����ʧ��\n");
		return -1;
	}
	else
	{
		ps->a = ptr;
	}

	// ʹ��...

	// �ͷ�
	free(ps->a);
	ps->a = NULL;
	free(ps);
	ps = NULL;

	return 0;
}




// ���������ʵ���������ô���
// 1. �����ڴ��ͷ�
/* ������ǵĴ�������һ���������õĺ����У������������˶����ڴ���䣬���������ṹ�巵�ظ��û�����
������free�����ͷŽṹ�壬�����û�����֪������ṹ���ڵĳ�ԱҲ��Ҫfree�������㲻��ָ���û�����
������¡����ԣ�������ǰѽṹ����ڴ��Լ����ԱҪ���ڴ�һ���Է�����ˣ������ظ��û�һ���ṹ��
ָ�룬�û���һ��free�Ϳ��԰����е��ڴ�Ҳ���ͷŵ� */
// 2. �����ڷ����ٶ�
/* �������ڴ���������߷����ٶȣ�Ҳ�����ڼ����ڴ���Ƭ������ʵҲû�߶��٣�����Ҫ����ƫ�����ļӷ���Ѱַ�� */
// �ֲ���ԭ��  �ڴ�-���ٻ���-�Ĵ��� 

// C���Խṹ����������ָ��
// https://coolshell.cn/articles/11377.html
