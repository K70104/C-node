#define _CRT_SECURE_NO_WARNINGS 1

//BC109
#include <stdio.h>

int main()
{
	int n = 0;
	int arr[30][30] = { 0 };
	scanf("%d", &n);
	int i = 0;
	int j = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (j == 0)
				arr[i][j] = 1;
			if (i == j)
				arr[i][j] = 1;
			if (i >= 2 && j >= 1)
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%5d", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}


//BC110
#include <stdio.h>

int main()
{
	char arr[3][3] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf(" %c", &arr[i][j]); //�ַ� ��ȡ�ո�
			//getchar();
		}
	}
	//�ж���Ӯ
	char flag = 'o';
	for (i = 0; i < 3; i++)
	{
		//3��
		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][1] != 'o')
		{
			flag = arr[i][1];
			break;
		}
		//3��
		if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[1][i] != 'o')
		{
			flag = arr[1][i];
			break;
		}
	}
	//2���Խ���
	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[1][1] != 'o')
	{
		flag = arr[1][1];
	}
	if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[1][1] != 'o')
	{
		flag = arr[1][1];
	}

	if (flag == 'K')
	{
		printf("KiKi wins!\n");
	}
	else if (flag == 'B')
	{
		printf("BoBo wins!\n");
	}
	else
	{
		printf("No winner!\n");
	}

	return 0;
}


//BC112
#include <stdio.h>
//1-n�ĺ�
int main()
{
	int n = 0;
	long long sum = 0;
	scanf("%d", &n);
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		sum += i;
	}
	printf("%lld\n", sum);

	return 0;
}

/*
int main()
{
	long long n = 0;
	long long sum = 0;
	scanf("%d", &n);
	sum = (1+n)*n/2;
	printf("%lld\n", sum);

	return 0;
}
*/


//BC113
#include <stdio.h>

int main()
{
	int h = 0;
	int m = 0;
	int k = 0;
	scanf("%d:%d %d", &h, &m, &k);

	h = ((m + k) / 60 + h) % 24;
	m = (m + k) % 60;

	printf("%02d:%02d\n", h, m);

	return 0;
}


//BC115
#include <stdio.h>
/*
int main()
{
	long long n = 0;
	long long m = 0;
	scanf("%lld %lld", &n, &m);

	long long max = n > m ? m : n; //����n��m�Ľ�СֵΪ���Լ��
	long long min = n > m ? n : m; //����n��m�Ľϴ�ֵΪ��С������

	while (1)
	{
		if (n % max == 0 && m % max == 0)
		{
			break;
		}
		max--;
	}
	while (1)
	{
		if (min % n == 0 && min % m == 0)
		{
			break;
		}
		min++;
	}

	printf("%lld\n", max + min);

	return 0;
}
*/

/*
int main()
{
	long long n = 0;
	long long m = 0;
	scanf("%lld %lld", &n, &m);
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
*/

//շת�����
int main()
{
	long long n = 0;
	long long m = 0;
	scanf("%lld %lld", &n, &m);

	long long tmp = 0;
	long long max = 0;
	long long min = 0;
	long long n2 = n;
	long long m2 = m;
	//24 % 18 = 6
	//18 % 6 = 0
	while (tmp = n % m)
	{
		n = m;
		m = tmp;
	}
	max = m;
	//��С������= n*m/max
	min = n2 * m2 / max;

	printf("%lld\n", max + min);

	return 0;
}


//BC116
#include <stdio.h>

int main()
{
	int n = 0;
	int i = 0;
	int sum = 0;
	scanf("%d", &n);
	while (n)
	{
		int m = n % 10;
		if (m % 2 == 1) //���� ��1
			m = 1;
		else
			m = 0;
		sum += m * pow(10, i++); //��λ��10^0 ��λ��20^2
		n /= 10;
	}
	printf("%d\n", sum);

	return 0;
}


//BC117
#include <stdio.h>

int Fib(int n)
{
	if (n <= 2)
		return n;
	else
		return Fib(n - 1) + Fib(n - 2);
}

int main()
{
	int n = 0;
	scanf("%d", &n);

	int ret = Fib(n);

	printf("%d\n", ret);

	return 0;
}


//BC118
#include <stdio.h>

int main()
{
	int n = 0;
	int arr[100001] = { 0 };
	scanf("%d", &n);
	int i = 0;
	int tmp = 0;
	for (i = 0; i < n; i++)
	{
		//1 �� k �� n
		//��ÿ�����ַŵ���Ӧ���ֵ��±�
		scanf("%d", &tmp);
		arr[tmp] = tmp;
	}
	for (i = 0; i < n; i++)
	{
		if (arr[i] != 0)
		{
			printf("%d ", arr[i]);
		}
	}
	return 0;
}


//BC119
#include <stdio.h>

int main()
{
	char arr[8000] = { 0 }; //CCHNCHN
	scanf("%s", arr);
	//ͳ���Ӵ�CHN�ĸ���
	long long c = 0;
	long long ch = 0;
	int chn = 0;

	char* p = arr;
	while (*p)
	{
		if (*p == 'C')
			c++;
		else if (*p == 'H')
			ch += c;
		else if (*p == 'N')
			chn += ch;
		p++;
	}
	printf("%lld\n", chn);

	return 0;
}


//BC129
#include <stdio.h>

int max3(int a, int b, int c)
{
	int max = a > b ? a : b;
	max = max > c ? max : c;
	return max;
}

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);

	float m = (float)max3(a + b, b, c) / (max3(a, b + c, c) + max3(a, b, b + c));
	printf("%.2f\n", m);

	return 0;
}

/*
float max3(int a, int b, int c)
{
	float max = a;
	if(max < b)
	{
		max = b;
	}
	if(max < c)
	{
		max = c;
	}
	return max;
}

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);

	float m = max3(a+b, b, c) / (max3(a, b+c, c) + max3(a, b, b+c));
	printf("%.2f\n", m);

	return 0;
}
*/


//BC135
#include <stdio.h>
/*
int main()
{
	int i = 0;
	int count = 0;
	for(i=100; i<1000; i++)
	{
		int j = 0;
		for(j=2; j<i; j++)
		{
			if(i%j == 0)
			{
				break;
			}
		}
		if(i == j)
		{
			count++;
		}
	}
	printf("%d\n", count);

	return 0;
}
*/

int is_prime(int n)
{
	int j = 0;
	for (j = 2; j <= n - 1; j++)
	{
		if (n % j == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 999; i++)
	{
		if (is_prime(i) == 1)
		{
			count++;
		}
	}
	printf("%d\n", count);

	return 0;
}


//BC136
#include <stdio.h>
// �������
int main()
{
	int n = 0;
	int arr[1000] = {0};
	scanf("%d", &n);
	//����n������
	int i = 0;
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	//����
	//1. ����ð������
	for(i=0; i<n-1; i++) //���� ����10��Ԫ��9��
	{
		int j = 0;
		for(j=0; j<n-1-i; j++)
		{
			if(arr[j] > arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
	//2. ȥ��
	//ȥ�رȽϵĶ���n-1
	for(i=0; i<n-1; i++)
	{
		if(arr[i] == arr[i+1])
		{
			//�Ѵ�i+1�±������Ԫ��ȫ����ǰ����
			int k = 0;
			for(k=i; k<n-1; k++) //n-1���n-2��Ԫ�� +1��n-1 �������
			{
				arr[k] = arr[k+1];
			}
			n--;
			i--;
		}
	}
	//3. ��ӡ
	for(i=0; i<n; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}


//ÿ���������ڵ���1��С�ڵ���1000
int main()
{
	int n = 0;
	int arr[1001] = { 0 }; //�±�1000
	scanf("%d", &n);
	int i = 0;
	int m = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &m);
		arr[m] = m;
	}
	for (i = 0; i <= 1000; i++) //��������Ԫ�� ������n��
	{
		if (arr[i] != 0)
		{
			printf("%d ", arr[i]);
		}
	}

	return 0;
}


//BC138
#include <stdio.h>

//������Ķ���
struct Node
{
	int date; //������
	struct Node* next; //ָ����
};

int main()
{
	struct Node* list = NULL; //ָ�������ָ��
	struct Node* tail = NULL; //ָ������β��Ԫ�ص�ָ��
	//����n
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int m = 0;
	int d = 0; //Ҫɾ����Ԫ��

	//����n�����ֲ�β�嵽������
	for (i = 0; i < n; i++)
	{
		scanf("%d", &m);
		struct Node* pn = (struct Node*)malloc(sizeof(struct Node));
		pn->date = m;
		pn->next = NULL;

		//�����һ��Ԫ��
		if (list == NULL)
		{
			list = pn;
			tail = pn;
		}
		else
		{
			tail->next = pn;
			tail = pn;
		}
	}
	//����Ҫɾ����Ԫ��
	scanf("%d", &d);

	//ɾ��������ָ����Ԫ��
	struct Node* cur = list;
	struct Node* prev = NULL;

	while (cur)
	{
		//�ҵ���Ҫɾ����Ԫ��
		if (cur->date == d)
		{
			//ɾ��
			//ɾ��������ǵ�һ�����
			struct Node* pd = cur;
			if (cur == list)
			{
				list = list->next;
				cur = list;
			}
			else
			{
				prev->next = cur->next;
				cur = prev->next;
			}
			free(pd);
			n--;
		}
		else
		{
			prev = cur;
			cur = cur->next;
		}
	}

	//���
	printf("%d\n", n);
	cur = list;
	while (cur)
	{
		printf("%d ", cur->date);
		cur = cur->next;
	}
	//�ͷ�����
	cur = list;
	struct Node* del = NULL;
	while (cur)
	{
		del = cur;
		cur = cur->next;
		free(del);
	}
	list = NULL;

	return 0;
}


//BC139
//C++
#include <iostream>
using namespace std;

class TDate
{
private:
	int Year;
	int Month;
	int Day;
public:
	TDate(int y = 0, int m = 0, int d = 0)
	{
		Year = y;
		Month = m;
		Day = d;
	}
	void print()
	{
		cout << Day << '/' << Month << '/' << Year << endl;
	}
};

int main()
{
	int year = 0;
	int month = 0;
	int day = 0;
	//����
	cin >> year >> month >> day;
	TDate d(year, month, day);
	//���
	d.print();

	return 0;
}