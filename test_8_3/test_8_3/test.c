#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//ʵ�õ��Լ���

//F11 ���뺯���ڲ�
void test()
{
    printf("hehe\n");
}

int main()
{
    int arr[10] = { 0 };
    int i = 0;
    test(); //F11

    for (i = 0; i < 10; i++)
    {
        scanf("%d", arr[i]);
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}



//����
void test() //F11 ���뺯���ڲ�
{
    printf("hehe\n");
}

int main()
{
    int arr[10] = { 0 };
    int i = 0;
    test(); //F11

    for (i = 0; i < 10; i++)
    {
        scanf("%d", arr[i]);
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}



//���ö�ջ
void test2()
{
    printf("test2\n");
}

void test1()
{
    test2();
}

void test()
{
    test1();
}

int main()
{
    test();

    return 0;
}



//�� 1��+2��+3�� ...+ n! ���������
int main()
{
    int i = 0;
    int sum = 0;//�������ս��
    int n = 0;
    int ret = 1;//����n�Ľ׳�

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        int j = 0;
        for (j = 1; j <= i; j++)
        {
            ret *= j;
        }
        sum += ret;
    }

    printf("%d\n", sum);

    return 0;
}

//��ʼ��ret
int main()
{
    int i = 0;
    int sum = 0;//�������ս��
    int n = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        int ret = 1;//����n�Ľ׳�

        int j = 0;
        for (j = 1; j <= i; j++)
        {
            ret *= j;
        }
        sum += ret;
    }

    printf("%d\n", sum);

    return 0;
}



//Խ�����
int main()
{
    int i = 0;
    int arr[10] = { 0 };

    for (i = 0; i <= 12; i++)
    {
        arr[i] = 0;
        printf("hehe\n");
    }

    return 0;
}



//Debug�汾�Ա�
int main()
{
    int i = 0;
    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    printf("%p\n", &i);

    printf("%p\n", &arr[0]);
    printf("%p\n", &arr[9]);

    return 0;
}