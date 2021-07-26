// ��֧��ѭ��getchar

// ������ʲô��˼
// ����1

#include <stdio.h>

// getchar - ���� - �Ӽ��̶�ȡ�ַ��ģ������ַ���

// getchar �Ƕ�ȡ�ַ� 
// Ϊ��ô����������int��
// 1. getchar ��Ȼ���ص����ַ� ��ʵ���ص�����˽����ASCII��ֵ ��ΪASCII������ ���Է���int
// 2. getchar �ڶ�ȡ������ʧ�ܵ�ʱ�� �᷵��EOF
//    EOF - end of file  ->  -1
//    -1������ ��ASCII�뷶Χû������

// �������� -> Ctrl+Z �س�
int main()
{
	int ch = 0;

	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}

	return 0;
}



// 2. getchar��ȡ����
int main()
{
	char password[20] = { 0 };

	printf("����������:>");
	scanf_s("%s", password, 20);

	printf("��ȷ������(Y/N):>");
	int ch = getchar();

	if (ch == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("ȷ��ʧ��\n");
	}

	return 0;
}
// ��ȷ������(Y/N):>ȷ��ʧ��
// 
// ���뺯��scanf��getchar �����ڻ������￴ ����� �Ͳ��ü�������
// �������ǿյ� ���������ַ��������� ��ʱ��������abcdef\n
// scanf��ȡ abcdef
// getchar ��ȡ\n 

// �ѻ�������\n�����(ֻ�����һ��\n)
int main()
{
	char password[20] = { 0 };

	printf("����������:>");
	scanf_s("%s", password, 20);

	// �ѻ�������\n�����
	getchar();

	printf("��ȷ������(Y/N):>");
	int ch = getchar();

	if (ch == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("ȷ��ʧ��\n");
	}

	return 0;
}


// �������abcdef fiok ���ǡ���ȷ������(Y/N):>ȷ��ʧ�ܡ�
// ��Ϊscanfֻ��ȡ��abcdef
int main()
{
	char password[20] = { 0 };

	printf("����������:>");
	scanf_s("%s", password, 20);

	// �ѻ����е�����
	int tmp = 0;
	while (tmp = getchar() != '\n')
	{
		;
	}

	printf("��ȷ������(Y/N):>");
	int ch = getchar();

	if (ch == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("ȷ��ʧ��\n");
	}

	return 0;
}

// gets - ֱ�Ӷ�һ��



// ֻ��ӡ����
int main()
{
	int ch = 0;

	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch>'9')
			continue;
		putchar(ch);
	}

	return 0;
}




// ��ҵ
// 1. �ܰѺ����������Ķ������ݷ��ظ���������

// return 2��ֵ��err�� 

// һ������ֻ�ܷ���һ����� return a,b �����20 -> ���ű��ʽ
int test()
{
	int a = 10;
	int b = 20;
	return a, b; // err
}

int main()
{
	int ret = test();
	printf("%d\n", ret);

	return 0;
}



// �β�������
void test(int arr[])
{
	int a = 10;
	int b = 20;

	arr[0] = a;
	arr[1] = b;
}

int main()
{
	int arr[2] = { 0 };
	test(arr);
	
	printf("%d %d\n", arr[0], arr[1]);

	return 0;
}



// �β���2��ָ��
void test(int* px, int* py)
{
	int a = 10;
	int b = 20;
	*px = a;
	*py = b;
}

int main()
{
	int x = 0;
	int y = 0;

	test(&x, &y);

	printf("%d %d\n", x, y);

	return 0;
}



// ��2��ȫ�ֱ���
int x = 0;
int y = 0;

void test()
{
	int a = 10;
	int b = 20;

	x = a;
	y = b;
}

int main()
{

	test();

	printf("%d %d\n", x, y);

	return 0;
}



// 2
// ���ھ۵���ϣ��Լ����Լ����������ã��������ͱ��˲�������


// ��һ�������ڸ�������ж���ı����ڱ�������Χ����Ч���������ָ�����еĳɶ����Ź��ɵĴ��룩
void test()
{
	{
		int a = 10;
	}
	printf("a=%d\n", a); // err
}

int main()
{
	return 0;
}




// 3.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
void print_table(int n)
{
	int i = 0;

	for (i = 1; i <= n; i++)
	{
		int j = 0;

		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i * j);
		}
		printf("\n");
	}
}

int main()
{
	int n = 0;
	scanf_s("%d", &n);

	print_table(n);

	return 0;
}




// 4.�ַ�������1.�ݹ�ʵ�� 2.����ʹ��C�������е��ַ�������������

// �ú���ѭ��
 #include <string.h>

void  reverse_string(char* str)
{
	// ��ָ��
	// char* left = str;
	// char* right = str + len - 1;

	// ���±�
	int len = strlen(str);

	int left = 0;
	int right = len - 1;

	while (left < right)
	{
		char tmp = str[left];
		str[left] = str[right];
		str[right] = tmp;
		left++;
		right--;
	}
}

int main()
{
	char arr[20] = "abcdef";

	reverse_string(arr);

	printf("%s\n", arr); // fedcba

	return 0;
}



// �ݹ�汾
int my_strlen(char* str)
{
	// ����ʹ�ÿ⺯�� ��my_strlen�������������ַ���
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

void  reverse_string(char* str) // char str[]
{
	int len = my_strlen(str); // ���ַ�������
	char tmp = str[0]; // *str  ��a �Ž�tmp
	str[0] = str[len - 1]; // ��f �Ž�a
	str[len - 1] = '\0'; // ��\0 �Ž�f

	if (my_strlen(str + 1) >= 2)
		reverse_string(str + 1);
	str[len - 1] = tmp; // ���ݹ� ��tmp �Ž�\0
}

int main()
{
	char arr[20] = "abcdef";

	reverse_string(arr);

	printf("%s\n", arr);

	return 0;
}




// 5.����һ������ÿλ֮�ͣ��ݹ�ʵ�� �Ǹ�������
int DigitSum(unsigned int n)
{
	if (n > 9)
	{
		return DigitSum(n / 10) + n % 10;
	}
	else
	{
		return n;
	}
}

int main()
{
	unsigned int num = 1729;

	int ret = DigitSum(num);
	
	printf("%d\n", ret);

	return 0;
}




// 6.�ݹ�ʵ��n��k�η�
// Pow(n, k)  ��k>0 -> n*Pow(n, k-1)
// ��k=0 -> 1  ��k<0 -> 1.0/n^-k -> 1.0/Pow(n, -k)
double Pow(int n, int k)
{
	if (k > 0)
		return n * Pow(n, k - 1);
	else if (k == 0)
		return 1.0;
	else
		return 1.0 / Pow(n, -k);
}

int main()
{
	int n = 2;
	int k = -3;
	double ret = Pow(n, k);

	printf("%lf\n", ret);

	return 0;
}