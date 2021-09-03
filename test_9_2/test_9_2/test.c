#define _CRT_SECURE_NO_WARNINGS 1

int main()
{
	//�ַ�����
	char arr[] = { 'a','b','c','d','e','f' };
	
	printf("%d\n", sizeof(arr)); // 6 ��������sizeof ��������

	printf("%d\n", sizeof(arr + 0)); // 4/8 ��Ԫ�ص�ַ

	printf("%d\n", sizeof(*arr)); // 1 char*������һ�ֽ�

	printf("%d\n", sizeof(arr[1])); // 1 

	printf("%d\n", sizeof(&arr)); // 4/8

	printf("%d\n", sizeof(&arr + 1)); // 4/8 �����������飬���ǵ�ַ

	printf("%d\n", sizeof(&arr[0] + 1)); // 4/8 b�ĵ�ַ


	// strlen - �⺯��
	// ���ַ�������

	// sizeof - ����������λ�ֽ�
	// �������ռ�ռ�Ĵ�С
	// �����ʹ����ı�����ռ�ռ�Ĵ�С

	printf("%d\n", strlen(arr)); // ���ֵ

	printf("%d\n", strlen(arr + 0)); // ���ֵ-1

	printf("%d\n", strlen(*arr)); // err
	// *arr - 'a' - 97    strlen��Ϊ��������'a'��ascii��ֵ���ǵ�ַ

	printf("%d\n", strlen(arr[1])); // err  'b' - 98

	printf("%d\n", strlen(&arr)); // ���ֵ
	// &arr������char(*)[6]��strlen��������char*�����Ͳ�ƥ�䣬������ָ����Ԫ�أ�ֵһ��������ת��a�ĵ�ַ������

	printf("%d\n", strlen(&arr + 1)); // ���ֵ-6

	printf("%d\n", strlen(&arr[0] + 1)); // ���ֵ-1

	return 0;
}



int main()
{
	char arr[] = "abcdef";

	printf("%d\n", sizeof(arr)); // 7

	printf("%d\n", sizeof(arr + 0)); // 4/8  arr����Ԫ�ص�ַ

	printf("%d\n", sizeof(*arr)); // 1  arr����Ԫ�صĵ�ַ��*arr������Ԫ��

	printf("%d\n", sizeof(arr[1])); // 1  �ڶ���Ԫ��

	printf("%d\n", sizeof(&arr)); // 4/8  ����ĵ�ַ������ĵ�ַҲ�ǵ�ַ

	printf("%d\n", sizeof(&arr + 1)); // 4/8  &arr������ĵ�ַ��&arr+1���������������ĵ�ַ

	printf("%d\n", sizeof(&arr[0] + 1)); // 4/8  �ڶ���Ԫ�صĵ�ַ


	printf("%d\n", strlen(arr)); // 6
	
	printf("%d\n", strlen(arr + 0)); // 6  ��Ԫ�ص�ַ+0������Ԫ�ص�ַ
	
	printf("%d\n", strlen(*arr)); // err
	
	printf("%d\n", strlen(arr[1])); // err
	
	printf("%d\n", strlen(&arr)); // 6  ���Ͳ�ƥ�䣬��������char*��
	
	printf("%d\n", strlen(&arr + 1)); // ���ֵ
	
	printf("%d\n", strlen(&arr[0] + 1)); // 5
	
	return 0;
}



int main()
{
	const char* p = "abcdef";

	printf("%d\n", sizeof(p)); // 4/8  p��һ��ָ���������ŵ�ַ
	
	printf("%d\n", sizeof(p + 1)); // p����chat* ��1����1�ֽ� ָ���ַ�b�ĵ�ַ
	
	printf("%d\n", sizeof(*p)); // 1  ͨ����ַ�ҵ�a
	
	printf("%d\n", sizeof(p[0])); // 1  p[0]--> *(p+0)--> *p
	
	printf("%d\n", sizeof(&p)); // 4/8  ȡ��ָ��p�ĵ�ַ
	
	printf("%d\n", sizeof(&p + 1)); // 4/8
	// &p һ��ָ��&�Ƕ���ָ�� 
	// char** ptr = &p
	// &p+1
	// ptr+1
	// ����pָ��ָ�����p���棬���ǵ�ַ
	
	printf("%d\n", sizeof(&p[0] + 1)); // 4/8  b�ĵ�ַ


	printf("%d\n", strlen(p)); // 6
	
	printf("%d\n", strlen(p + 1)); // 5
	
	printf("%d\n", strlen(*p)); // err
	
	printf("%d\n", strlen(p[0])); // err
	
	printf("%d\n", strlen(&p)); // ���ֵ  
	// ָ������ĵ�ַ�������ַ�����Ԫ�صĵ�ַ

	printf("%d\n", strlen(&p + 1)); // ���ֵ
	// ��&pû�й�ϵ����Ϊp���4�ֽڿ�����\0 ��ǰ����

	printf("%d\n", strlen(&p[0] + 1)); // 5

	return 0;
}



int main()
{
	//��ά����
	int a[3][4] = { 0 };

	printf("%d\n", sizeof(a)); // 48
	
	printf("%d\n", sizeof(a[0][0])); // 4  ��һ�е�һ��Ԫ�� int
	
	printf("%d\n", sizeof(a[0])); // 16   a[0]��һ������������������������sizeof
	
	printf("%d\n", sizeof(a[0] + 1)); // 4/8
	// a[0]�ǵ�һ�е��������������������û�е�������sizeof��Ҳû��&������arr[0]����Ԫ�صĵ�ַ
	// ��һ�������һ��Ԫ�صĵ�ַ
	// a[0] + 1 ���ǵ�һ�У��ڶ���Ԫ�صĵ�ַ

	printf("%d\n", sizeof(*(a[0] + 1))); // 4 ��һ�еڶ���Ԫ�� int
	
	printf("%d\n", sizeof(a + 1)); // 4/8
	// ������a��û�е�������sizeof�ڲ���Ҳû��&������a��ʾ��Ԫ�أ���һ�У��ĵ�ַ
	// ��ά���������������ʾ��Ԫ�أ���һ�У��ĵ�ַ
	// +1 ����һ�� ָ��ڶ��е�ַ
	// a+1 --> &a[1]

	printf("%d\n", sizeof(*(a + 1))); // 16  a��Ԫ�ص�ַ����һ�е�ַ+1�ڶ��е�ַ���ڶ��е�ַ* ���ǵڶ���
	// *(a + 1)) - �ڶ��������� ��������sizeof ���������С 16

	printf("%d\n", sizeof(&a[0] + 1)); // 4/8
	// a[0]��һ��������
	// ������û�е�������sizeof�ڲ�������&����ʾ��Ԫ�ص�ַ
	// &a[0] �õ����ǵ�һ�еĵ�ַ
	// &a[0]+1 ���ǵڶ��еĵ�ַ
	
	printf("%d\n", sizeof(*(&a[0] + 1))); // 16  �ڶ��еĵ�ַ* �õ��ڶ���
	// *(&a[0] + 1) --> *(&a[1]) --> a[1]
	// ��������������sizeof�ڲ����С

	printf("%d\n", sizeof(*a)); // 16
	// a��ʾ��Ԫ�أ���һ�У��ĵ�ַ
	// *a - ��һ�� - ��һ�е�������
	// *a --> *(a+0) --> a[0]
	
	printf("%d\n", sizeof(a[3])); // 16
	// sizeof�ڲ����ʽ����������
	// a[3]������ڣ����ǵ����е���������sizeof(a[3])���൱�ڰѵ�����
	//  ����������������sizeof�ڲ�

	return 0;
}



int main()
{
	int a[5] = { 1, 2, 3, 4, 5 };

	int* ptr = (int*)(&a + 1);
	// int(*)[5] --ǿ������ת�� (int*)
	// ptrָ��5�� ��1��һ��int ָ��5 ������ȡ��5

	printf("%d,%d", *(a + 1), *(ptr - 1));
	// *(a + 1) -- ��������ʾ��Ԫ�ص�ַ��+1�ڶ���Ԫ�ص�ַ��*�ǵڶ���Ԫ��
	
	// 2 5
	return 0;
}



//���ڻ�ûѧϰ�ṹ�壬�����֪�ṹ��Ĵ�С��20���ֽ�
//����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p; // �ṹ��ָ��
int main()
{
	// p��������struct Test*   -- 0x100000��������int    
	// ǿ������ת���ɽṹ��ָ������
	p = (struct Test*)0x100000;

	printf("%p\n", p + 0x1); //0x1 ʮ������1����1
	// �ṹ��ָ��+1 ����һ���ṹ�� ��С20
	// 0x00100014
	// 1*16^1 + 4*16^0 = 20

	printf("%p\n", (unsigned long)p + 0x1);
	// pǿ������ת��������  
	// ����+1  
	// 0x100000 + 1
	// ת����10���Ƽ���  1*16^5 + 1

	printf("%p\n", (unsigned int*)p + 0x1);
	// ǿ������ת��������ָ�룬����ָ��+1������һ������4�ֽ�
	// 0x00100004

	// 00100014  00100001  00100004
	// %#xp  Ĭ�ϴ�ӡ0x

	return 0;
}
