#define _CRT_SECURE_NO_WARNINGS 1

//ģ��ʵ�ֿ⺯����strcpy

//Null - \0
//null - \0
//NULL - ��ָ��

// strcpy
#include <stdio.h>
#include <string.h>

int main()
{
	//strcpy - string copy - �ַ�������
	char arr1[] = "abcdef";
	char arr2[10] = { 0 };
	strcpy(arr2, arr1); //arr2Ŀ������ 

	printf("%s\n", arr2);

	return 0;
}


//my_strcpy

//1
//dest ��ָ��Ŀ��ռ��
//src ��ָ��ԭ�ַ����� 
void my_strcpy(char* dest, char* src)//Ŀ�� Դͷ
{
	while (*src != '\0') // \0=0 ��ָ��\0ʱֹͣ
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = *src; //strcpy��\0һ�𿽱� ��ѭ��ָ�����\0 ����\0
}

int main()
{
	//strcpy - string copy - �ַ�������
	char arr1[] = "abcdef";
	char arr2[10] = { 0 };
	my_strcpy(arr2, arr1); //arr2Ŀ������ 

	printf("%s\n", arr2);

	return 0;
}


//2�Ż�
void my_strcpy(char* dest, char* src)
{
	while (*src != '\0')
	{
		*dest++ = *src++; //����++
	}
	*dest = *src; // \0
}


//3�Ż�
void my_strcpy(char* dest, char* src)
{
	//1. �����ַ�
	//2. ����\0 ѭ��ֹͣ
	while (*dest++ = *src++)
	{
		;
	}
}


//4�Ż� �жϿ�ָ��
#include <assert.h>

void my_strcpy(char* dest, char* src)
{
	/*if (src == NULL || dest == NULL)
	{
		return;
	}*/

	assert(src != NULL); //���� - release�汾�����Ż���
	assert(dest != NULL);
	//assert����������������

	/*assert(src);
	assert(dest);

	assert(src && dest);*/

	while (*dest++ = *src++)
	{
		;
	}
}



const
int main()
{
	const int num = 10; //num�ǳ�����
	//num = 20; //err

	int* p = &num;
	*p = 20; //�����޸�

	printf("%d\n", num);
}


//const����ָ�� *����
int main()
{
	const int num = 10;

	//const����ָ��

	//const ����*�����
	//���ε���ָ��ָ������ݣ�*p��,ָ��ָ������ݣ�����ͨ��ָ�����ı���
	//����ָ���������p���ǿ��Ըı��
	int n = 100;
	const int* p = &num; //д����ͬint const * p = &num;
	*p = 20;
	p = &n;
	printf("%d\n", num); //���ε���p ��ʱp���ܴ��n�ĵ�ַ

	//const ����*���ұ�
	//���ε���ָ���������p��,ָ���������p�������޸���
	//ָ��ָ������ݣ�*p�������޸ģ�
	int n = 100;
	int* const p = &num; //���ε���*p ָ����ָ��Ķ��� 
	*p = 20;
	p = &n;

	printf("%d\n", num);
}


//5�Ż� const
// ��׳��/³���� - ������
#include <assert.h>

void my_strcpy(char* dest, const char* src) //����*src ����src�����޸�
{
	assert(src != NULL);
	assert(dest != NULL);

	while (*src++ = *dest++) //���д��
	{
		;
	}
}


//6�Ż� ��������
#include <assert.h>

char* my_strcpy(char* dest, const char* src)
{
	assert(src != NULL);
	assert(dest != NULL);

	char* ret = dest; //�ȴ����� �����Ѿ�ָ��src��Ӧ��\0��λ�� ������ʼλ��

	while (*dest++ = *src++)
	{
		;
	}

	return ret; //����Ŀ����ʼλ��
}

int main()
{
	char arr1[] = "abcdef";
	char arr2[10] = "xxxxxxxxxx";
	char* ret = my_strcpy(arr2, arr1); //arr2Ŀ������ 

	printf("%s\n", ret);
	//ֻ��ӡabcdef û�д�ӡ�����xxxx����Ϊ�ַ����Ľ�����־��\0

	return 0;
}


//����Ĵ������
int main()
{
	//1
	char arr1[] = "abcdef"; //[a b c d e f \0]
	char arr2[] = "xxxxxxxxx";

	//2 - ԭ�ַ�����һ��Ҫ��\0
	char arr1[] = { 'a', 'b', 'c' };
	char arr2[10] = "xxxxxxxxx";

	//3 - Ŀ��ռ�һ��Ҫ�㹻��
	char arr1[] = "abcdef";
	char arr2[3] = { 0 };

	//4 - Ŀ��ռ������޸�
	char arr1[] = "abcdef";
	const char* arr2 = "xxxxxxxxxxxxxxx"; //ָ��ָ������� ��ϣ�����޸�ʱ ��const ���Ͻ���ȫ
	//arr2��ָ�� ָ�����ַ����������ַ����Ƿ��ڳ��������ǲ����޸ĵ�
	//���ܿ�������ΪĿ��ռ�arr2���ܱ��޸�

	char* ret = my_strcpy(arr2, arr1);
	printf("%s\n", ret);

	return 0;
}


//��ӡ�ַ��� �����ô�ӡһ���ַ�
int main()
{
	char arr[] = "abcdef";
	const char* str = "kel";
	//��ӡ�ַ���
	printf("%s\n", arr);
	printf("%s\n", str);

	//�ַ�ָ�� ������ ֻ�ܷ���һ���ַ� 
	//arr���ʵ���a ��ӡ�����ַ�%c
	printf("%c\n", *arr); //a
	printf("%c\n", *str); //k

	return 0;
}


//�����ַ������ַ���ַ�����ָ��
int main()
{
	const char* str = "abcdef";
	//�����ַ���abcdef���ڴ�ĳ������� 
	//�ѳ����ַ������ַ�a�ĵ�ַ�����str��
	printf("%s\n", str); //abcdef
	printf("%c\n", *str); //a

	return 0;
}



//ģ��ʵ��strlen����
#include <assert.h>

//size_t - unsigned int ����Χ
unsigned int my_strlen(const char* str)
{
	assert(str != NULL);

	int count = 0;
	while (*str)
	{
		count++;
		str++;
	}

	return count;
}

int main()
{
	char arr[] = "abcdef";

	int ret = my_strlen(arr);

	printf("%d", ret);

	return 0;
}


//strlen�����������޷�����
int main()
{
	//3-6 = -3
	//10000000000000000000000000000011 - ԭ
	//11111111111111111111111111111100 - ��
	//11111111111111111111111111111101 - -3����
	//���ڴ��б�����Ϊ�޷����� ȫ������Чλ
	//���뼴ԭ�� ��һ���ܴ������
	if (strlen("abc") - strlen("abcdef") > 0)
	{
		printf("hehe\n"); //hehe
	}
	else
	{
		printf("haha\n");
	}

	return 0;
}



//��ҵ1
#include <stdio.h>

int main()
{
	int a, b, c;

	a = 5;
	c = ++a;
	b = ++c, c++, ++a, a++;
	b += a++ + c;

	printf("a = %d b = %d c = %d\n:", a, b, c);
	//a:9, b:23, c:8
	return 0;
}



//2 ͳ�ƶ�������1�ĸ���
//дһ���������ز����������� 1 �ĸ�����
//���磺 15    0000 1111    4 �� 1

//1) ��&1��>>���� 
size_t count_bit_one(int n)
{
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++) //i==31ʱ ���λ�������λ
	{
		//���λ��1��λ�� �����1��λ���������1
		//00000000000000000000000000001111 - 15
		//00000000000000000000000000000001 - 1
		//00000000000000000000000000000001 - &1 ���λ��1 �������1
		//��λ���>>
		if (((n >> i) & 1) == 1) //��i=0ʱ û������
		{
			count++;
		}
	}

	return count;
}

int main()
{
	int num = 0;
	scanf("%d", &num);

	int ret = count_bit_one(num);

	printf("%d\n", ret);

	return 0;
}


//2) ��%2���� 

//ʮ����%10 /10���Եõ�ÿһλ 
//123%10=3
//12/10=12
//12%10=2

//�����㲻�� ���޷�����
size_t count_bit_one(unsigned int n) //�Ѹ��������޷�������
{
	int count = 0;
	while (n)
	{
		if (n % 2 == 1)
		{
			count++;
		}
		n /= 2;
	}

	return count;
}

int main()
{
	int num = 0;
	scanf("%d", &num);

	int ret = count_bit_one(num);

	printf("%d\n", ret);

	return 0;
}


//3����n-1&
size_t count_bit_one(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}

int main()
{
	int num = 0;
	scanf("%d", &num);

	int ret = count_bit_one(num);

	printf("%d\n", ret);

	return 0;
}



//дһ�����룬�ж�һ�����ǲ���2�Ĵη���

//2 -- 0010
//4 -- 0100
//8 -- 1000
//16 -- 10000
int main()
{
	int n = 0;
	scanf("%d", &n);
	if ((n & (n - 1)) == 0)
	{
		printf("YES\n");
	}
	else
	{
		printf("N0\n");
	}

	return 0;
}