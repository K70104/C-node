#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//����ָ�� + �ṹ��

//һ��ָ������
//1��ָ��+-����

//������ÿ��Ԫ�ظ���0
#define N_VALUES 5
float values[N_VALUES];
float* vp;
for (vp = &values[0]; vp < &values[N_VALUES];) //ָ��Ƚϴ�С
{
    //���±������ ��ַ�ɵ͵���
    *vp++ = 0; //++���ȼ�����* ���Ǻ���++ �����Ƚ�����vp
    //ָ��=- floatָ��+1����һ��float���͵ı��� ������һ��Ԫ��
}


//ָ���С
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = &arr[9];

	printf("%p\n", p);
	printf("%p\n", p-1); //��4 ����ָ�� 4���ֽ�
}


//2��ָ��-ָ��
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d\n", &arr[9] - &arr[0]); //9
	printf("%d\n", &arr[0] - &arr[9]); //=9
	//�±�0-9֮����9��Ԫ��
	//ָ��-ָ�� �õ������ֵľ���ֵ��ָ���ָ��֮��Ԫ�صĸ���

	//ָ��-ָ���ǰ��������ָ��ָ��ͬһ������
	return 0;
}


//ָ����Ԫ�ظ���
int my_strlen(char* s)
{
	char* start = s;

	while (*s != '\0')
	{
		s++;
	}

	return s - start; //����\0ʱ��ָ��\0 ����ʼλ��
}

int main()
{
	char arr[] = "abcdef";

	int len = my_strlen(arr);

	printf("%d\n", len);

	return 0;
}


//3��ָ��������ϵ
//����1 �Ӻ���ǰ��
for (vp = &values[N_VALUES]; vp > &values[0];) //�±�Ϊ5�ĵ�ַ�Ž�vp
{
    *--vp = 0;
    //��-- ָ���±�4 ���һ��Ԫ�ظĳ�0
    //�����һ��Ԫ����ǰ��
}

//����2 ��ǰ�����
for (vp = &values[N_VALUES - 1]; vp >= &values[0]; vp--)
{
    *vp = 0;
    //���һ�ΰѵ�һ��Ԫ�ظĳ�0 vp-- ָ���һ��Ԫ��֮ǰһ��float���͵�λ�� 
}

//����ʹ�ô���2�ķ���
//��׼�涨��
//����ָ������Ԫ�ص�ָ����ָ���������һ��Ԫ�غ�����Ǹ��ڴ�λ�õ�ָ��Ƚϣ�
//���ǲ�������ָ���һ��Ԫ��֮ǰ���Ǹ��ڴ�λ�õ�ָ����бȽ�
////////////////


//����ָ�������
//�����ָ�������

//���� - ��һ�������Ŀռ䣬�ŵ�����ͬ���͵�Ԫ��
//�����С��Ԫ�����ͣ�Ԫ�ظ����й�
//int arr[10]

//ָ�루������ - ��һ���������ŵ�ַ
//ָ������Ĵ�С ��4(32bit)/8(64bit)��byte


//������
int main()
{
	int arr[10];

	//int* p = &arr[5]; //ȡ���±�Ϊ5��Ԫ�صĵ�ַ
	//int* q = &arr; //������ ��Ԫ�صĵ�ַ

	printf("%p\n", arr); //��������Ԫ�صĵ�ַ
	printf("%p\n", &arr[0]); //��Ԫ�صĵ�ַ

	int sz = sizeof(arr); //��������Ԫ�صĵ�ַ ��Ϊʲô����4/8 ����40
	//������ȷʵ����Ԫ�صĵ�ַ ������������
	//1. sizeof(������) - �����������������Ԫ�صĵ�ַ���Ǳ�ʾ��������ģ���������������������Ĵ�С����λ�����ֽ�
	//2. &������ - �����������������Ԫ�صĵ�ַ���Ǳ�ʾ��������ģ��õ����������ĵ�ַ
	
	return 0;
}


//��������ַ �����ַ
int main()
{
	int arr[10] = { 0 };
	//arr - ����������Ԫ�صĵ�ַ
	//&arr[0] - ��һ������ĵ�ַ
	//&arr - ȡ����������ĵ�ַ

	//ֵһ�� �����岻һ�� 
	//��Ԫ�ص�ַ�������ַ��ʼλ����һ��
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr);

	printf("%p\n", arr);
	printf("%p\n", arr + 1); //����ָ��+1 ����һ������
	
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0] + 1);

	printf("%p\n", &arr);
	printf("%p\n", &arr + 1); //����ĵ�ַ+1 ��������10Ԫ�� 40�ֽ�

	return 0;
}



//��������ָ��
//ָ�����Ҳ�Ǳ������Ǳ������е�ַ����ָ������ĵ�ַ������������Ƕ���ָ��
//����ָ�룺�������һ��ָ������ĵ�ַ
//����ָ�룺������Ŷ���ָ������ĵ�ַ
////////////////////////////
int main()
{
	int a = 10;
	int* p = &a;

	int* * pp = &p; //pp���Ƕ���ָ��
	//�ڶ���*��pp��ָ��
	//int*��ppָ���p��������int*

	int** * ppp = &pp; //ppp��������ָ��
	//���һ��*��ppp��ָ��
	//int**��pppָ���pp��������int**

	return 0;
}


//����ָ������� ���������
int main()
{
	int a = 10;
	int* p = &a;
	int** pp = &a;
	**pp = 20; //*pp�������ҵ�p **pp�ҵ�a
	printf("%d\n", a);

	return 0;
}



//�ġ�ָ������
//ָ������ָ�뻹�����飺����
int main()
{
	int arr[10]; //�������� - ������ε����������������
	char ch[5]; //�ַ����� - ����ַ�����������ַ�����
	//ָ������ - ���ָ����������ָ������
	//int* ����ָ�������
	//char* �ַ�ָ�������

	int* parr[5]; 
	char* pc[6]; //6��Ԫ�� ÿ��Ԫ��������char* 

	return 0;
}


//��ַ������
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;

	int* arr[3] = { &a, &b, &c };

	//int* pa = &a;
	//int* pb = &b;
	//int* pc = &c;

	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d\n", *(arr[i]));
		//��һ����ַ������ �õ����������ַָ���Ԫ��
	}

	return 0;
}




//�ṹ��
//һ���ṹ�������
//1���ṹ�Ļ���֪ʶ
//�ṹ��һЩֵ�ļ��ϣ���Щֵ��Ϊ��Ա�������ṹ��ÿ����Ա�����ǲ�ͬ���͵ı�����

//�ṹ�壺Ϊ�˿����������Ӷ���
//���Ӷ�������Բ�ֹһ�� ���Ծ����˲�ͬ�ĳ�Ա����


//2���ṹ������
struct Book //�ṹ������
{
	//��Ա���� �����ǲ�ͬ����
	char name[20];
	char author[15];
	float price;
};


//3���ṹ��Ա������
//�ṹ�ĳ�Ա�����Ǳ��������顢ָ�룬�����������ṹ�塣


//4���ṹ������Ķ���ͳ�ʼ��
//4.1�������ṹ�����ͱ���
struct Book 
{
	char name[20];
	char author[15];
	float price;
}; b1, b2; //b1 b2��ȫ�ֱ��� - �ڴ�ľ�̬��

struct Point
{
	int x;
	int y;
}; p1, p2; //p1 p2��ȫ�ֱ���

int main()
{
	//�����ṹ�����ͱ���
	struct Book b; //�ֲ����� - ջ��
	struct Point p; //�ֲ�����

	return 0;
}


//4.2���ṹ������������
typedef struct Stu
{
	char name[20];
	int age;
	char id[20];
}Stu; //��struct Stu������ ������ ��struct Stuһ��

int main()
{
	struct Stu s1; //��struct Stu
	Stu s2; //���Ӽ��

	return 0;
}


//4.3����ʼ��
int main()
{
	struct Stu s1 = { "����", 20, "2020080205" };
	Stu s2 = { "����", 30, "2020080216" };

	struct Book b;
	struct Point p = { 10, 20 };

	return 0;
}


//�ṹ��Ƕ�׳�ʼ��
struct S
{
	int a;
	char c;
	double d;
};

struct T
{
	struct S s; //��struct S���� ������struct S s����
	char name[20];
	int num��
};

int main()
{
	struct T t = { {100, 'c', 3.14}, "lisi", 30 };
	return 0;
}



//�����ṹ���Ա�ķ���
struct S
{
	int a;
	char c;
	double d;
};

struct T
{
	struct S s; //��struct S���� ������struct S s����
	char name[20];
	int num;
};

int main()
{
	//��ʼ��
	struct T t = { {100, 'c', 3.14}, "lisi", 30 };
	//����
	printf("%d %c %f %s %d\n", t.s.a, t.s.c, t.s.d, t.name, t.num);

	//�ýṹ��ָ�����
	struct T* pt = &t;
	printf("%d %c %f %s %d\n", pt->s.a, pt->s.c, pt->s.d, pt->name, pt->num);

	//�ṹ�����������.�� 
	//�ṹ��ָ����->   ���ҵ����ĳ�Աs�ǽṹ�����ʱ����.�ҳ�Աa

	return 0;
}



//�����ṹ�崫��
struct S
{
	int arr[100];
	int num;
	char ch;
	double d;
};

//�ṹ�崫��
void print1(struct S ss) //��ֵ����
{
	printf("%d %d %d %d %c %lf", ss.arr[0], ss.arr[1], ss.arr[2], ss.num, ss.ch, ss.d);

}

//�ṹ���ַ����
void print2(struct S* ps)
{
	printf("%d %d %d %d %c %lf", ps->arr[0], ps->arr[1], ps->arr[2], ps->num, ps->ch, ps->d);
}

int main()
{
	struct S s = { {1,2,3,4,5}, 100, 'w', 3.14 };
	print1(s); //���ṹ��
	print2(&s); //����ַ 4���ֽ� 
	//ֻ���˵�ַ ���ٿռ��˷� ����ѹ����С
	return 0;
}
//��ѡprint2 
//�������ε�ʱ�򣬲�������Ҫѹջ��
//�������ε�ʱ�򣬲�������Ҫѹջ�ġ� �������һ���ṹ������ʱ�򣬽ṹ�����
//����ѹջ��ϵͳ�����Ƚϴ����Իᵼ�����ܵ��½���

//���ۣ�
//�ṹ�崫�ε�ʱ��Ҫ���ṹ��ĵ�ַ


int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	int a = 10;
	int b = 20;
	int c = 0;
	c = Add(a, b);

	return 0;
}
//�β�x y���ڴ��ε�˲�俪�ٿռ�
//ջ����ʹ�øߵ�ַ�ռ���ʹ�õ͵�ַ�ռ�
























