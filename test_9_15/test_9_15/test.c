#define _CRT_SECURE_NO_WARNINGS 1

// 1��ģ��ʵ��strcat - 
// strcat �ַ������� - �ַ���׷��
// ���ص���Ŀ��ռ����ʼ��ַ

#include <stdio.h>
#include <string.h>
#include <assert.h>

char* my_strcat(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest && src);

	// 1. �ҵ�Ŀ���ַ���ĩβ\0
	while (*dest)
	{
		dest++;
	}
	// 2. ׷��ԭ�ַ���ֱ��\0
	while (*dest++ == *src++)
	{
		;
	}

	return ret;
}

int main()
{
	char arr1[20] = "abc";
	char arr2[] = { 'd', 'e', 'f', '\0' };
	
	//my_strcat(arr1, arr2);
	//printf("%s\n", arr1); // abcdef

	printf("%s\n", my_strcat(arr1, arr2));//abcdef

	return 0;
}


// 2��strcmp �Ƚ��ַ���
// �Ƚϵ����ַ��������ݣ������ǳ���

#include <stdio.h>
#include <string.h>

int main()
{
	char arr[] = "abcdef";
	char arr1[] = "abcq";
	char arr2[] = "abc";

	strcmp(arr, arr1); // d<q ���ش���0������
	strcmp(arr, arr2); // <0

	return 0;
}


#include <stdio.h>
#include <string.h>
#include <assert.h>

int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "abcq";

	int ret = strcmp(arr1, arr2);

	if (ret == 0)
	{
		printf(">\n");
	}
	else if (ret > 0)
	{
		printf(">\n");
	}
	else
	{
		printf("<\n");
	}
	
	if (ret == 1) // �з���
	{ 
		printf(">\n");
	}

	printf("%d", ret);

	return 0;
}


// ģ��ʵ��stcmp
#include <stdio.h>
#include <string.h>
#include <assert.h>
 
int my_strcmp(const char* s1, const char* s2)
{
	assert(s1 && s2);
 
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return 0;
		s1++;
		s2++;
	}

	return *s1 - *s2;
}

int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "abcq";

	int ret = my_strcmp(arr1, arr2);

	if (ret == 0)
	{
		printf("=\n");
	}
	else if (ret > 0)
	{
		printf(">\n");
	}
	else
	{
		printf("<\n");
	}

	printf("%d", ret);

	return 0;
}


// 3�����ȣ����������Ƶ��ַ�������
// ���Ȳ������Ƶ��ַ���������strcpy strcat strcmp
// ������ȫ
// ���������Ƶ��ַ���������strncpy strncat strncmp
// ��԰�ȫ

// strncp
int main()
{
	char arr1[20] = "abcdef";
	char arr2[] = "xxx";

	strncpy(arr1, arr2, 6); // ������\0��

	printf("%s\n", arr1);

	return;
}


// strncat
int main()
{
	char arr1[20] = "abc\0xxxxxx";
	char arr2[] = "defghi";

	strncat(arr1, arr2, 3); // abcdef\0
  // ׷�����\0

	printf("%s\n", arr1);

	return;
}

int main()
{
	char arr1[20] = "abc\0xxxxxx";
	char arr2[] = "def";

	strncat(arr1, arr2, 6); // 6�������� ֵ׷�ӵ�\0

	printf("%s\n", arr1);

	return;
}


// strcmp
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "abcqw";

	int ret = strncmp(arr1, arr2, 4); // 

	printf("%d\n", ret);

	return;
}


// VS��ȫ�汾 strcpy_s ��strncpy����


// 4��strstr �ַ�������
// ��һ���ַ����в������ַ���
// ����arr2��arr1����ֵĵ�һ�ε�λ�ã��Ҳ������ؿ�ָ��
#include <stdio.h>
#include <string.h>

int main()
{
	char arr1[] = "i am a student, good student";
	char arr2[] = "student";

	char* ret = strstr(arr1, arr2);

	if (ret == NULL)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("%s\n", ret); // student, good student
	}

	return 0;
}


// ģ��ʵ��strstr
#include <stdio.h>
#include <string.h>
#include <assert.h>

char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);

	char* s1;
	char* s2;
	char* cp = str1;

	if (*str2 == '\0')
		return str1;

	while (*cp)
	{
		s1 = cp; // ��¼��ʼλ��
		s2 = str2;

		// while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
		while (*s1 && *s2 && *s1 == *s2)
		{
			s1++;
			s2++;
		}

		if (*s2 == '\0')
		{
			return cp;
		}

		cp++;
	}

	// �Ҳ���
	return NULL;
}

int main()
{
	char arr1[] = "i am a student, good student";
	char arr2[] = "student";

	char* ret = my_strstr(arr1, arr2);

	if (ret == NULL)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("%s\n", ret);
	}

	return 0;
}

                                       
// 5��strtok �ָ��ַ���
// ���ַ�����192.168.2.121  ��.�ָ�
// wk@bit.tech �ָ�����@��.
#include <stdio.h>
#include <string.h>

int main()
{
    char arr1[] = "wk@bit.tech";
    char arr2[20] = { 0 }; // ��ʱ����
    // wk\0bit\0tech

    char sep[] = "@.";

    strcpy(arr2, arr1);

    //strtok(arr2, sep);
    //strtok(NULL, sep);

    char* ret = NULL;
    for (ret=strtok(arr2, sep); ret!=NULL; ret=strtok(NULL, sep))
    {
        printf("%s\n", ret);
    }

    return 0;
}


// 6���ڴ濽��
// memcpy memmove memset memcmp

// memcpy
#include <stdio.h>
#include <string.h>
int main()
{
    int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
    int arr2[20] = { 0 };
    // ���������������ݣ��������ַ�������strcpy�����ڴ濽��memcpy

    memcpy(arr2, arr1, 10 * sizeof(int));

    int i = 0;
    for (i = 0; i < 20; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}

// ģ��ʵ��memcpy
#include <stdio.h>
#include <string.h>
#include <assert.h>

void* my_memcpy(void* dest, const void* src, size_t count)
{
    void* ret = dest;
    assert(dest && src);

    while (count--)
    {
        *(char*)dest = *(char*)src;
        dest = (char*)dest + 1;
        src = (char*)src + 1;
    }

    return ret;
}

int main()
{
    int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
    int arr2[20] = { 0 };

    my_memcpy(arr2, arr1, 10 * sizeof(int));

    int i = 0;
    for (i = 0; i < 20; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}


// �ص�/���ص�
void* my_memcpy(void* dest, const void* src, size_t count)
{
    void* ret = dest;
    assert(dest && src);

    while (count--)
    {
        *(char*)dest = *(char*)src;
        dest = (char*)dest + 1;
        src = (char*)src + 1;
    }

    return ret;
}

int main()
{
    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

    my_memcpy(arr+2, arr, 16); // ��ʼλ��3   ��1234������2456
    // �������
    
    // ���⺯����memcpy����
    // memcpy - ֻҪ��ɲ��ص����ڴ濽�����������60�֣���VS�е�memcpy�����100��
    // �ڴ濽����ʱ�򣬳����ڴ��ص�������Ӧʹ�ã�memmove

    int i = 0;
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
