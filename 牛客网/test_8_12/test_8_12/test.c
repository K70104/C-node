#define _CRT_SECURE_NO_WARNINGS 1

BC53 ����һԪ���η���
����
�Ӽ�������a, b, c��ֵ����̼��㲢���һԪ���η���ax2 + bx + c = 0�ĸ�����a = 0ʱ�������Not quadratic equation������a �� 0ʱ�����ݡ� = b2 - 4 * a * c������������㲢������̵ĸ���
����������
�������룬һ�У���������������a, b, c����һ���ո�ָ�����ʾһԪ���η���ax2 + bx + c = 0��ϵ����
���������
���ÿ�����룬���һ�У����һԪ���η���ax2 + bx + c = 0�ĸ��������

���a = 0�������Not quadratic equation����

���a ��  0�������������

�� = 0��������ʵ����ȣ������ʽΪ��x1 = x2 = ...��

�� > 0��������ʵ�����ȣ������ʽΪ��x1 = ...; x2 = ...������x1 <= x2��

�� < 0����������������������x1 = ʵ�� - �鲿i; x2 = ʵ�� + �鲿i����x1���鲿ϵ��С�ڵ���x2���鲿ϵ����ʵ��Ϊ0ʱ����ʡ�ԡ�ʵ�� = -b / (2 * a), �鲿 = sqrt(-��) / (2 * a)

    ����ʵ������Ҫ��ȷ��С�����2λ�����֡�����֮��û�пո�

    ʾ��1
    ���룺
    2.0 7.0 1.0
    �����
    x1 = -3.35; x2 = -0.15

    ʾ��2
    ���룺
    0.0 3.0 3.0
    �����
    Not quadratic equation

    ʾ��3
    ���룺
    1 2 1
    �����
    x1 = x2 = -1.00

    ʾ��4
    ���룺
    2 2 5
    �����
    x1 = -0.50 - 1.50i; x2 = -0.50 + 1.50i

    ʾ��5
    ���룺
    1 0 1
    �����
    x1 = 0.00 - 1.00i; x2 = 0.00 + 1.00i

    [��Ŀ����](https://www.nowcoder.com/practice/7da524bb452441b2af7e64545c38dc26)

```c
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    while ((scanf("%f %f %f", &a, &b, &c)) != EOF)
    {
        float e = b * b - 4 * a * c;
        float s = sqrt(e);
        if (a == 0)
        {
            printf("Not quadratic equation\n");
        }
        if (a != 0)
        {
            if (e == 0)
            {
                printf("x1=x2=%.2f\n", (-b + s) / (2 * a));
            }
            if (e > 0)
            {
                printf("x1=%.2f;x2=%.2f\n", (-b - s) / (2 * a), (-b + s) / (2 * a));
            }
            if (e < 0)
            {
                printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi", -b / (2 * a), sqrt(-e) / (2 * a), -b / (2 * a), sqrt(-e) / (2 * a));
            }
        }

    }

    return 0;
}
```
-- -
## BC54 ����·�����
����
KiKi����ĳ��ĳ���ж����죬��������ʵ�֡�������ݺ��·ݣ�������һ��������ж����졣
����������
�������룬һ���������������ֱ��ʾ��ݺ��·ݣ��ÿո�ָ���
���������
���ÿ�����룬���Ϊһ�У�һ����������ʾ��һ��������ж����졣
ʾ��1
���룺
2008 2
�����
29

[��Ŀ����](https://www.nowcoder.com/practice/13aeae34f8ed4697960f7cfc80f9f7f6)

```c
#include <stdio.h>

int is_leap_year(int year)
{
    if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
    {
        return 1;
    }
    else
        return 0;
}

int main()
{
    int year = 0;
    int month = 0;
    while ((scanf("%d %d", &year, &month)) != EOF)
    {
        switch (month)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31\n");
            break;
        case 2:
            if (is_leap_year(year))
            {
                printf("29\n");
                break;
            }
            else
            {
                printf("28\n");
                break;
            }
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30\n");
            break;
        default:
            break;
        }
    }

    return 0;
}
```
----
## BC56 �߶�ͼ��
����
KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�* ����ɵ��߶�ͼ����

����������
�������룬һ��������1~100������ʾ�߶γ��ȣ����� * ����������
���������
���ÿ�����룬���ռһ�У��á� * ����ɵĶ�Ӧ���ȵ��߶Ρ�
ʾ��1
���룺
10
2
�����
\ * *********
\ * *

[��Ŀ����](https://www.nowcoder.com/practice/a95744270f274a14a8a0dafe10421589)

```c
#include <stdio.h>

int main()
{
    int line = 0;
    while ((scanf("%d", &line)) != EOF)
    {
        if (line >= 1 && line <= 100)
        {
            while (line--)
            {
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}
```
-- -
## BC57 ������ͼ��
����
KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á� * ����ɵ�������ͼ����
����������
�������룬һ��������1~20������ʾ�����εĳ��ȣ�Ҳ��ʾ���������

���������
���ÿ�����룬����á� * ����ɵĶ�Ӧ�߳��������Σ�ÿ���� * ��������һ���ո�

ʾ��1
���룺
4
�����
\ * ***
\ * ***
\ * ***
\ * ***
ʾ��2
���룺
5
�����
\ * ****
\ * ****
\ * ****
\ * ****
\ * ****

[��Ŀ����](https://www.nowcoder.com/practice/1304bb23c2e344989d5c7a578d263e4c)

```c
#include <stdio.h>

int main()
{
    int n = 0;
    while ((scanf("%d", &n)) != EOF)
    {
        int i = 0;
        for (i = 0; i < n; i++)
        {
            int j = 0;
            for (j = 0; j < n; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }

    return 0;
}
```
-- -
## BC58 ֱ��������ͼ��
����
KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á� * ����ɵ�ֱ��������ͼ����
����������
�������룬һ��������2~20������ʾֱ��������ֱ�Ǳߵĳ��ȣ����� * ����������Ҳ��ʾ���������
���������
���ÿ�����룬����á� * ����ɵĶ�Ӧ���ȵ�ֱ�������Σ�ÿ���� * ��������һ���ո�
ʾ��1
���룺
4
�������
*
\ * *
\ * **
\ * ***
ʾ��2
���룺
5
�����
*
\ * *
\ * **
\ * ***
\ * ****

[��Ŀ����](https://www.nowcoder.com/practice/00dd93f7c7074754b7511bf56d1f15ac)

```c
#include <stdio.h>

int main()
{
    int n = 0;
    while ((scanf("%d", &n)) != EOF)
    {
        int i = 0;
        for (i = 0; i < n; i++)
        {
            int j = 0;
            for (j = 0; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }

    return 0;
}
```

-- -
## BC59 ��תֱ��������ͼ��
�������룬һ��������2~20������ʾ��תֱ��������ֱ�Ǳߵĳ��ȣ����� * ����������Ҳ��ʾ���������
���������
���ÿ�����룬����á� * ����ɵĶ�Ӧ���ȵķ�תֱ�������Σ�ÿ���� * ��������һ���ո�
ʾ��1
���룺
5
�����
\ * ****
\ * ***
\ * **
\ * *
*
ʾ��2
���룺
6
�����
\ * *****
\ * ****
\ * ***
\ * **
\ * *
*

[��Ŀ����](https://www.nowcoder.com/practice/2cdea429fa414fbba26e6c821724ca06)

```c
#include <stdio.h>

int main()
{
    int n = 0;
    while ((scanf("%d", &n)) != EOF)
    {
        int i = 0;
        for (i = 0; i < n; i++)
        {
            int j = 0;
            for (j = 0; j < n - i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }

    return 0;
}
```
-- -
## BC60 ���ո�ֱ��������ͼ��
����
KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á� * ����ɵĴ��ո�ֱ��������ͼ����

����������
�������룬һ��������2~20������ʾֱ��������ֱ�Ǳߵĳ��ȣ����� * ����������Ҳ��ʾ���������

���������
���ÿ�����룬����á� * ����ɵĶ�Ӧ���ȵ�ֱ�������Σ�ÿ���� * ��������һ���ո�
![���������ͼƬ����](https://img-blog.csdnimg.cn/e870550843ed4f80b7c5c6743b69c4fd.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3FxXzU2ODg0MDIz,size_16,color_FFFFFF,t_70#pic_center)
[��Ŀ����] (https ://www.nowcoder.com/practice/192d1039c3d44155bb868073f5482670)

    ```c
#include <stdio.h>

    int main()
{
    int n = 0;
    while ((scanf("%d", &n)) != EOF)
    {
        int i = 0;
        for (i = 0; i < n; i++)
        {
            int j = 0;
            for (j = 0; j < n - 1 - i; j++)
            {
                printf("  ");
            }
            for (j = 0; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }

    return 0;
}
```
-- -
## BC61 ������ͼ��
����
KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á� * ����ɵĽ�����ͼ����
����������
�������룬һ��������2~20������ʾ�������ߵĳ��ȣ����� * ������������Ҳ��ʾ���������
���������
���ÿ�����룬����á� * ����ɵĽ�������ÿ���� * ��������һ���ո�
![���������ͼƬ����](https://img-blog.csdnimg.cn/a01d0eecedfa4f3a90f6c0f5930f0c33.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3FxXzU2ODg0MDIz,size_16,color_FFFFFF,t_70#pic_center)
[��Ŀ����] (https ://www.nowcoder.com/practice/d84e8339f9444bb6b29bd3f227c8e538)

    ```c
#include <stdio.h>

    int main()
{
    int n = 0;
    while ((scanf("%d", &n)) != EOF)
    {
        int i = 0;
        for (i = 0; i < n; i++)
        {
            int j = 0;
            for (j = 0; j < n - 1 - i; j++)
            {
                printf(" ");
            }
            for (j = 0; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }

    return 0;
}
```
-- -
## BC62 ��ת������ͼ��
����
KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á� * ����ɵķ�ת������ͼ����
����������
�������룬һ��������2~20������ʾ��ת�������ߵĳ��ȣ����� * ����������Ҳ��ʾ���������
���������
���ÿ�����룬����á� * ����ɵĽ�������ÿ���� * ��������һ���ո�
![���������ͼƬ����](https://img-blog.csdnimg.cn/efe354a109fb44f7a5a593b03b8f7fe0.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3FxXzU2ODg0MDIz,size_16,color_FFFFFF,t_70#pic_center)
[��Ŀ����] (https ://www.nowcoder.com/practice/c4775776e4464537bfb6a5ba37c596c6)

    ```c
#include <stdio.h>

    int main()
{
    int n = 0;
    while ((scanf("%d", &n)) != EOF)
    {
        int i = 0;
        for (i = 0; i < n; i++)
        {
            int j = 0;
            for (j = 0; j < i; j++)
            {
                printf(" ");
            }
            for (j = 0; j < n - i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }

    return 0;
}
```
-- -
## BC63 ����ͼ��
����
KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á� * ����ɵ�����ͼ����
����������
�������룬һ��������2~20����

���������
���ÿ�����룬����á� * ����ɵ����Σ�ÿ���� * ��������һ���ո�
![���������ͼƬ����](https://img-blog.csdnimg.cn/0ddeb2d39b324b8cad0dea5a98407e60.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3FxXzU2ODg0MDIz,size_16,color_FFFFFF,t_70#pic_center)

[��Ŀ����] (https ://www.nowcoder.com/practice/8b935f8ffe99445dbd42494febd13e45)

    ```c
#include <stdio.h>

    int main()
{
    int n = 0;
    while ((scanf("%d", &n)) != EOF)
    {
        int i = 0;
        int j = 0;
        for (i = 0; i <= n; i++)
        {
            for (j = 0; j < n - i; j++)
            {
                printf(" ");
            }
            for (j = 0; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        for (i = 0; i < n; i++)
        {
            for (j = 0; j <= i; j++)
            {
                printf(" ");
            }
            for (j = 0; j < n - i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }

    }

    return 0;
}
```
-- -
## BC64 K��ͼ��
����
KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á� * ����ɵ�K��ͼ����
����������
�������룬һ��������2~20����

���������
���ÿ�����룬����á� * ����ɵ�K�Σ�ÿ���� * ��������һ���ո�
ʾ��1
���룺
2
�����
\ * **
\ * *
*
\ * *
\ * **
ʾ��2
���룺
3
�����
\ * ***
\ * **
\ * *
*
\ * *
\ * **
\ * ***
ʾ��3
���룺
4
�����
\ * ****
\ * ***
\ * **
\ * *
*
\ * *
\ * **
\ * ***
\ * ****

[��Ŀ����](https://www.nowcoder.com/practice/753cc2662d9949fe826a85f815db0ca4)

```c
#include <stdio.h>

int main()
{
    int n = 0;
    while ((scanf("%d", &n)) != EOF)
    {
        int i = 0;
        int j = 0;
        for (i = 0; i <= n; i++)
        {
            for (j = 0; j <= n - i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        for (i = 0; i < n; i++)
        {
            for (j = 0; j <= i + 1; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }

    return 0;
}
```
-- -
## BC65 ����ͼ��
����
KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á� * ����ɵļ���ͼ����
����������
�������룬һ��������2~20����
���������
���ÿ�����룬����á� * ����ɵļ��Ρ�
![���������ͼƬ����](https://img-blog.csdnimg.cn/9203d385fb4a44de8928ee451da9dd21.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3FxXzU2ODg0MDIz,size_16,color_FFFFFF,t_70#pic_center)
[��Ŀ����] (https ://www.nowcoder.com/practice/a6d1081e0c9a42f19e42ed6cd91556c1)

    ```c
#include <stdio.h>

    int main()
{
    int n = 0;
    while ((scanf("%d", &n)) != EOF)
    {
        int i = 0;
        int j = 0;
        for (i = 0; i <= n; i++)
        {
            for (j = 0; j < n - i; j++)
            {
                printf("  ");
            }
            for (j = 0; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        for (i = 0; i < n; i++)
        {
            for (j = 0; j <= i; j++)
            {
                printf("  ");
            }
            for (j = 0; j < n - i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}
```
-- -
## BC66 ��б����ͼ��
����
KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á� * ����ɵķ�б����ͼ����
����������
�������룬һ��������2~20������ʾ�����������Ҳ��ʾ��ɷ�б�ߵġ� * ����������

���������
���ÿ�����룬����á� * ����ɵķ�б�ߡ�
![���������ͼƬ����](https://img-blog.csdnimg.cn/3f019616c0c14d99ba6fe61118b03f0d.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3FxXzU2ODg0MDIz,size_16,color_FFFFFF,t_70#pic_center)
[��Ŀ����] (https ://www.nowcoder.com/practice/7b066963c4eb4d188becd18c37dfe22d)

    ```c
#include <stdio.h>

    int main()
{
    int n = 0;
    while ((scanf("%d", &n)) != EOF)
    {
        int i = 0;
        for (i = 0; i < n; i++)
        {
            int j = 0;
            for (j = 0; j < i; j++)
            {
                printf(" ");
            }
            printf("*");
            printf("\n");
        }
    }

    return 0;
}
```
-- -
## BC67 ��б����ͼ��
����
KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á� * ����ɵ���б����ͼ����
����������
�������룬һ��������2~20������ʾ�����������Ҳ��ʾ�����б�ߵġ� * ����������
���������
���ÿ�����룬����á� * ����ɵ���б�ߡ�
![���������ͼƬ����](https://img-blog.csdnimg.cn/6ffd29039af14377830bf2e7f49a0056.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3FxXzU2ODg0MDIz,size_16,color_FFFFFF,t_70#pic_center)
[��Ŀ����] (https ://www.nowcoder.com/practice/61ef68d129534dfbb04b232e1244e447)

    ```c
#include <stdio.h>

    int main()
{
    int n = 0;
    while ((scanf("%d", &n)) != EOF)
    {
        int i = 0;
        for (i = 0; i < n; i++)
        {
            int j = 0;
            for (j = 0; j < n - 1 - i; j++)
            {
                printf(" ");
            }
            printf("*\n");
        }
    }

    return 0;
}
```
-- -
## BC68 X��ͼ��
����
KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á� * ����ɵ�X��ͼ����
����������
�������룬һ��������2~20������ʾ�����������Ҳ��ʾ��ɡ�X���ķ�б�ߺ���б�ߵĳ��ȡ�
���������
���ÿ�����룬����á� * ����ɵ�X��ͼ����
![���������ͼƬ����](https://img-blog.csdnimg.cn/2bd06a96fa634c46bb4a5f49cabaa3a4.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3FxXzU2ODg0MDIz,size_16,color_FFFFFF,t_70#pic_center)
[��Ŀ����] (https ://www.nowcoder.com/practice/83d6afe3018e44539c51265165806ee4)

    ```c
#include <stdio.h>

    int main()
{
    int n = 0;
    while ((scanf("%d", &n)) != EOF)
    {
        int i = 0;
        for (i = 0; i < n; i++)
        {
            int j = 0;
            for (j = 0; j < n; j++)
            {
                if (j == i || j + i == n - 1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
```
-- -
## BC69 ����������ͼ��
����
KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á� * ����ɵġ����ġ�������ͼ����
����������
�������룬һ��������3~20������ʾ�����������Ҳ��ʾ��������αߵġ� * ����������
���������
���ÿ�����룬����á� * ����ɵġ����ġ������Σ�ÿ���� * ��������һ���ո�
![���������ͼƬ����](https://img-blog.csdnimg.cn/5b9c7c46d1904b2bb3dbd492d4ccd944.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3FxXzU2ODg0MDIz,size_16,color_FFFFFF,t_70#pic_center)
[��Ŀ����] (https ://www.nowcoder.com/practice/72347ee949dc47399186ee183632f303)

    ```c
#include <stdio.h>

    /*
    int main()
    {
        int n = 0;
        while(scanf("%d", &n) != EOF)
        {
            int i = 0;
            for(i=0; i<=n; i++)
            {
                int j = 0;
                for(j=0; j<n; j++)
                {
                    printf("* ");
                }
                printf("\n");
            }
        }

        return 0;
    }
    */
    int main()
{
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        int i = 0;
        for (i = 1; i <= n; i++)
        {
            int j = 0;
            for (j = 1; j <= n; j++)
            {
                if (i == 1 || i == n || j == 1 || j == n)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
    }

    return 0;
}
```
-- -
## BC70 ����������ͼ��
����
KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á� * ����ɵġ����ġ�������ͼ����
����������
�������룬һ��������3~20������ʾ�����������Ҳ��ʾ��������αߵġ� * ����������
���������
���ÿ�����룬����á� * ����ɵġ����ġ������Σ�ÿ���� * ��������һ���ո�
![���������ͼƬ����](https://img-blog.csdnimg.cn/1e8c8a43cd6f4576a5ff9fbc0a6e9187.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3FxXzU2ODg0MDIz,size_16,color_FFFFFF,t_70#pic_center)
[��Ŀ����] (https ://www.nowcoder.com/practice/2ccc5fca423e47f0b622fe6f151cfab4)

    ```c
#include <stdio.h>

    int main()
{
    int n = 0;
    while ((scanf("%d", &n)) != EOF)
    {
        int i = 0;
        for (i = 0; i < n; i++)
        {
            int j = 0;
            for (j = 0; j < n; j++)
            {
                if (j == 0 || i == n - 1 || i == j)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
    }

    return 0;
}