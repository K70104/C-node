#define _CRT_SECURE_NO_WARNINGS 1

// һ��Ԥ�������
// 1��Ԥ�������
#include <stdio.h>

int main()
{
	printf("%s\n", __FILE__); // ��ǰԴ�ļ���·��
	printf("%d\n", __LINE__); // ��ǰ�����к�
	printf("%s\n", __DATE__); // �ļ������������
	printf("%s\n", __TIME__); // �ļ��������ʱ��

	// �����������ѭANSI C����ֵΪ1������δ����
	printf("%d\n", __STDC__); // VS��֧��ANSI C��׼������__STDC__��δ�����

	return 0;
}


// 2��#define
// 2.1��#define �����ʶ������
#include <stdio.h>

#define MAX 100
#define reg register
#define STR "HEHE"

int main()
{
	int m = MAX; // Ԥ����׶ξ��Ѿ��滻
	printf("%d\n", m);

	reg int num = 100;

	printf("%s\n", STR);

	return 0;
}


// 2.2��#define �����
// #define ���ư�����һ���涨������Ѳ����滻���ı��У�����ʵ��ͨ����Ϊ������
#include <stdio.h>

#define SQUARE1(X) X*X
#define SQUARE2(X) ( (X) * (X) )
//        ���� ���� ����

int main()
{
	int a = 5;
	int ret = SQUARE1(a); // Ԥ����׶��滻 --> int ret = a*a;
	printf("%d\n", ret);

	ret = SQUARE2(a); // --> int ret = ( (a) * (a) );
	printf("%d\n", ret);

	return 0;
}
// ���ڶ���ֵ���ʽ������ֵ�ĺ궨�嶼Ӧ�������ַ�ʽ�������ţ�������ʹ�ú�ʱ����
// �����еĲ��������ڽ�������֮�䲻��Ԥ�ϵ��໥����

// ע�⣺ �����б�������ű�����name���ڡ� �������֮�����κοհ״��ڣ������б�ͻᱻ����Ϊstuff��һ���֡�
// #define SQUARE1 (X) X*X // (X) X*X��һ����


// 2.3��#define INT int // Ԥ�����滻
//typedef int INT_S // ������������ INT_S��������

// ���⣺��������������������������������������������


// 2.4��#define �滻����
/* 1. �ڵ��ú�ʱ�����ȶԲ������м�飬�����Ƿ�����κ���#define����ķ��š�����ǣ��������ȱ��滻��
2. �滻�ı���󱻲��뵽������ԭ���ı���λ�á����ں꣬�����������ǵ�ֵ�滻��
3. ����ٴζԽ���ļ�����ɨ�裬�������Ƿ�����κ���#define����ķ��š�����ǣ����ظ�����������̡� */
#define MAX 100
#define ADD(X, Y) ( (X) + (Y) )

int main()
{
	int sum = ADD(MAX, 10);
	// int sum = ADD(100, 10)
	// int sum = ( (100) + (10) )

	return 0;
}
//ע�⣺
//1. �������#define �����п��Գ�������#define����ı��������Ƕ��ں꣬���ܳ��ֵݹ顣
//2. ��Ԥ����������#define����ķ��ŵ�ʱ���ַ������������ݲ�����������
//int sum2 = ADD(ADD(2, 3), 1); // ok


// 2.5��#��##
#include <stdio.h>

// ���ڵ������ַ�����ϳ�һ��
int main()
{
	printf("hello world\n");
	printf("hello ""world\n"); 
}


#include <stdio.h>

#define PRINT(n) printf("the value of "#n" is %d\n", n); // �滻 ת��Ϊ��Ӧ���ַ��� ���뵽�ַ�����

int main()
{
	int a = 10;
	PRINT(a); // printf("the calue of ""a"" is %d\n", a);
	int b = 20;
	PRINT(b); // printf("the calue of ""b"" is %d\n", b); // �����ַ����ϳ�һ��

	return 0;
}


// 2.6��##������
// #���԰�λ�������ߵķ��źϳ�һ�����š� 
// ������궨��ӷ�����ı�Ƭ�δ�����ʶ����
#include <stdio.h>

#define CAT(X, Y) X##Y

int main()
{
	int class102 = 100;
	printf("%d\n", CAT(class, 102)); // 100

	return 0;
}


// 2.7���������õĺ����
int main()
{
	int a = 10;
	int b = a + 1;  // b�õ�11 ��a����
	int c = ++a; // b�õ�11 ��a���� ������ʽ���и����õ�
}


// ��������ϴ�ֵ�����ʵ�֣�
#include <stdio.h>

#define MAX(X, Y) ( (X)>(Y)?(X):(Y) )

int main()
{
	int a = 5;
	int b = 8;
	int m = MAX(a++, b++); 
	// ��Ĳ���������ֱ���滻 �滻��ȥ��������㣬�������Ĳ���ʱ����󴫵�
	// int m = ( (a++)>(b++)?(a++):(b++) );
	
	printf("%d\n", m); // 9

	// 5>8?(a++):(b++) ��ʹ�ã���a��b��ֵ�����6��9����Ϊ5>8������a++���㣬a��6��b++����ʹ�ú�++��b��10��
	printf("%d\n", a); // 6
	printf("%d\n", b); // 10

	return 0;
}


// 2.8����ͺ����Ա�
#include <stdio.h>

#define MAX(X, Y) ( (X)>(Y)?(X):(Y) )

int Max(int x, int y)
{
	return x > y ? x : y;
}

int main()
{
	int a = 5;
	int b = 8;

	int max1 = MAX(a++, b++);
	// int max1 = ((a++) > (b++) ? (a++) : (b++));

	int max2 = Max(a, b);

	printf("%d\n", max1);
	printf("%d\n", max2);

	return 0;
}

// ������ϴ�ֵ�����뺯����ʵ�֣�Ϊʲô���ú��������������� ԭ���ж���
/* 1. ��������Ҫ���õģ����ú����ʹӺ������ض�����ʱ�俪���ģ�����ջ֡����
������Ԥ����׶ξ�����滻����Ⱥ����ڳ���Ĺ�ģ���ٶȷ����ʤһ�
2. �����Ĳ�����������Ϊ�ض������͡����Ժ���ֻ�������ͺ��ʵı��ʽ��ʹ�á���֮���������
�����������Ρ������͡������͵ȿ�������>���Ƚϵ����͡����������޹صġ�*/

// ����Ⱥ���Ҳ�����Ƶĵط���
/* 1. ÿ��ʹ�ú��ʱ��һ�ݺ궨��Ĵ��뽫���뵽�����С��������ܴ󣬿��ܴ�������ӳ���ĳ��ȡ�
2. ����û�����Եģ���Ϊ�Ѿ��滻��
3. �����������޹أ�û���������ƣ�Ҳ�Ͳ����Ͻ���
4. ����ܻ������������ȼ������⣬���³����׳��ִ���Ĳ���������б��ʽ����Ҫ�����š� */

// ����ʱ����������������������顣���磺��Ĳ������Գ������ͣ����Ǻ�����������
#define MALLOC(num, type) \
	(type*)malloc(num*sizeof(type))
// \ - ���з�

int main()
{
	int* p = MALLOC(100, int);
	// int* p = (int*)malloc(100 * sizeof(int));
}


// 2.9������Լ��
// �������һ�㶼�Ǵ�д-MAX  ����������һ�㲻ȫ��д-Max


// 2.10��Ԥ����ָ�� #undef 
#define MAX 100

int main()
{
	int m = MAX;
#undef MAX
	// ����ָ�������Ƴ�һ���궨��
	// ����ִ��һ��������Ҫ�����¶��壬��ô���ľ���������Ҫ���Ƴ�
	int a = MAX; // δ�����ʶ��MAX
}


// ���������ж���
// �������е�ʱ�򸳳�ֵ
/* ���C �ı������ṩ��һ���������������������ж�����š���������������̡� ���磺�����Ǹ���ͬһ��Դ�ļ�Ҫ
�������ͬ��һ������Ĳ�ͬ�汾��ʱ����������е��ô������ٶ�ĳ��������������һ��ĳ�����ȵ����飬���
�����ڴ����ޣ�������Ҫһ����С�����飬��������һ�������ڴ��д��������Ҫһ�������ܹ���д���� */


// ������������
// �������������������룬���������������벻�������
int main()
{
#if 1
	printf("hehe\n");
#endif

	return 0;
}

// ��Ԥ�����У�����Ϊ�٣����printf("hehe\n");���������
int main()
{
#if 0
	printf("hehe\n");
#endif

	return 0;
}


// ��������������ָ�
/* 1.
#if �������ʽ
//...
#endif
//�������ʽ��Ԥ��������ֵ�� */
#define M 2
int main()
{
#if M==2
	printf("hehe\n");
#endif

	return 0;
}

//������������������������������������������������
int main()
{
	int a = 2;
#if a==2 // err �����б���
	printf("hehe\n");
#endif

	return 0;
}


// 2. �����֧����������
/* #if �������ʽ
//...
#elif �������ʽ
//...
#else
//...
#endif */
#define M 100
int main()
{
#if M==100
	printf("hehe\n");
#elif M==200
	printf("haha\n");
#else
	printf("hello\n");
#endif

	return 0;
}


// 3.�ж��Ƿ񱻶���
#define MAX 0

int main()
{
#if defined(MAX) // �ж�MAX�Ƿ񱻶���
	printf("hehe:MAX\n");
#endif

// д��ͬ�£�
#ifdef MAX
	printf("hehe:MAX\n");
#endif

	return 0;
}

// �ж�û�ж��壺
int main()
{
#if !defined(MAX)
	printf("haha:MAX\n");
#endif

	// д��ͬ�£�
#ifndef MAX
	printf("haha:MAX\n");
#endif

	return 0;
}


// 4.Ƕ��ָ��
int main()
{
//
#if defined(OS_UNIX)
		#ifdef OPTION1 //
				unix_version_option1();
		#endif

		#ifdef OPTION2 //
			unix_version_option2();
		#endif
//
#elif defined(OS_MSDOS)
		#ifdef OPTION2 //
			msdos_version_option2();
		#endif
//
#endif
}


// �ġ��ļ�����

// 1��ͷ�ļ��������ķ�ʽ

// �����ļ�����"" --> #include "add.h"
// 1. �����ڵ�ǰ���̵�Ŀ¼�²���
// 2. �����һ���Ҳ�������ȥ�⺯����Ŀ¼�²��ң�����Ҳ�������ʾ�������

// ���ļ����� --> #include <stdio.h>
// ֱ���ڿ⺯����Ŀ¼�²��ң�����Ҳ�������ʾ�������

/* �����ǲ��ǿ���˵�����ڿ��ļ�Ҳ����ʹ�� ���� ����ʽ������ ���ǿ϶��ģ����ԡ�
�������������ҵ�Ч�ʾ͵�Щ����Ȼ����Ҳ�����������ǿ��ļ����Ǳ����ļ��� */

//#include "C:\\Users\\XXXXX\\Desktop\\add.h" ���Ը���·��


// 2��Ƕ���ļ�����
// �ļ����ݵ��ظ�����ν��������������
#include "test.h"
#include "test.h"
#include "test.h"

int main()
{
	return 0;
}
/* ÿ��ͷ�ļ��Ŀ�ͷд��
#ifndef __TEST_H__
#define __TEST_H__
//ͷ�ļ�������
#endif __TEST_H__
���ߣ�
#pragma once */

/*
��������C / C++���ָ�ϡ�
1. ͷ�ļ��е� ifndef / define / endif�Ǹ�ʲô�õ� ?
2. #include <filename.h> �� #include "filename.h"��ʲô���� ?
*/


// �塢����Ԥ����ָ��
#undef
#ifdef
#ifndef
#pragma pack()
#elif
#else
#endif
#pragma
#error
#line
...
