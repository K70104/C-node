#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//һ�����������ָ�����

//1��һά���鴫��
void test(int arr[])
void test(int* p)
{}
int main()
{
	int arr[10] = { 0 };
	test(arr);
	return 0;
}


//
void test(int** p)
{}
int main()
{
	int* arr[10] = { 0 }; //10��Ԫ�� ÿ��Ԫ����int*���� ��Ԫ�ص�ַ����int*�ĵ�ַ �ö���ָ�����
	test(arr);
	return 0;
}


//2����ά���鴫��
void test(int arr[3][5]) {}
void test(int arr[][5]) {} //����ʡ���� ����ʡ����

//��ָ�뷽ʽ��
//��ά���鴫��Ԫ�ص�ʱ��ָ���ǵ�һ�� 
//��ָ���������ָ�����
void test(int(*p)[5]) {} //*pָ�� 5��Ԫ�� ÿ��Ԫ����int

int main()
{
	int arr[3][5] = { 0 };
	test(arr);
	return 0;
}


//3��һ��ָ�봫��
void print(int* ptr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(ptr + i));
	}
}

int main()
{
	int arr[] = { 1,2,3,4,4,5,6,7,8,9,10 };
	int* p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(p, sz);

	return 0;
}


//int* p������ʲô����
void test(int* p)
{}
int main()
{
	int a = 10;
	int* p1 = &a;
	int arr[10] = { 0 };

	test(&a);
	test(arr);
	test(p1);

	return 0;
}


//4������ָ�봫��
void test(int** ppa)
{}
int main()
{
	int a = 10;

	int* pa = &a;
	int** ppa = &pa;

	test(ppa);
	test(&pa);

	int* arr[5];
	test(arr); //ָ������ĵ�ַ

	return 0;
}



//��������ָ��

//����ָ����� - ��ź����ĵ�ַ
int Add(int x, int y)
{
	return x + y;
}

int main()
{
	printf("%p\n", &Add);
	//������ == &������
	printf("%p\n", Add);

	return 0;
}


//���� ����
int Add(int x, int y)
{
	return x + y;
}

int main()
{
	int (*pf)(int, int) = &Add; //pf��������ź����ĵ�ַ- pf���Ǻ���ָ�����
	//*pfָ���ŵ�ַ ָ��Add������������int ��������Ҳ��int

	int arr[10] = { 0 };
	int(*parr)[10] = &arr; //parr������ָ�����

	//����
	int a = 10; //int
	int arr[10] = { 0 }; //int [10]
	int(*parr)[10] = &arr; //int(*)[10]
	int (*pf)(int, int) = &Add; //int(*)(int, int)

	return 0;
}


//����
int Add(int x, int y)
{
	return x + y;
}

//1
int main()
{
	int (*pf)(int, int) = &Add;
	int ret = Add(2, 3);
	printf("%d\n", ret); //5

	ret = (*pf)(4, 5);
	printf("%d\n", ret); //9

	return 0;
}

//2
int main()
{
	int (*pf)(int, int) = Add;
	int ret = Add(2, 3);
	printf("%d\n", ret); //5

	//ret = (*pf)(4, 5);
	ret = pf(4, 5); //*��ʡ��
	printf("%d\n", ret); //9

	return 0;
}


//��Ȥ�Ĵ���
//1
int main()
{
	(*(void (*)()) 0) ();
	//void (*ptr)();
	//0ǿ������ת���ɺ���ָ������void(*)() ��0������ַ ָ�����޲��޷���ֵ�ĺ�����Ȼ������õ����������
	//������һ�κ�������
	//1. �����а�0ǿ������ת��������Ϊvoid(*)()��һ�������ĵ�ַ
	//2. ������0��ַ ����ȡ0��ַ��������� �����õĺ������޲� ����������void
	return 0;
}
//��C������ȱ�ݡ�

//2
int main()
{
	void(*signal(int, void(*)(int)))(int);
	//�˴�����һ�κ�������
	//�����ĺ�������signal
	//signal������2����������һ����int���� �ڶ�����void(*)(int)�ĺ���ָ������
	//signal�����ķ���������Ȼ�ǣ�void(*)(int)�ĺ���ָ������

	return 0;
}

//��
typedef void(*pfun_t)(int);

int main()
{
	pfun_t signal(int, pfun_t);

	return 0;
}



//��������ָ������

int* arr[10]; //����ָ�������
//����ָ������� - ��ź���ָ�������

int Add(int x, int y) //int (*)(int, int)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int main()
{
	int (*pf1)(int, int) = Add;
	int (*pf2)(int, int) = Sub;

	//pfArr����һ������ָ�������
	int (*pfArr[2])(int, int) = { Add, Sub };

	return 0;
}



//ʵ�ּӼ��˳�
int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}

void menu()
{
	printf("**********************************\n");
	printf("*******  1. add    2. sub  *******\n");
	printf("*******  3. mul    4. div  *******\n");
	printf("*******  0. exit           *******\n");
	printf("**********************************\n");
}

int main()
{
	int input = 0;
	do
	{
		int x = 0;
		int y = 0;
		int ret = 0;
		menu();
		printf("��ѡ��:>\n");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			printf("������2��������:>\n");
			scanf("%d %d", &x, &y);
			ret = Add(x, y);
			printf("ret=%d\n", ret);
			break;
		case 2:
			printf("������2��������:>\n");
			scanf("%d %d", &x, &y);
			ret = Sub(x, y);
			printf("ret=%d\n", ret);
			break;
		case 3:
			printf("������2��������:>\n");
			scanf("%d %d", &x, &y);
			ret = Mul(x, y);
			printf("ret=%d\n", ret);
			break;
		case 4:
			printf("������2��������:>\n");
			scanf("%d %d", &x, &y);
			ret = Div(x, y);
			printf("ret=%d\n", ret);
			break;
		case 0:
			printf("�˳������\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}

	} while (input);

	return 0;
}

//�Ż� 
int main()
{
	int input = 0;
	do
	{
		int x = 0;
		int y = 0;
		int ret = 0;
		menu();
		printf("��ѡ��:>\n");
		scanf("%d", &input);
		//��C��ָ�롷
		int (*pfArr[5])(int, int) = { 0, Add,Sub,Mul,Div };
		//0 1 2 3 4

		if (input == 0)
		{
			printf("�˳�������\n");
		}
		else if (input >= 1 && input <= 4)
		{
			printf("������2��������:>");
			scanf("%d %d", &x, &y);
			ret = pfArr[input](x, y);
			printf("%d\n", ret);
		}
		else
		{
			printf("ѡ�����\n");
		}

	} while (input);

	return 0;
}

//����
void Calc(int(*pf)(int, int))
{
	int x = 0;
	int y = 0;
	int ret = 0;

	printf("������2��������:>\n");
	scanf("%d %d", &x, &y);
	ret = pf(x, y);
	printf("ret=%d\n", ret);
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>\n");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			Calc(Add);
			break;
		case 2:
			Calc(Sub);
			break;
		case 3:
			Calc(Mul);
			break;
		case 4:
			Calc(Div);
			break;
		case 0:
			printf("�˳������\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}

	} while (input);

	return 0;
}



//�ġ��ص�����
/* �ص���������һ��ͨ������ָ����õĺ����������Ѻ�����ָ�루��ַ����Ϊ�������ݸ���һ
�������������ָ�뱻������������ָ��ĺ���ʱ�����Ǿ�˵���ǻص��������ص����������ɸ�
������ʵ�ַ�ֱ�ӵ��ã��������ض����¼�����������ʱ�������һ�����õģ����ڶԸ��¼���
����������Ӧ�� */



//�塢ָ����ָ�������ָ��

int arr[10];
int(*p)[10] = &arr;
//p��һ��ָ�� �������� ��ָ��

int* arr[10]; //����ָ�������
int* (*p)[10] = &arr; //����ָ������ĵ�ַ
//p��һ��ָ�� ����ָ������ ��ָ��

int Add(int x, int y)
{
	return x + y;
}
int (*pf)(int, int) = Add; //pf�Ǻ���ָ��
int (*pfArr[5])(int, int); //pfArr��һ������ָ�������
int (*(*ppfArr)[5](int, int) = &pfArr;
//ppfArr��һ��ָ����ָ�������ָ��
