#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 1. ����ת��

// ����һ��������n(1 �� n �� 109)
// ���������
// ���һ�У�Ϊ������n��ʾΪ�����ƵĽ��
int main()
{
	int num = 0;
	int arr[50] = { 0 };
	//����
	scanf("%d", &num);
	//ת��
	int i = 0;
	while (num)
	{
		arr[i] = num % 6; // %6/6�õ����λ ���Ŵ�ӡ����
		i++;
		num = num / 6;
	}
	//���
	for (i--; i >= 0; i--) //ѭ��ͣ����ʱi++ ָ����һ�� ��i-- ���Ŵ�ӡ ����Ҳ��i--
	{
		printf("%d", arr[i]);
	}
	return 0;
}



// 2. n�����ڵȵ��ݡ�����ÿ�ο��Գ���12�ˣ�ÿ��������Ҫ��ʱ��Ϊ4���ӣ�����Ҫ2���ӣ�����Ҫ2���ӣ���
// �������һ������n (0 �� n �� 109)
// ���һ����������С���ֵ���¥����Ҫ��ʱ�䡣
int main()
{
	int n = 0;
	int t = 0;
	//����
	scanf("%d", &n);
	//����
	int t = n / 12 * 4 + 2;
	//���
	printf("%d\n", t);

	return 0;
}



// 3. ���һ����������Ϊn��m�����Լ������С������֮�͡�
// ��ʱ Ч�ʵ�
int main()
{
	long n = 0;
	long m = 0;
	//����
	scanf("%d %d", &n, &m);
	//����
	//1. �������Լ��
	long long max = (m > n) ? (n) : (m);
	while (1)
	{
		if ((m % max == 0) && (n % max == 0))
		{
			break;
		}
		max--;
	}
	//2. ������С������
	long long min = (m > n) ? (m) : (n); // ��С�������������нϴ�ʼ
	while (1)
	{
		if ((min % m == 0) && (min % n == 0))
		{
			break;
		}
		min++;
	}
	//3. ���
	long long sum = max + min;
	//��ӡ
	printf("%lld", sum);

	return 0;
}


//շת����������Լ�� ��С������=
int main()
{
	long long n = 0;
	long long m = 0;

	scanf("%d %d", &n, &m);

	long long n2 = n;
	long long m2 = m;

	long long c = 0;
	while (c = m2 % n2)
	{
		m2 = n2;
		n2 = c;
	}

	long long min = m * n / n2;

	long long sum = min + n2;

	printf("%lld", sum);

	return 0;
}



// 4. �Ӽ�����������һ���ַ�������ж��Ƿ�����ĸ��������Сд����
// �������룬ÿ���������һ���ַ���
// ������ַ�����ĸ��YES�����ǣ�NO����
int main()
{
	// ��������
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch >= 'A' && ch <= 'Z' || (ch >= 'a' && ch <= 'x'))
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		getchar(); // ����\n
	}

	return 0;
}



// 5. �������룬һ��������3~20��
// ����4 �����
// ****
// *  *
// *  *
// ****

// �м䶼��
#include <stdio.h>

int main()
{
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		int i = 0;
		for (i = 0; i < n; i++)
		{
			int j = 0;
			for (j = 0; j < n; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
	}

	return 0;
}

// ��
int main()
{
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		int i = 0;
		for (i = 1; i <= n; i++) // i=0 i<n
		{
			// ��ӡһ��
			int j = 0;
			for (j = 1; j <= n; j++)
			{
				// ����ж������Ǵ�0��ʼ ������±����i==1��i==n-1
				if (i == 1 || i == n || j == 1 || j == n)
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}
			}
			printf("\n");
		}
	}

	return 0;
}



// 6. ����7��������0-100��
// һ�У����ȥ����߷ֺ���ͷֵ�ƽ���ɼ���С�������2λ��ÿ��������С�
int main()
{
	int i = 0;
	int sc = 0;
	int sum = 0;
	int max = 0; // ����0������߷�
	int min = 100; // ����100������ͷ�

	for (i = 0; i < 7; i++)
	{
		scanf("%d", &sc);
		sum += sc;
		if (sc > max)
			max = sc;
		if (sc < min)
			min = sc;
	}

	double avg = (sum - max - min) / 5.0;

	printf("%.2lf\n", avg); // .2 ������λС����

	return 0;
}



// 7. ÿһ����������a��b��c(0<a,b,c<1000)����Ϊ�����ε������ߣ��ÿո�ָ���
// ���ÿ���������ݣ����ռһ�У�����ܹ��������Σ��ȱ��������������Equilateral triangle!����
// �����������������Isosceles triangle!����������������������Ordinary triangle!������֮�����Not a triangle!����
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;

	//while (~scanf("%d %d %d", &a, &b, &c))
	// EOF��-1 -1������ȫ1 ��λȡ����ȫ0 ������EOF�Ͳ���Ϊ0

	while (scanf("%d %d %d", &a, &b, &c) != EOF)
	{
		if ((a + b > c) && (a + c > b) && (b + c > a))
		{
			// �жϱ�
			if (a == b && b == c)
			{
				printf("Equilateral triangle!\n");
			}
			else if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
			{
				printf("Isosceles triangle!\n");
			}
			else
			{
				printf("Ordinary triangle!\n");
			}
		}
		else
		{
			printf("Not a triangle!\n");
		}
	}

	return 0;
}



// 8
int main()
{
	int arr[] = { 1, 2, (3,4), 5 }; // ���ű��ʽ 1 2 4 5
	printf("%d\n", sizeof(arr));
	// ��������ʾ�������� ���������������Ĵ�С 4��Ԫ�� ÿ��Ԫ����int 
	// 4*4 = 16
	return 0;
}


// sizeof��������ڴ�ռ�ÿռ�Ĵ�С
// strlen���ַ������� \0֮ǰ���ַ�


// 10.������A�е����ݺ�����B�е����ݽ��н�����������һ����

// ���鴫ַ����
void test(int arr[], int sz) // �����ǵ�ַ
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		//printf("%d ", arr[i]); // arr[i] --->  *(arr+i)
		printf("%d ", *(arr + i));
	}
}

int main()
{
	int arr[10] = { 1, 2, 3, 4 ,5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	test(arr, sz); // ���鴫�ι�ȥ�����������Ԫ�صĵ�ַ

	return 0;
}


void exchange(int a[], int b[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int tmp = a[i];
		a[i] = b[i];
		b[i] = tmp;
	}
}

int main()
{
	int a[] = { 1, 3, 5, 7, 9 };
	int b[] = { 2, 4, 6, 8, 10 };
	int sz = sizeof(a) / sizeof(a[0]);
	exchange(a, b, sz);

	return 0;
}



#include <stdio.h>

int main()
{
	int arr1[10] = { 1, 2, 3, 4, 5 };
	int arr2[10] = { 6, 7, 8, 9, 10 };

	int i = 0;
	for (i = 0; i < 10; i++)
	{
		int temp = 0;
		temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr2[i]);
	}

	return 0;
}



// 11. ����һ���������飬��ɶ�����Ĳ���
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
void Init(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		*(arr + i) = 0;
	}
}

void Print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

Reverse(int arr[], int sz)
{
	int l = 0; // ���±�
	int r = sz - 1; // ���±�

	while (l < r)
	{
		int tmp = arr[l];
		arr[l] = arr[r];
		arr[r] = tmp;
		l++;
		r--;
	}
}

int main()
{
	int arr[10];
	int sz = sizeof(arr) / sizeoff(arr[0]);
	Init(arr, sz); //��ʼ��Ϊȫ0   0-9
	Print(arr, sz); // ��ӡ
	Reverse(arr, sz); // ����
	Print(arr, sz); // ���ú��ٴ�ӡ   9-0
	return 0;
}




// �±����á��������úͽṹ��Ա
// []�±����ò�����
int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int i = 0;

	for (i = 0; i < 5; i++)
	{
		printf("%p ---- %p\n", &arr[i], arr + i);
		// &arr[i] �� arr+i ��ӡ�ĵ�ַ��ȫһ��
		// arr+i - ��������arr�У��±�Ϊi��Ԫ�صĵ�ַ
	}

	return 0;
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int i = 0;
	//arr[4];  �ȼ���*(arr+4)   
	// []�ǲ����� arr��4������������

	// arr[4] --- *(arr+4)
	// arr[4] ---> *(arr+4) ---> *(4+arr) ---> 4[arr]
	printf("%d\n", arr[4]);
	printf("%d\n", 4[arr]); // ���� []�����Ǹ������� 

	return 0;
}


// �������ò����� - ()

#include <string.h>

int main()
{
	// printf("%d", strlen("abc"));
	// strlen���ص���size_t --- unsigned int �޷�������
	// %d��ӡ�����з����� ��%u
	printf("%u\n", strlen("abc"));

	return 0;
}


void test()
{
	printf("hehe\n");
}

int main()
{
	test();
	//  () - �������ò����� ����һ�����߶������������һ���������Ǻ�������ʣ��Ĳ��������Ǵ��ݸ������Ĳ���

	return 0;
}


// . �ṹ��.��Ա��
// -> �ṹ��ָ��->��Ա��

// �Զ�������
// struct Book �ṹ������
// struct Book b �ṹ�����
struct book // �ṹ��ؼ��� - struct
{
	char name[20];
	float price;
	char id[10];
};

void print1(struct book b)
{
	printf("������%s\n", b.name);
	printf("�۸�%f\n", b.price);
	printf("������%s\n", b.id);
}

int main()
{
	struct book b = { "c���Գ������", 55.5f, "c23479383" };
	print1(b);

	return 0;
}



// ��
int main()
{
	struct Book b = { "C���Գ������", 55.5f, "C23479383" };
	Print1(b);

	b.price = 100.0f;// ��
	//b.name = "���ݽṹ"; // err 
	//name������ �������ǳ����ĵ�ַ Ӧ�÷��ڵ�ַ��ָ��Ŀռ���
	// ��==�ַ������� - strcpy==   �⺯�� ͷ�ļ�string.h
	strcpy(b.name, "���ݽṹ");
	Print1(b);

	return 0;
}


// ����ַ
struct Book
{
	char name[20];
	float price;
	char id[10];
};

void Print2(struct Book* pb) // �ṹ��ָ�����
{
	printf("������%s\n", (*pb).name);
	printf("�۸�%f\n", (*pb).price);
	printf("������%s\n", (*pb).id);
}

int main()
{
	struct Book b = { "C���Գ������", 55.5f, "C23479383" };
	Print2(&b); // ����ַ

	return 0;
}


// �ṹ���Ա���ʲ�����
void Print2(struct Book* pb)
{
	// . �ṹ��.��Ա��
	//printf("������%s\n", (*pb).name);
	//printf("�۸�%f\n", (*pb).price);
	//printf("������%s\n", (*pb).id);

	// -> �ṹ��ָ��->��Ա��
	printf("������%s\n", pb->name);
	printf("�۸�%f\n", pb->price);
	printf("������%s\n", pb->id);

	// ��        ��
	// �ṹ����.��Ա��
	// �ṹ��ָ��->��Ա��

	// (*�ṹ��ָ��).��Ա��   ---������
}



