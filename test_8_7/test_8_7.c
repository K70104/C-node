#define _CRT_SECURE_NO_WARNINGS 1

//������
unsigned long pulArray[] = { 6,7,8,9,10 };
unsigned long* pulPtr;
pulPtr = pulArray;
*(pulPtr + 3) += 3;
printf("%d, %d\n", *pulPtr, *(pulPtr + 3));
//��pulArray��Ԫ�صĵ�ַ��pulPtr
//pulPtr + 3������ ָ����ĸ�Ԫ��9 ��9����
//6 12



//�ṹ��
struct S
{
	int a;
	int b;
};
int main()
{
	struct S a, * p = &a;
	a.a = 99;
	printf("%d\n", __________);
	return 0;
}
//struct *p = &a;
//a.a =99;
//�ṹ�����ͱ�����Ҫ�������Աʱ����.������������ָ��ṹ�������ָ�����ʱ��
//��Ҫ��->,�����ȶ�ָ������ã�ȡ��ָ��Ľṹ�����͵ı�������ͨ��.���ʣ�����Ҫע�����ȼ�
// *p.a ���� ��Ϊ.�����ȼ�����



//�ַ�������
//��һ���ַ���str�����ݵߵ��������������str�ĳ��Ȳ�����100���ַ���
//����һ���ַ����������пո�

//�±�
#include <stdio.h>

void reverse(char* str)
{
	unsigned int len = strlen(str);
	int left = 0;
	int right = len - 1;

	while (left < right)
	{
		int tmp = str[left];
		str[left] = str[right];
		str[right] = tmp;
		left++;
		right--;
	}
}

int main()
{
	char arr[100] = { 0 };

	gets(arr);

	reverse(arr);

	printf("%s\n", arr);

	return 0;
}

//ָ��
void reverse(char* str)
{
	unsigned int len = strlen(str);
	char* left = str;
	char* right = str + len - 1;

	while (left < right)
	{
		int tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

int main()
{
	char arr[100] = { 0 };

	gets(arr);

	reverse(arr);

	printf("%s\n", arr);

	return 0;
}



//��ӡ����
int main()
{
	int line = 0;
	scanf("%d", &line); //7

	int i = 0;
	//�� - 7��
	for (i = 0; i < line; i++)
	{
		//��ӡһ��
		//��ӡ�ո�
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		//��ӡ*
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//�� - 6��
	for (i = 0; i < line - 1; i++)
	{
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		//* ��ӡ
		for (j = 0; j < (line - 1 - i) * 2 - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}



//����ˮ����
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȶ�����ˮ
int main()
{
	int money = 0;
	int total = 0;
	int empty = 0;
	scanf("%d", &money);
	//����
	total += money;
	empty = money;

	//�û�
	while (empty >= 2)
	{
		total += empty / 2;
		empty = empty / 2 +empty%2; //empty%2  ����ʱ��ʣ�µ�һƿ
	}

	printf("%d\n", total);

	return 0;
}


int main()
{
	int money = 0;
	int total = 0;
	int empty = 0;
	scanf("%d", &money);

	if (money >= 1)
		total = 2 * money - 1; //��һƿ 19Ԫ��38��ƿ
	else
		total = 0;

	printf("%d\n", total);

	return 0;
}



/*��������ż��˳��
����һ���������飬ʵ��һ��������
�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
����ż��λ������ĺ�벿�֡�*/
//void move_Parity(int* arr, int sz)
//{
//	int* left = arr;
//	int* right = arr + sz - 1;
//
//	while (left < right)
//	{
//		while ((*left) % 2 != 0)
//		{
//			left++;
//		}
//		while ((*right) % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = *left;
//			*left = *right;
//			*right = tmp;
//		}
//	}
//}


void move_Parity(int* arr, int sz)
{
	int left = 0;
	int right = sz - 1;

	while (left < right)
	{
		//��ǰ����ҵ�һ��ż��
		while ((left<right) && arr[left] % 2 == 1)
		{
			left++;
		}
		//�Ӻ���ǰ�ҵ�һ������
		while ((left < right) && arr[right] % 2 == 0)
		{
			right--;
		}
		//����
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}

void Print(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	//ȫ��ż�� ȫ������
	//��ż����
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	move_Parity(arr, sz);

	Print(arr, sz);

	return 0;
}



//���ݵĴ洢

//��������
//��������������:

//C���Կ⺯���Ǳ������ĳ����ṩ�ģ���VS��gcc
//C���Ա�׼�涨��һЩ�⺯�������������������ͣ�����ֵ���ͣ���������
//size_t strlen(const char* str);

//���͵����壺
//1. ʹ��������Ϳ����ڴ�ռ�Ĵ�С����С������ʹ�÷�Χ����
//2. ��ο����ڴ�ռ���ӽǡ�

/*�������͵Ļ������ࣺ
���μ��壺
char:
unsigned char
signed char
short:
unsigned short[int]
signed short[int]
int:
unsigned int
signed int
long:
unsigned long[int]
signed long[int]
long long */

//char a; ���޷��� ȡ���ڱ�����
//short,int,long --�����з��ŵģ�����unsigned�����޷���


//unsigned signed����
//char -- 1byte-- 8bit
int main()
{
	unsigned char c1 = 255; //�޷��� ���λ����Чλ -1��ȫ1
	printf("%d\n", c1); //255
	//11111111 - �ڴ��зŶ����ƵĲ���

	char c2 = 255; //char --signed char ���λ�Ƿ���λ
	//11111111
	//11111110
	//10000001
	printf("%d\n", c2); //-1

	return 0;
}


//��Χ
//����ŵ�char -- -128~127  
//unsigned char -- 0~255


/*���������壺
float
double */


/*�������ͣ��Զ������ͣ���
��������
�ṹ������ struct
ö������ enum
�������� union*/

//�������� - �Զ�������
int main()
{
	int a = 10;
	int arr[10] = { 0 }; //arr-������
	//ȥ���������������� - int [10]

	printf("%d\n", sizeof(a)); //4
	printf("%d\n", sizeof(int)); //4
	
	printf("%d\n", sizeof(arr)); //40
	printf("%d\n", sizeof(int [10])); //40

	int arr2[5]; //�������ͣ�int [5]
	//����Ԫ�ظ�����һ��ʱ����������Ҳ��ı�
	return 0;
}


/*ָ������
int* pi;
char* pc;
float* pf;
void* pv;*/


/*�����ͣ�
void ��ʾ�����ͣ������ͣ�
ͨ��Ӧ���ں����ķ������͡������Ĳ�����ָ�����͡�*/

void test(void) //�������ò�Ҫ����
{
	printf("hehe\n");
}

int main()
{
	test();
	test(100);

	return 0;
}



//�����������ڴ��еĴ洢
//ԭ�롢���롢����

/*==����������˵�����ݴ���ڴ�����ʵ��ŵ��ǲ��롣==
�ڼ����ϵͳ�У���ֵһ���ò�������ʾ�ʹ洢��ԭ�����ڣ�ʹ�ò��룬���Խ�����λ����ֵ��ͳһ���� ͬ
ʱ���ӷ��ͼ���Ҳ����ͳһ����CPUֻ�мӷ��������⣬������ԭ���໥ת�����������������ͬ�ģ�����
Ҫ�����Ӳ����·��*/
//ԭ���� ת�� �����÷���λ���䣬����λ��λȡ����+1�໥ת��


//ʲô�Ǵ��С�ˣ�
/*int a = 0x11223344;
���ֽڴ��
44 33 22 11 С���ֽ���洢 
�͵�ַ ----�ߵ�ַ
11 22 33 44 ����ֽ���洢*/

/* С���ֽ���洢��
��һ�����ֵĵ�λ�ֽڵ����ݣ�������ڴ�ĵ͵�ַ��
        �Ѹ�λ�ֽڵ����ݴ���ڸߵ�ַ��
����ֽ���洢��
��һ�����ֵĵ�λ�ֽڵ����ݣ�������ڴ�ĸߵ�ַ��
        �Ѹ�λ�ֽڵ����ݴ���ڵ͵�ַ�� */


/*Ϊʲô�д�˺�С�ˣ�
Ϊʲô���д�С��ģʽ֮���أ�������Ϊ�ڼ����ϵͳ�У����������ֽ�Ϊ��λ�ģ�ÿ����ַ��Ԫ����Ӧ��һ
���ֽڣ�һ���ֽ�Ϊ8bit��������C�����г���8bit��char֮�⣬����16bit��short�ͣ�32bit��long�ͣ�Ҫ����
��ı������������⣬����λ������8λ�Ĵ�����������16λ����32λ�Ĵ����������ڼĴ�����ȴ���һ����
�ڣ���ô��Ȼ������һ�����������ֽڰ��ŵ����⡣��˾͵����˴�˴洢ģʽ��С�˴洢ģʽ��
����һ�� 16bit �� short �� x �����ڴ��еĵ�ַΪ 0x0010 �� x ��ֵΪ 0x1122 ����ô 0x11 Ϊ���ֽڣ� 0x22
Ϊ���ֽڡ����ڴ��ģʽ���ͽ� 0x11 ���ڵ͵�ַ�У��� 0x0010 �У� 0x22 ���ڸߵ�ַ�У��� 0x0011 �С�С
��ģʽ���պ��෴�����ǳ��õ� X86 �ṹ��С��ģʽ���� KEIL C51 ��Ϊ���ģʽ���ܶ��ARM��DSP��ΪС
��ģʽ����ЩARM��������������Ӳ����ѡ���Ǵ��ģʽ����С��ģʽ��*/
