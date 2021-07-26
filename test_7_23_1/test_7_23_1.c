#include <stdio.h>

// �����������Ͷ���

// ����������һ������ں�����ʹ��֮ǰ��Ҫ������������ʹ��

#include "add.h"

int main()
{
	int a = 10;
	int b = 20;

	int ret = Add(a, b);

	printf("%d\n", ret);

	return 0;
}

// �ֿ�ȥд�ĺô�:
// 1. ����Э��
// 2. ��װ������
// add.c��add.h ��������һ��add.lib�ļ�����ͷ�ļ��һ�����- ����- �������͸�Ϊ��̬��.lib  ��debug������һ��add.lib�ļ���
// add.h ��add.lib
// ��test.c�����#pragma comment(lib, "add.lib")���뾲̬��Ϳ���ʹ��


// ��������������.h�ļ�������
// ������ʵ���ڶ�Ӧ��.c�ļ���


// ��ֹͷ�ļ����ظ��������
// #ifndef __ADD_H__
// #define __ADD_H__
// #endif
// �ȼ���#pragma once




// �����ݹ�
// һ�����̻������䶨���˵�������У���ֱ�ӻ��ӵ��������һ�ַ���������ظ����㣬�����˳���Ĵ�����
// �ݹ����Ҫ˼����ʽ���Ѵ��»�С

// ��ϰ1
// ����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ
void print(unsigned int n)
{
	if (n > 9)
	{
		print(n / 10); // 123
	}
	printf("%d ", n % 10);
}

int main()
{
	unsigned int num = 0;
	scanf_s("%u", &num);

	print(num);
	
	return 0;
}
// 1. 1234>9   1234/10=123 ����print����
// 2. 123>9    123/10=12   ����print����
// 3. 12>9     12/10=1     ����print����
// 4. 1<9  ִ��printf��ӡ  n%10=1  ��ӡ  ���أ�������������þͷ������
// 5. ����ִ��printf��ӡ ��ʱn��12    n%12=2    ��ӡ2 
// 6. ����ִ��printf��ӡ ��ʱn��123   n%123=3   ��ӡ3
// 7. ����ִ��printf��ӡ ��ʱn��1234  n%1234=4  ��ӡ4 
// 8. ������ ����main��print ����ִ�� return 0 
// 1_2_3_4_



// �ݹ��������Ҫ������
// �������������������������������ʱ���ݹ鲻�ټ���
// ÿ�εݹ����֮��Խ��Խ�ӽ��������������

// ���û���ж����� ���ݹ�
// Ϊmain print�������Կ��ٵĿռ� - ����ջ֡
// ....................................................................


// ��ϰ2
// ��д��������������ʱ���������ַ����ĳ���
int main()
{
	char arr[] = "abcdef";
	int len = strlen(arr);

	printf("%d\n", len); // 6

	return 0;
}


// ����ʱ����count
my_strlen(char* s)
{
	int count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return count;
}

int main()
{
	char arr[] = "abcdef";
	// ������arr��������Ԫ�صĵ�ַ ����ÿ��Ԫ�ض���char���� ������Ԫ��Ҳ��char���� ������Ԫ�صĵ�ַ��char*���� - char*

	int len = my_strlen(arr); // ����������ȥ

	printf("%d\n", len);

	return 0;
}


// �õݹ���
my_strlen(char* s)
{
	if (*s != '\0')
	{
		return 1 + my_strlen(s + 1);
	}
	else
	{
		return 0;
	}
}

int main()
{
	char arr[] = "abcdef";
	// ������arr��������Ԫ�صĵ�ַ ����ÿ��Ԫ�ض���char���� ������Ԫ��Ҳ��char���� ������Ԫ�صĵ�ַ��char*���� - char*

	int len = my_strlen(arr); // ����������ȥ

	printf("%d\n", len);

	return 0;
}
// 'a' != '\0'  ����if  strlen�ݹ�  s+1  bcdef\0
// 'b' != '\0'  ����if  strlen�ݹ�  s+1  cdef\0
// 'c' != '\0'  ����if  strlen�ݹ�  s+1  def\0
// 'd' != '\0'  ����if  strlen�ݹ�  s+1  ef\0
// 'e' != '\0'  ����if  strlen�ݹ�  s+1  f\0
// 'f' != '\0'  ����if  strlen�ݹ�  s+1  \0
// '\0' = '\0'  ִ��else  return 0  ����
// return 1 + 0 = 1   ����1
// 1+1=2  ����2
// 1+2=3  ����3
// 1+4=5  ����5
// 1+5=6  ����6
// ����main my_strlen  ����ִ��
// ����ִ�� printf��ӡ6
// 6



// �ַ�ָ��+1  - �����1���ֽ�
// char *p;
// p+1  ->  �����1���ֽ�
//
// ����ָ��+1  - �����4���ֽ�
// int *p;
// p+1  -> �����4���ֽ�
//
// ָ���һ����ָ����һ��Ԫ�ص�ַ��ָ�����Ͳ�ͬ���������ֽ�Ҳ��ͬ





// �ݹ������

// ��ϰ3
// ��n�Ľ׳ˣ������������

// ��ѭ�� 
int Fac(int n)
{
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	return ret;
}

int main()
{
	int n = 0;
	scanf_s("%d", &n);

	int ret = Fac(n);

	printf("%d\n", ret);

	return 0;
}


// ��n�Ľ׳˵ݹ鹫ʽ��
// n<=1ʱ Fac(n) = 1
// n>1ʱ  Fac(n) = n*fac(n-1)

// �õݹ�
int Fac(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	else
	{
		return n * Fac(n - 1);
	}
}

int main()
{
	int n = 0;
	scanf_s("%d", &n);

	int ret = Fac(n);

	printf("%d\n", ret);

	return 0;
}
// ����3�Ľ׳�  ����Fac����
// 3>1  else  ����Fac(2)
// 2>1  else  ����Fac(1)
// 1<=1  if  return 0  ����1
// 2*1=2  ����2
// 3*2=6  ����6
// 6



// ��ϰ4
// ���n��쳲�������

// 1 1 2 3 5 8 13 21 34 55 ...
// ǰ2������֮�͵��ڵ�3������

// ���n��쳲��������ݹ鹫ʽ��
// Fib(n)
// ��n<=2ʱ  Fib(n) = 1
// ��n>2ʱ   Fib(n) = Fib(n-1) + Fib(n-2)

int count = 0;

int Fib(int n)
{
	// ������쳲����������ظ�������ٴ�
	if (n == 3)
	{
		count++;
	}

	if (n <= 2)
	{
		return 1;
	}
	else
	{
		return Fib(n - 1) + Fib(n - 2);
	}
}

int main()
{
	int n = 0;
	scanf_s("%d", &n);

	int ret = Fib(n);

	printf("%d\n", ret);

	printf("count = %d\n", count);

	return 0;
}
// ��40
// count = 39088169



// ������ѭ����
// �Ż� ��� ���Ч��
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;

	while (n > 2)
	{
		// ��n=3ʱ ��ʼ����
		c = a + b;
		a = b;
		b = c;
		n--;
	}

	return c;
}

int main()
{
	int n = 0;
	scanf_s("%d", &n);

	int ret = Fib(n);

	printf("%d\n", ret);

	return 0;
}
// a = 1
// b = 1
// c = a + b
// ����3
// ��b�Ž�a ��c�Ž�a



// ʲôʱ���õݹ飺
// 1. �����һ������ݹ�ͷǵݹ鶼����ʹ�ã���û�����������⣬�ǾͿ���ʹ�õݹ�
// 2. �����һ������д�����ܼ򵥣��ǵݹ�Ƚϸ��ӣ��ҵݹ�û���������⣬�Ǿ��õݹ�
// 3. ���˵�õݹ������⣬д�����򵥣��������������⣬�ǾͲ���ʹ�õݹ飬��д���ǵݹ鷽ʽ�����



// �����ݹ鼸��������Ŀ��
// 1. ����������
// 2. ������̨����
