#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//IO�� - �Լ�д���룬���
//�ӿ��� - ֻҪ���ָ���ӿھͿ�����

/*ͳ�ƶ�������1�ĸ���
��Ŀ���ݣ�
дһ���������ز����������� 1 �ĸ�����
���磺 15    0000 1111    4 �� 1 */
//C++
class Solution {
public:
    int  NumberOf1(int n) {
        int count = 0;
        while (n)
        {
            n = n & (n - 1);
            count++;
        }
        return count;
    }
};



/*���������������в�ͬλ�ĸ���
��Ŀ���ݣ�
���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
�������� :
1999 2299
������� : 7 */

//ѭ��
int main()
{
	int n1 = 0;
	int n2 = 0;
	scanf("%d %d", &n1, &n2);
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((n1 >> i) & 1) != ((n2 >> i) & 1))
		{
			count++;
		}
	}
	printf("%d\n", count);

	return 0;
}


//����
int count_diff_bit(int n1, int n2)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((n1 >> i) & 1) != ((n2 >> i) & 1))
		{
			count++;
		}
	}
	return count;
}

int main()
{
	int n1 = 0;
	int n2 = 0;
	scanf("%d %d", &n1, &n2);

	int count = count_diff_bit(n1, n2);
	printf("%d\n", count);

	return 0;
}


//��Ӧ�Ķ�����λ^ ͬΪ0��Ϊ1
int NumberOf1(int n) //��һ�����������ж��ٸ�1
{
    int count = 0;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}

int count_diff_bit(int n1, int n2)
{
    int count = 0;
    int t = n1 ^ n2;
    count = NumberOf1(t);
    return count;

}

int main()
{
	int n1 = 0;
	int n2 = 0;
	scanf("%d %d", &n1, &n2);

	int count = count_diff_bit(n1, n2);
	printf("%d\n", count);

	return 0;
}



/* ��ӡ���������Ƶ�����λ��ż��λ
��Ŀ���ݣ�
��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������ */
//ż��λ 1 3 5 7������31
//����λ 0 2 4 6 ������30
//���Ŵ�ӡ ���ԴӺ�ѭ��
int main()
{
	int num = 0;
	scanf("%d", &num);
	int i = 0;
	printf("ż��λ��");
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	printf("\n����λ��");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");

	return 0;
}



/*�ж���Ԫ�����Ǹ���
�������룬ÿ������һ����ĸ��
���������
���ÿ�����룬���Ϊһ�У����������ĸ��Ԫ����������Сд����
�����Vowel�������������ĸ�Ƿ�Ԫ���������Consonant����*/

//ѭ���ж�
int main()
{
    int ch = 0;
    //ѭ���жϲ�����ʵ���ڶ�ȡ�ַ�
    while ((ch = getchar()) != EOF)
    {
        //�ж��Ƿ�ΪԪ����ĸ
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            printf("Vowel\n");
        }
        else
        {
            printf("Consonant\n");
        }
        getchar(); //���� \n
    }

    return 0;
}


//�ַ������ж�
int main()
{
    int ch = 0;
    char vowel[] = "aeiouAEIOU";

    while ((ch = getchar()) != EOF)
    {
        int i = 0;
        int flag = 0;
        for (i = 0; i < 10; i++)
        {
            if (ch == vowel[i])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            printf("Vowel\n");
        }
        else
        {
            printf("Consonant\n");
        }
        getchar(); //���� \n
    }

    return 0;
}

//3.�Ĵ�Сд
//4.strstr



/*��������ж�
��һ�а�����������n��m����ʾ�����������n��m�У��ÿո�ָ���

��2��n + 1�У�ÿ������m����������Χ - 231~231 - 1�����ÿո�ָ���������n * m��������ʾ��һ�������е�Ԫ�ء�

��n + 2�е�2n + 1��ÿ������m����������Χ - 231~231 - 1�����ÿո�ָ���������n * m��������ʾ�ڶ��������е�Ԫ�ء�
1 < n, m < 10
	���������
	һ�У������������������"Yes"�����У��������"No"�����С�*/
int main()
{
	int arr1[10][10] = { 0 };
	int arr2[10][10] = { 0 };
	int n = 0;
	int m = 0;

	scanf("%d %d", &n, &m);
	int i = 0;
	int j = 0;
	//�����˾���1
	//n��
	for (i = 0; i < n; i++)
	{
		//m��
		for (j = 0; j < m; j++)
		{
			scanf("%d", &arr1[i][j]);
		}
	}
	//�����˾���2
	for (i = 0; i < n; i++)
	{
		//m��
		for (j = 0; j < m; j++)
		{
			scanf("%d", &arr2[i][j]);
		}
	}
	//�ж�
	int flag = 1; //Ĭ����ͬ
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (arr1[i][j] != arr2[i][j])
			{
				flag = 0;
				break;
			}
		}
	}

	if (flag == 1)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}

	return 0;
}


//�Ż�	��һ���ж�һ��
int main()
{
	int arr1[10][10] = { 0 };
	int arr2[10][10] = { 0 };
	int n = 0;
	int m = 0;

	scanf("%d %d", &n, &m);
	int i = 0;
	int j = 0;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &arr1[i][j]);
		}
	}

	int flag = 1; //Ĭ����ͬ
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &arr2[i][j]);
			if (arr1[i][j] != arr2[i][j])
			{
				flag = 0;
				break;
			}
		}
	}

	if (flag == 1)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}

	return 0;
}



/* ����ת��
��һ�а�����������n��m����ʾһ���������n��m�У��ÿո�ָ��� (1��n��10,1��m��10)
��2��n+1�У�ÿ������m����������Χ-231~231-1�����ÿո�ָ���������n*m��������ʾ��һ�������е�Ԫ�ء�
���������
���m��n�У�Ϊ����ת�ú�Ľ����ÿ����������һ���ո�*/
int main()
{
	int n = 0;
	int m = 0;
	int arr[10][10] = { 0 };

	scanf("%d %d", &n, &m);
	int i = 0;
	int j = 0;
	//����
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	//ת�����
	for (i = 0; i < m; i++) //��ӡ3��2��
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", arr[j][i]);
		}
		printf("\n");
	}

	return 0;
}



//short������
#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5 };
	short* p = (short*)arr;
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		*(p + i) = 0;
	}

	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
// 1  2  3  4  5
//short ������ÿ�η���2���ֽ�
// 00 00 3  3  5



//VSС�˴洢
#include <stdio.h>
int main()
{
    int a = 0x11223344;
    char* pc = (char*)&a;
    *pc = 0;
    printf("%x\n", a);
    return 0;
}
//��λ���ڵ͵�ַ ��λ���ڸߵ�ַ
// 44 33 22 11
// %d - 10����
// %o - 8����
// %x - 16����



//sizeof
#include <stdio.h>
int i; //ȫ�ֱ�����û�и���ʼֵʱ���������Ĭ�Ͻ����ʼ��Ϊ0
int main()
{
    i--; // -1
    if (i > sizeof(i))
    {
        printf(">\n");
    }
    else
    {
        printf("<\n");
    }
    return 0;
}
//sizeof - ���ص����޷�������
//i��sizeof(i)�Ƚ� ����ת�� intǿ������ת��Ϊsize_t
//-1��Ӧ���޷���������һ���ǳ��������



/*ʹ��ָ���ӡ��������
дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
arr��һ������һά���� */
#include <assert.h>

void print(const int* p, int sz)
{
	int i = 0;
	assert(p);

	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));
	}
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//�������ڴ�����������ŵ� ֻҪ֪����ʼλ�� �����ҵ�����
	print(arr, sz);

	return 0;
}



/* �������
��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
���磺2+22+222+2222+22222 */
int main()
{
	int i = 0;
	int a = 0;
	int tmp = 0;
	int Sn = 0;
	scanf("%d", &a);
	for (i = 0; i < 5; i++)
	{
		tmp = tmp * 10 + a;
		Sn = Sn + tmp;
	}
	printf("%d\n", Sn);

	return 0;
}


//��a��n��
int main()
{
	int a = 0;
	int n = 0;
	int i = 0;
	int sum = 0;
	int k = 0;
	scanf("%d %d", &a, &n);

	for (i = 0; i < n; i++)
	{
		k = k * 10 + a;
		sum += k;
	}
	printf("%d\n", sum);

	return 0;
}



/* ��ӡˮ�ɻ���
���0��100000֮������С�ˮ�ɻ������������
��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ���������:153��1^3��5^3��3^3����153��һ����ˮ�ɻ����� */
//�ж�i�Ƿ���������
#include <math.h>

int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{	
		int tmp = i; //����λ����i��ı� ��tmp��
		//1. ����i��λ�� - n
		int cnt = 1;
		int sum = 0;
		while (tmp /= 10)
		{
			cnt++;
		}
		//2. ����i��ÿһλ��n�η�֮��
		tmp = i;
		while (tmp)
		{
			sum += (int)pow(tmp % 10, cnt);
			tmp /= 10;
		}
		//3. �ж�
		if (sum == i)
		{
			printf("%d ", i);
		}
	}

	return 0;
}


//��λ������
#include <math.h>

int count(int tmp)
{
	int cnt = 1;
	while (tmp /= 10)
	{
		cnt++;
	}
	return cnt;
}

int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		int tmp = i;
		//1. ����i��λ�� - n
		int sum = 0;
		int cnt = count(i);

		//2. ����i��ÿһλ��n�η�֮��
		while (tmp)
		{
			sum += (int)pow(tmp % 10, cnt);
			tmp /= 10;
		}
		//3. �ж�
		if (sum == i)
		{
			printf("%d ", i);
		}
	}

	return 0;
}



//����ջ֡�Ĵ���������
//VS2013 Խ�߼��ı���������ջ֡�ķ�װԽ�����׿�

//1. �Ĵ���
//eax ebx ecx edx
//ebp esp

//ebp��esp��2���Ĵ����д�ŵ��ǵ�ַ����������ַ������ά������ջ֡��

//ÿһ�κ������ã���Ҫ��ջ������һ��ռ�

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

	printf("%d\n", c);
	
	return 0;
}