#define _CRT_SECURE_NO_WARNINGS 1

int main()
{
	//�ַ�����
	char arr[] = { 'a','b','c','d','e','f' };
	
	printf("%d\n", sizeof(arr)); // 7
	printf("%d\n", sizeof(arr + 0)); // 6
	printf("%d\n", sizeof(*arr)); // 1
	printf("%d\n", sizeof(arr[1])); // 1
	printf("%d\n", sizeof(&arr)); // 7
	printf("%d\n", sizeof(&arr + 1)); // err
	printf("%d\n", sizeof(&arr[0] + 1)); // 1


	printf("%d\n", strlen(arr)); // 6
	printf("%d\n", strlen(arr + 0)); // 
	printf("%d\n", strlen(*arr)); // 
	printf("%d\n", strlen(arr[1])); // 
	printf("%d\n", strlen(&arr)); // 
	printf("%d\n", strlen(&arr + 1)); // 
	printf("%d\n", strlen(&arr[0] + 1)); // 

	return 0;
}


int main()
{
	char arr[] = "abcdef";

	printf("%d\n", sizeof(arr)); // 
	printf("%d\n", sizeof(arr + 0)); // 
	printf("%d\n", sizeof(*arr)); // 
	printf("%d\n", sizeof(arr[1])); // 
	printf("%d\n", sizeof(&arr)); // 
	printf("%d\n", sizeof(&arr + 1)); // 
	printf("%d\n", sizeof(&arr[0] + 1)); // 

	printf("%d\n", strlen(arr)); // 
	printf("%d\n", strlen(arr + 0)); // 
	printf("%d\n", strlen(*arr)); // 
	printf("%d\n", strlen(arr[1])); // 
	printf("%d\n", strlen(&arr)); // 
	printf("%d\n", strlen(&arr + 1)); // 
	printf("%d\n", strlen(&arr[0] + 1)); // 
	return 0;
}


int main()
{
	char* p = "abcdef";

	printf("%d\n", sizeof(p)); // 
	printf("%d\n", sizeof(p + 1)); // 
	printf("%d\n", sizeof(*p)); // 
	printf("%d\n", sizeof(p[0])); // 
	printf("%d\n", sizeof(&p)); // 
	printf("%d\n", sizeof(&p + 1)); // 
	printf("%d\n", sizeof(&p[0] + 1)); // 

	printf("%d\n", strlen(p)); // 
	printf("%d\n", strlen(p + 1)); // 
	printf("%d\n", strlen(*p)); // 
	printf("%d\n", strlen(p[0])); // 
	printf("%d\n", strlen(&p)); // 
	printf("%d\n", strlen(&p + 1)); // 
	printf("%d\n", strlen(&p[0] + 1)); // 

	return 0;
}


int main()
{
	//��ά����
	int a[3][4] = { 0 };

	printf("%d\n", sizeof(a)); // 
	printf("%d\n", sizeof(a[0][0])); // 
	printf("%d\n", sizeof(a[0])); // 
	printf("%d\n", sizeof(a[0] + 1)); // 
	printf("%d\n", sizeof(*(a[0] + 1))); // 
	printf("%d\n", sizeof(a + 1)); // 
	printf("%d\n", sizeof(*(a + 1))); // 
	printf("%d\n", sizeof(&a[0] + 1)); // 
	printf("%d\n", sizeof(*(&a[0] + 1))); // 
	printf("%d\n", sizeof(*a)); // 
	printf("%d\n", sizeof(a[3])); // 

	return 0;
}



int main()
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int* ptr = (int*)(&a + 1);
	printf("%d,%d", *(a + 1), *(ptr - 1));
	return 0;
}


//���ڻ�ûѧϰ�ṹ�壬�����֪�ṹ��Ĵ�С��20���ֽ�
struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;
//����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
int main()
{
	printf("%p\n", p + 0x1);
	printf("%p\n", (unsigned long)p + 0x1);
	printf("%p\n", (unsigned int*)p + 0x1);
	return 0;
}
int main()
{
	int a[4] = { 1, 2, 3, 4 };
	int* ptr1 = (int*)(&a + 1);
	int* ptr2 = (int*)((int)a + 1);
	printf("%x,%x", ptr1[-1], *ptr2);
	return 0;
