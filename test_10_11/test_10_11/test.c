#define _CRT_SECURE_NO_WARNINGS 1

//�����º궨��ͽṹ���壬��A = 2�� B = 3ʱ��pointer���䣨 �����ֽڵĿռ䡣
#include <stdio.h>
#include <stdlib.h>

#define A 2
#define B 3
#define MAX_SIZE A+B

struct _Record_Struct
{
	// 1byte - 8bit
	unsigned char Env_Alarm_ID : 4;
	unsigned char Para1 : 2;
	// 1byte
	unsigned char state;
	// 2byte
	unsigned char avail : 1;
}*Env_Alarm_Record;

int main()
{

	struct _Record_Struct* pointer = (struct _Record_Struct*)malloc(sizeof(struct _Record_Struct) * MAX_SIZE);
	
	int sz = sizeof(struct _Record_Struct) * MAX_SIZE;
	                                  // 3 * 2 + 3 = 9
	return 0;
}



//�������Ľ���ǣ� ��
#include <stdio.h>
#include <string.h>

int main()
{
    unsigned char puc[4];

    struct tagPIM
    {
        unsigned char ucPim1;
        unsigned char ucData0 : 1;
        unsigned char ucData1 : 2;
        unsigned char ucData2 : 3;
    }*pstPimData;

    pstPimData = (struct tagPIM*)puc;
    memset(puc, 0, 4);

    pstPimData->ucPim1 = 2;
    pstPimData->ucData0 = 3;
    pstPimData->ucData1 = 4;
    pstPimData->ucData2 = 5;

    printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
    // 02 29 00 00
    return 0;
}
 



#include <stdio.h>

union Un
{
	short s[7]; // 7*2=14
	// 2 8 2
	int n;
	// 4 4 4
	// 14����4�ı��� -> 16
};

int main()
{
	printf("%d\n", sizeof(union Un));

	return 0;
}



// ��X86�£������г���
#include<stdio.h>

int main()
{
    union
    {
        short k;
        char i[2];
    }*s, a;

    s = &a;
    s->i[0] = 0x39;
    s->i[1] = 0x38;

    printf("%x\n", a.k);

    return 0;
}



// ģ��ʵ��atoi
#include <stdio.h>
#include <assert.h>
#include <ctype.h>
#include <limits.h>

enum State
{
	VALID, // ����
	INVALID, // �Ƿ�
};
enum State state = INVALID;

int my_atoi(const char* str)
{
	// str��NULL
	assert(str);

	// strָ����ǿ��ַ���
	if (*str == '\0') 
		return 0; // ���ص���0���ǿ��ַ�������0

	// �����հ��ַ�
	while (isspace(*str)) // �������ʱ�հ��ַ���Ϊ�棬���ط�0���֣����ǣ�����0
	{
		str++;
	}

	// ʶ��������
	int flag = 1;
	if (*str == '+')
	{
		str++;
	}
	else if (*str == '-')
	{
		flag = -1;
		str++;
	}

	// ʶ�������ַ���ת��
	long long ret = 0;
	while (*str)
	{
		if (isdigit(*str)) // �ж������ַ�
		{
			ret = ret * 10 + flag * (*str - '0');
			if (ret > INT_MAX || ret < INT_MIN)
			{
				return 0; // �Ƿ�����
			}
			str++;
		}
		else
		{
			state = VALID;
			return (int)ret; // �Ϸ�
		}
	}

	state = VALID;
	return (int)ret;
}

int main()
{
	int ret = my_atoi("    -1234abc");
	// my_atoi("    1234"); // ǰ���пհ��ַ�
	// my_atoi("    +1234"); // ǰ��+-
	// my_atoi("    +1234abc"); // �������ַ�
	// my_atoi("    123123123123123"); // ��������̫���ˣ������

	if (state == VALID)
	{
		printf("�Ϸ����أ�ֵΪ��%d\n", ret);
	}
	else
	{
		printf("�Ƿ����أ�ֵΪ��%d\n", ret);
	}

	return 0;
}



/* �ҵ���
һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ�
��дһ�������ҳ�������ֻ����һ�ε����� */
#include <stdio.h>

void FindNum(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int flag = 1;
		int j = 0;
		for (j = 0; j < sz; j++)
		{
			if (i == j)
			{
				continue;
			}
			if (arr[i] == arr[j])
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			printf("%d ", arr[i]);
		}
	}
}

int main()
{
	int arr[] = { 1,1,2,2,3,4,4,5,6,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	FindNum(arr, sz);

	return 0;
}


#include <stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };

	// 1. ���������������һ�𣬾���5^6
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = 0;
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		ret = ret ^ arr[i];
	}
	
	// 2. ����ret�Ķ����Ƶĵڼ�λΪ1
	int pos = 0;
	for (i = 0; i < 32; i++)
	{
		if (((ret >> i) & 1) == 1)
		{
			pos = i;
			break;
		}
	}

	// 3. ���ղ���ͬ��λ����
	int m = 0;
	int n = 0;
	for (i = 0; i < sz; i++)
	{
		if (((arr[i] >> pos) & 1) == 1) // arr[i]�ĵ�posλ&1�����1
		{
			m ^= arr[i]; // 1 1 3 3 5
		}
		else
		{
			n ^= arr[i]; // 2 2 4 4 6
		}
	}
	// ���飺
	// 101   5 1 1 3 3
	// 110   6 2 2 4 4

	printf("%d %d\n", m, n);

	return 0;
}



// ������żλ
// дһ���꣬���Խ�һ�������Ķ�����λ������λ��ż��λ����
#include <stdio.h>

#define SWAP_BIT(n) (n=((n&0xaaaaaaaa)>>1)+((n&0x55555555)<<1))
// a - 1010

int main()
{
	int a = 10;
	// 00000000000000000000000000001010 - 10
	
	SWAP_BIT(a);
	printf("a = %d\n", a);
	
	return 0;
}



// offsetof��
// дһ���꣬����ṹ����ĳ����������׵�ַ��ƫ�ƣ�������˵��
// ���죺offsetof���ʵ��
#include <stdio.h>
#include <stddef.h>

struct Stu
{
	int a; // 0-3
	char c; // 4
	double d; // 8-15 
};

#define OFFSETOF(struct_type, mem_name)  (int)&(((struct_type*)0)->mem_name) 
// �����ַ��0����0ǿ������ת���ɽṹ��ָ�룬ƫ�������൱�ڵ�ַ    ȡ����Ա�ĵ�ַ��ƫ������������ǿ������ת��

int main()
{
	// printf("%d\n", sizeof(struct Stu));
	//printf("%d\n", offsetof(struct Stu, a)); // 0
	//printf("%d\n", offsetof(struct Stu, c)); // 4
	//printf("%d\n", offsetof(struct Stu, d)); // 8

	printf("%d\n", OFFSETOF(struct Stu, a)); // 0
	printf("%d\n", OFFSETOF(struct Stu, c)); // 4
	printf("%d\n", OFFSETOF(struct Stu, d)); // 8

	return 0;
}

