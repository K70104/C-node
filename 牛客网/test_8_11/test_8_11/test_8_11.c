@[TOC](Ŀ¼)

-- -
## BC7 ���̶�����
����
���Ǵ��������ͨ����ʮ���Ʊ�ʾ���ڼ�����ڴ������Զ����Ʋ�����ʽ�洢����ͨ�������Ʊ�ʾ�������Ƚϳ���Ϊ�˱����ڳ�����ƹ��������ʹ������ݣ�ͨ�����ð˽��ƺ�ʮ�����ƣ������˶����Ʋ����ʾ���������������˶��������ı���ص㡣�����ʮ��������1234��Ӧ�İ˽��ƺ�ʮ�����ơ�

����������
��
���������
ʮ��������1234��Ӧ�İ˽��ƺ�ʮ�����ƣ���ĸ��д�����ÿո�ֿ�������Ҫ���ڰ˽���ǰ��ʾǰ��0����ʮ��������ǰ��ʾǰ��0X��
��ע��
printf����ʹ��ʹ�ø�ʽ���ƴ��� % o������ % X���ֱ�����˽���������ʮ��������������ʹ�����η���#������ǰ����ʾ

[��Ŀ����](https://www.nowcoder.com/practice/4ffcc9f206b949ddb057ee0099b34d51)


#include <stdio.h>

int main()
{
    printf("0%o 0X%X", 1234, 1234);
    return 0;
}


## BC8 ʮ������תʮ����
����
BoBoд��һ��ʮ����������ABCDEF������KiKi��Ӧ��ʮ���������Ƕ��١�

����������
��
���������
ʮ����������ABCDEF��Ӧ��ʮ������������ռ���Ϊ15��
��ע��
printf����ʹ��ʹ�ø�ʽ���ƴ��� % md��������Ϊm��ʮ����������

[��Ŀ����](https://www.nowcoder.com/practice/33e148570d5c4e728116e2f861638c9c)


#include <stdio.h>

int main()
{
    printf("%15d", 0xABCDEF);

    return 0;
}


## BC9 printf�ķ���ֵ
����
KiKiд��һ�������Hello world!���ĳ���BoBo��ʦ������printf�����з���ֵ�����ܰ���д���������printf(��Hello world!��)�ķ���ֵ��
����������
��
���������
�������У�
��һ��Ϊ��Hello world!��
�ڶ���Ϊprintf(��Hello world!��)���ú�ķ���ֵ��

[��Ŀ����](https://www.nowcoder.com/practice/a19ef1d8e55c4cc786f11cbf6b2fde61)


#include <stdio.h>

int main()
{
    int ret = printf("Hello world!");
    printf("\n");
    printf("%d", ret);

    return 0;
}



## BC11 ѧ��������Ϣ�������
��������һ��ѧ����ѧ�ţ��Լ�3�ƣ�C���ԣ���ѧ��Ӣ��ɼ�������Ļ�������ѧ����ѧ�ţ�3�Ƴɼ���
����������
ѧ���Լ�3�Ƴɼ���ѧ�źͳɼ�֮����Ӣ�ķֺŸ������ɼ�֮����Ӣ�Ķ��Ÿ�����
���������
ѧ�ţ�3�Ƴɼ��������ʽ������������
ʾ��1
���룺
17140216; 80.845, 90.55, 100.00

�����
The each subject score of  No. 17140216 is 80.85, 90.55, 100.00.

[��Ŀ����](https://www.nowcoder.com/practice/58b6a69b4bf943b49d2cd3c15770b9fd)


#include <stdio.h>

int main()
{
    int id = 0;
    float c = 0;
    float math = 0;
    float english = 0;

    scanf("%d;%f,%f,%f", &id, &c, &math, &english);
    printf("The each subject score of  No. %d is %.2f, %.2f, %.2f.", id, c, math, english);

    return 0;
}


## BC12 �ַ�������
����
����һ���ַ�����������һ�������ν�������
����������
����ֻ��һ�У�һ���ַ���
���������
���ַ����ɵ������ν�������
ʾ��1
���룺
1
�����
1
1 1
1 1 1
1 1 1 1
1 1 1 1 1

[��Ŀ����](https://www.nowcoder.com/practice/0fae60c3b5c64699b7c0f031c2187dde)


#include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);
    int i = 0;
    for (i = 0; i < 5; i++)
    {
        int j = 0;
        for (j = 0; j < 5 - 1 - i; j++)
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++)
        {
            printf("%c ", ch);
        }
        printf("\n");
    }

    return 0;
}



## BC13 ASCII��
����
BoBo��KiKi�ַ��������ַ�������ʾ���ַ����ڴ�����ASCII����ʽ�洢��BoBo����һ�������KiKi��ת������ASCII��Ϊ��Ӧ�ַ���������ǡ�

73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33

����������
��
���������
ת�������Ŀ�и���������ASCII����Ӧ���ַ���

[��Ŀ����](https://www.nowcoder.com/practice/4280d330fe314e8f98cd5c593e3e9190)


#include <stdio.h>

int main()
{
    int arr[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33 };

    int i = 0;
    for (i = 0; i < 12; i++)
    {
        printf("%c", arr[i]);
    }

    return 0;
}



## BC14 ���������������
����
����һ���˵ĳ������ڣ����������գ������������е��ꡢ�¡��շֱ������
����������
����ֻ��һ�У��������ڣ����������գ�������֮�������û�зָ�����
���������
���У���һ��Ϊ������ݣ��ڶ���Ϊ�����·ݣ�������Ϊ�������ڡ����ʱ����·ݻ�����Ϊ1λ������Ҫ��1λ��ǰ�油0��
ʾ��1
���룺
20130225
�����
year = 2013
month = 02
date = 25

[��Ŀ����](https://www.nowcoder.com/practice/4a4a9dd1edb6453ba4a0432319200743)


#include <stdio.h>

int main()
{
    int y = 0;
    scanf("%d", &y);

    int year = y / 10000;
    int month = y % 10000 / 100;
    int date = y % 100;

    printf("year=%d\n", year);
    printf("month=%02d\n", month);
    printf("date=%02d\n", date);

    return 0;
}


## BC16 �ַ�תASCII��
����
BoBo��KiKi�ַ��������ַ�������ʾ���ַ����ڴ�����ASCII����ʽ�洢��BoBo����һ�������KiKi������һ���ַ���������ַ���Ӧ��ASCII�롣
����������
һ�У�һ���ַ���
���������
һ�У���������ַ���Ӧ��ASCII�롣
ʾ��1
���룺
c
�����
99

[��Ŀ����](https://www.nowcoder.com/practice/93f4d05a02d9468db424ed4316bfc8fd)


#include <stdio.h>

int main()
{
    char ch = 0;
    scanf("%c", &ch);
    printf("%d", ch);
    return 0;
}


## BC17 ������ʽ��ֵ
����
�������ʽ��(-8 + 22)��a - 10 + c��2�������У�a = 40��c = 212��

����������
�ޡ�
���������
(-8 + 22)��a - 10 + c��2����֮��Ľ����Ϊһ��������

[��Ŀ����](https://www.nowcoder.com/practice/58457d27f91043edaf95b6591bb64fd6)


#include <stdio.h>

int main()
{
    int a = 40;
    int c = 212;
    int b = (-8 + 22) * a - 10 + c / 2;
    printf("%d", b);

    return 0;
}



## BC18 ����������
����
������������a��b(��10, 000 < a, b < 10, 000)������a����b�������̺�������
    ����������
    һ�У�������������a��b������Ϊ�������ͳ�������Ϊ�㣩���м��ÿո������
    ���������
    һ�У�������������������Ϊ�����̺��������м���һ���ո������
    ʾ��1
    ���룺
    15 2
    �����
    7 1

    [��Ŀ����](https://www.nowcoder.com/practice/34d3911bf2fd48a285f6396e886a1259)

#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    printf("%d %d", a / b, a % b);

    return 0;
}



## BC19 �������һ����λ��
����
��һ����λ�������������


����������
һ�У�����һ������n��1000 <= n <= 9999����
���������
���ÿ�����룬���������Ӧ��λ����
ʾ��1
���룺
1234
�����
4321

[��Ŀ����](https://www.nowcoder.com/practice/1f7c1d67446e4361bf4af67c08e0b8b0)


#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    while (n)
    {
        printf("%d", n % 10);
        n /= 10;
    }

    return 0;
}



## BC20 kiki����
����
���⣺KiKi����5���ˣ��Ѿ��ܹ���ʶ100���ڵķǸ����������Ҳ����ܹ����� 100 ���ڵķǸ������ļӷ����㡣������BoBo��ʦ����KiKi�ڽ��д��ڵ���100���������ļ���ʱ���������£�

1.ֻ���������������λ�����磺��KiKi��˵1234�ȼ���34��

2.������������ڵ��� 100�� ��ôKIKIҲ�������������������λ���������λ��ʮλΪ0����ֻ������λ��

���磺45 + 80 = 25

Ҫ������Ǹ����� a�� b��ģ��KiKi������������� a + b ��ֵ��

����������
һ�У����������Ǹ�����a��b����һ���ո�ָ�����0 <= a, b <= 231 - 1����
���������
���ÿ�����룬�������KiKi������������� a + b ��ֵ��
ʾ��1
���룺
45 80
�����
25

[��Ŀ����](https://www.nowcoder.com/practice/bcaf710fb58a44e1b678a890e6e90d7c)


#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int c = a + b;
    if (c / 10 % 10 == 0)
    {
        if (c % 10 == 0)
        {
            printf("0");
        }
        else
        {
            printf("%d", c % 10);
        }
    }
    else
        printf("%d%d", c / 10 % 10, c % 10);

    return 0;
}


## BC21 �������ĸ�λ����
����
����һ����������Ҫ��õ��ø������ĸ�λ����

����������
һ�У�����һ����������
���������
һ�У�����һ��������Ϊ���븡������Ӧ�ĸ�λ����
ʾ��1
���룺
13.141
�����
3

[��Ŀ����](https://www.nowcoder.com/practice/ffa94d27c6534396aef38813535c279f)


#include <stdio.h>

int main()
{
    float n = 0;
    scanf("%f", &n);
    printf("%d", (int)n % 10);

    return 0;
}


## BC22 ���ܻ������
����
���⣺һ��Լ��3.156��107s��Ҫ�������������䣬��ʾ������϶����롣


����������
һ�У�����һ������age(0 < age <= 200)��
    ���������
    һ�У�����һ����������������Ӧ��������
    ʾ��1
    ���룺
    20
    �����
    631200000

    [��Ŀ����](https://www.nowcoder.com/practice/e1d1bd99fee34b66ae3c777b74d555c8)


#include <stdio.h>

int main()
{
    long long age = 0;
    scanf("%d", &age);
    printf("%lld", age * 3156 * 10000);

    return 0;
}



## BC23 ʱ��ת��
����
��������seconds(0 < seconds < 100, 000, 000)������ת����Сʱ�����Ӻ��롣

    ����������
    һ�У�����һ����������������������
    ���������
    һ�У�������������������Ϊ����������Ӧ��Сʱ����������������������Ϊ�㣩���м���һ���ո������
    ʾ��1
    ���룺
    3661
    �����
    1 1 1

    [��Ŀ����](https://www.nowcoder.com/practice/c4ae7bcac7f9491b8be82ee516a94899)


#include <stdio.h>

int main()
{
    int seconds = 0;
    scanf("%d", &seconds);
    int h = seconds / 3600;
    int m = seconds % 3600 / 60;
    int s = seconds % 3600 % 60;
    printf("%d %d %d", h, m, s);
    return 0;
}


## BC24 �ܳɼ���ƽ���ּ���
����
��������һ��ѧ����3�Ƴɼ�������Ļ�������ѧ�����ܳɼ��Լ�ƽ���ɼ���
����������
һ�У�3�Ƴɼ����ɼ�֮����һ���ո������
���������
һ�У��ܳɼ���ƽ���ɼ���С���������λ������һ���ո������
ʾ��1
���룺
79.5 80.0 98.0
�����
257.50 85.83

[��Ŀ����](https://www.nowcoder.com/practice/0fa5132c156b434da4347ad051c4be22)


#include <stdio.h>

int main()
{
    float m, c, e;
    scanf("%f %f %f", &m, &c, &e);
    printf("%.2f %.2f", m + c + e, (m + c + e) / 3);

    return 0;
}


## BC25 ��������ָ��
����
���⣺����BMIָ������������ָ������BMIָ��������������ָ�����������ָ���ֳ����أ�Ӣ��ΪBody Mass Index�����BMI�����������ع����������������ƽ���ó������֣���Ŀǰ�����ϳ��õĺ����������ݳ̶��Լ��Ƿ񽡿���һ����׼����Ҫ����ͳ����;����������Ҫ�Ƚϼ�����һ���˵����ض��ڲ�ͬ�߶ȵ����������Ľ���Ӱ��ʱ��BMIֵ��һ���������ɿ���ָ�ꡣ

����������
һ�У������������ֱ��ʾ���أ��������ߣ����ף����м���һ���ո�ָ���
���������
һ�У�BMIָ����������λС������
ʾ��1
���룺
70 170
�����
24.22

[��Ŀ����](https://www.nowcoder.com/practice/422f6341cf1b4212a7f8c703df111389)


#include <stdio.h>

int main()
{
    float a, b;
    scanf("%f %f", &a, &b);
    b /= 100;
    printf("%.2f", a / (b * b));

    return 0;
}



## BC27 ������������
����
����һ������İ뾶��������������������������ʽΪ V = 4 / 3 * ��r3������ �� = 3.1415926��
����������
һ�У��ø�������ʾ������İ뾶��
���������
һ�У�����������С�������3λ��
ʾ��1
���룺
3.0
�����
113.097

[��Ŀ����](https://www.nowcoder.com/practice/0f5d9bfcd63b47fda2052a583b1fbd1f)


#include <stdio.h>

int main()
{
    float r;
    scanf("%f", &r);
    printf("%.3f", 4.0 / 3 * 3.1415926 * r * r * r);

    return 0;
}


## BC28 ��Сдת��
����
ʵ����ĸ�Ĵ�Сдת�����������������
����������
�������룬ÿһ�������д��ĸ��
���������
���ÿ�����������Ӧ��Сд��ĸ��
ʾ��1
���룺
A
B
�����
a
b

[��Ŀ����](https://www.nowcoder.com/practice/4e089ee8966a4ed4b306f64e68d45264)


#include <stdio.h>

int main()
{
    int ch = 0;
    while ((ch = getchar()) != EOF)
    {
        printf("%c\n", ch + 32);
        getchar();
    }

    return 0;
}


## BC29 2��n�η�����
����
��ʹ���ۼƳ˷��Ļ����ϣ�ͨ����λ���㣨 << ��ʵ��2��n�η��ļ��㡣

����������
�������룬ÿһ����������n��0 <= n < 31����
    ���������
    ���ÿ�����������Ӧ��2��n�η��Ľ����
    ʾ��1
    ���룺
    2
    10
    �����
    4
    1024

    [��Ŀ����](https://www.nowcoder.com/practice/35a1e8b18658411388bc1672439de1d9)


#include <stdio.h>

int main()
{
    int n = 0;
    while ((scanf("%d", &n) != EOF))
    {
        printf("%d\n", 1 << n);
    }

    return 0;
}
```
-- -
## BC30 KiKi������
����
BoBo����һ�����̣�������n��δ�򿪵����̣�KiKiϲ�������̣���һʱ�䷢�������̡�KiKiÿh�����ܺȹ�һ�����̣�����KiKi�ںȹ�һ������֮ǰ�������һ������ô����m���Ӻ��ж��ٺ�δ�򿪵����̣�

����������
�������룬ÿ�������һ�У�����n��h��m����Ϊ���������������ݱ�֤m <= n * h��
���������
���ÿ�����룬���Ҳ��һ�У�ʣ�µ�δ�򿪵����̺�����
ʾ��1
���룺
8 5 16
�����
4

[��Ŀ����](https://www.nowcoder.com/practice/c7721f3a1b1a47a783974453e82cadbb)

```c
#include <stdio.h>

int main()
{
    int n, h, m;
    while ((scanf("%d %d %d", &n, &h, &m)) != EOF)
    {
        if (m % h)
        {
            printf("%d\n", n - m / h - 1);
        }
        else
        {
            printf("%d\n", n - m / h);
        }
    }

    return 0;
}
```
-- -
## BC32 ���ѧ����Ϣ
����
ѧ����Ϣ����ϵͳ��ѧУ��ѧ�������Ҫ���ߣ�����һ��ѧ��������Ϣ���£����� - Jack������ - 18���Ա� - Man���밴����������ĸ�ʽ�����ѧ������Ϣ��
����������
��
���������
�����Ϊ���У��ֱ�Ϊ�����У��ָ��У���Ϣ�С�
��һ�У������У�ÿ������֮����4���ո�
�ڶ��У��ָ��У�һ��21������"-"��
�����У���Ϣ�У�ÿ�������Ϣ�ͱ�������ĸ���롣����������£�
Name Age Gender
\-------------------- -
Jack 18 man

[��Ŀ����](https://www.nowcoder.com/practice/8e94458049eb4e838f711bbd1be0045e)

```c
#include <stdio.h>

int main()
{
    printf("Name    Age    Gender\n");
    printf("---------------------\n");
    printf("Jack    18     man\n");

    return 0;
}
```
-- -
## BC33 ����ƽ���ɼ�
����
�Ӽ�������5��ѧ���ĳɼ����������������ǵ�ƽ���ɼ���������������һλС������

����������
һ�У���������5����������Χ0~100�����ÿո�ָ���
���������
һ�У����5������ƽ����������һλС������
ʾ��1
���룺
75 80 43 67 96
�����
72.2

[��Ŀ����](https://www.nowcoder.com/practice/30a28eb88c3f4e87be1a5b397ddd6fe2)

```c
#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e);
    printf("%.1f", (a + b + c + d + e) / 5.0);

    return 0;
}
```
-- -
## BC34 ����A + B
����
����һ��ʮ��������a����һ���˽�����b�����a + b��ʮ���ƽ������Χ - 231~231 - 1����
����������
һ�У�һ��ʮ��������a����һ���˽�����b���м���һ���ո�
���������
һ�У�a + b��ʮ���ƽ����
ʾ��1
���룺
0x12 05
����
�����
23
��ע��
ʮ������Hexadecimalһ����0x��ͷ������0xFF���˽���Octal��һ����0��ͷ������07��

[��Ŀ����](https://www.nowcoder.com/practice/6187581174ac48278ca3bccf8d534897)

```c
#include <stdio.h>

int main()
{
    int a, b;
    scanf("0x%x 0%o", &a, &b);
    printf("%d", a + b);

    return 0;
}
```
-- -
## BC35 �ж���ĸ
����
�Ӽ�����������һ���ַ�������ж��Ƿ�����ĸ��������Сд����
����������
�������룬ÿ���������һ���ַ���
���������
���ÿ�����룬������ַ�����ĸ��YES�����ǣ�NO����
ʾ��1
���룺
H
9
�����
YES
NO

[��Ŀ����](https://www.nowcoder.com/practice/44d2d63103664913bc243d3836b4f341)

```c
#include <stdio.h>

int main()
{
    // ��������
    int ch = 0;
    while ((ch = getchar()) != EOF)
    {
        if (ch >= 'A' && ch <= 'Z' || (ch >= 'a' && ch <= 'x'))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        getchar(); // ����\n
    }

    return 0;
}
```

-- -
## BC36 ��������
����
BMIָ��������������ָ�����������ع����������������ƽ���ó������֣���Ŀǰ�����ϳ��õĺ����������ݳ̶��Լ��Ƿ񽡿���һ����׼�����磺һ���˵����Ϊ1.75�ף�����Ϊ68ǧ�ˣ�����BMI = 68 / (1.75 ^ 2) = 22.2��ǧ�� / �� ^ 2������BMIָ��Ϊ18.5��23.9ʱ�������������ʾ������ڽ������ա�����ж����彡�������
����������
һ�У�����һ���˵����أ�ǧ�ˣ�����ߣ��ף����м���һ���ո�ָ���
���������
һ�У��������Normal(����)��Abnormal(������)��
ʾ��1
���룺
68 1.75
�����
Normal

ʾ��2
���룺
67.5 1.65
�����
Abnormal

[��Ŀ����](https://www.nowcoder.com/practice/08b28e61ff6345febf09969b3a167f7e)

```c
#include <stdio.h>

int main()
{
    float h, w, BMI;
    scanf("%f %f", &h, &w);
    BMI = h / (w * w);
    if (BMI >= 18.5 && BMI <= 23.9)
    {
        printf("Normal");
    }
    else
    {
        printf("Abnormal");
    }


    return 0;
}
```
-- -
## BC37 ����
����
KiKi�ǳ�ϲ����������һ�ҵ�����������һ���·������˽⵽����������ǡ�˫11����11��11�գ�������·���7�ۣ���˫12�� ��12��12�գ�������·���8�ۣ�������Ż�ȯ���Զ����50Ԫ���Ż�ȯֻ����˫11��˫12ʹ�ã�����KiKi����������Ǯ����
����������
һ�У��ĸ����֣���һ������ʾС�����е��·��۸񣬵ڶ��͵����������ֱ��ʾ������·ݡ���������ڡ����ĸ�������ʾ�Ƿ����Ż�ȯ�����Ż�ȯ��1��ʾ�����Ż�ȯ��0��ʾ����
���������
һ�У�С��ʵ�ʻ���Ǯ����������λС����������ʾ����Ҫָ���̼ҵ�����Ǯ��
ʾ��1
���룺
1000.0 11 11 1
�����
650.00
ʾ��2
���룺
999.8 12 12 0
�����
799.84
ʾ��3
���룺
66.6 11 11 1
�����
0.00

[��Ŀ����](https://www.nowcoder.com/practice/5d7dfd405e5f4e4fbfdff6862c46b751)

```c
#include <stdio.h>

int main()
{
    float price;
    int month, day, c;
    scanf("%f %d %d %d", &price, &month, &day, &c);
    if (month == 11 && day == 11)
    {
        if (c == 1)
        {
            price = price * 0.7 - 50;
        }
        else {
            price = price * 0.7;
        }
    }
    if (month == 12 && day == 12)
    {
        if (c == 1)
        {
            price = price * 0.8 - 50;
        }
        else {
            price = price * 0.8;
        }
    }

    if (price <= 0)
    {
        price = 0;
        printf("%.2f", price);
    }
    else
    {
        printf("%.2f", price);
    }

    return 0;
}
```
-- -
## BC40 ��ѡ�糤
����
������������Ҫ��ѡ�糤����������ѡ�˷ֱ���A��B������ÿ��ͬѧ���벢��ֻ��ͶһƱ�����յ�Ʊ�����Ϊ�糤.
����������
һ�У��ַ����У�����A��B���������ַ�0������
���������
һ�У�һ���ַ���A��B��E�����A��ʾA��Ʊ���࣬���B��ʾB��Ʊ���࣬���E��ʾ���˵�Ʊ����ȡ�
ʾ��1
���룺
ABBABBAAB0
�����
B

[��Ŀ����](https://www.nowcoder.com/practice/45a30e3ef51040ed8a7674984d6d1553)

```c
#include <stdio.h>
#include <string.h>

int main()
{
    char arr[100] = { 0 };
    scanf("%s", &arr);
    int len = strlen(arr);
    int a = 0;
    int b = 0;
    int e = 0;
    int i = 0;
    for (i = 0; i < len - 1; i++)
    {
        if (arr[i] == 'A')
        {
            a++;
        }
        if (arr[i] == 'B')
        {
            b++;
        }
    }
    if (a > b)
    {
        printf("A");
    }
    else if (a < b)
    {
        printf("B");
    }
    else if (a == b)
    {
        printf("E");
    }

    return 0;
}
```
-- -
## BC41 ���������
����
��˵����140�����߳�Ϊ��ţ�KiKi��֪�����Լ��ǲ�����ţ����������жϡ�����һ��������ʾһ���˵����̣�������ڵ���140�����������һ����ţ������Genius����
����������
�������룬ÿ���������һ��������ʾ�����̡�
���������
���ÿ�����룬�����Genius����
ʾ��1
���룺
160
�����
Genius

[��Ŀ����](https://www.nowcoder.com/practice/557cc54704bb4d56b73b62d1a5455331)

```c
#include <stdio.h>

int main()
{
    int IQ = 0;
    while ((scanf("%d", &IQ) != EOF))
    {
        if (IQ >= 140)
        {
            printf("Genius\n");
        }
    }

    return 0;
}
```
-- -
## BC42 �����ɼ�
����
KiKi��֪�����Ŀ��Գɼ��Ƿ�������������жϡ��Ӽ�������һ��������ʾ�ĳɼ�������жϳɼ��Ƿ���90~100֮�䣬������������Perfect����

����������
�������룬ÿ���������һ��������ʾ�ĳɼ���90~100����
���������
���ÿ�����룬�����Perfect����
ʾ��1
���룺
98
�����
Perfect

[��Ŀ����](https://www.nowcoder.com/practice/8312e497509a450f968d9a6a2381ce32)

```c
#include <stdio.h>

int main()
{
    int score = 0;
    while ((scanf("%d", &score) != EOF))
    {
        if (score >= 90 && score <= 100)
        {
            printf("Perfect\n");
        }
    }

    return 0;
}
```
-- -
## BC43 �������
����
KiKi��֪�����Ŀ��Է����Ƿ�ͨ����������жϡ��Ӽ�����������һ��������ʾ�ķ���������жϸ÷����Ƿ��ڼ���Χ�ڣ�������񣬼����������ڵ���60�֣��������Pass�������������Fail����
����������
�������룬ÿ���������һ��������ʾ�ķ�����0~100����
���������
���ÿ�����룬�����Pass����Fail����
ʾ��1
���룺
94
�����
Pass
ʾ��2
���룺
44
�����
Fail

[��Ŀ����](https://www.nowcoder.com/practice/56513524333148b38945e1989bc7df4e)

```c
#include <stdio.h>

int main()
{
    int socre = 0;
    while ((scanf("%d", &socre) != EOF))
    {
        if (socre >= 60)
        {
            printf("Pass\n");
        }
        else
        {
            printf("Fail\n");
        }
    }

    return 0;
}
```
-- -
## BC44 �ж�������ż��
����
KiKi��֪��һ����������ż�ԣ�������жϡ��Ӽ�����������һ����������Χ - 231~231 - 1��������ж�������ż�ԡ�
����������
�������룬ÿ���������һ��������
���������
���ÿ�����룬���������������Odd������ż����Even����
ʾ��1
���룺
4
7
�����
Even
Odd

[��Ŀ����](https://www.nowcoder.com/practice/a8b018667e274af29b5f76a6673450fc)

```c
#include <stdio.h>

int main()
{
    int num = 0;
    while ((scanf("%d", &num) != EOF))
    {
        if (num & 2 != 0)
        {
            printf("Odd\n");
        }
        else
        {
            printf("Even\n");
        }
    }

    return 0;
}
```
-- -
## BC46 �ж���Ԫ�����Ǹ���
����
KiKi��ʼѧϰӢ����ĸ��BoBo��ʦ���������������ĸA(a), E(e), I(i), O(o), U(u)��ΪԪ��������������ĸ��Ϊ�������������д�����ж��������ĸ��Ԫ����Vowel�����Ǹ�����Consonant����
����������
�������룬ÿ������һ����ĸ��
���������
���ÿ�����룬���Ϊһ�У����������ĸ��Ԫ����������Сд���������Vowel�������������ĸ�Ƿ�Ԫ���������Consonant����
ʾ��1
���룺
A
b
�����
Vowel
Consonant

[��Ŀ����](https://www.nowcoder.com/practice/7eb4df4d52c44d309081509cf52ecbc4)

��һ�ж�
```c
#include <stdio.h>

int main()
{
    int ch = 0;

    while ((ch = getchar()) != EOF)
    {
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            printf("Vowel\n");
        }
        else
        {
            printf("Consonant\n");
        }
        getchar();
    }

    return 0;
}
```

������洢
```c
#include <stdio.h>

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
```
-- -
## BC47 �ж��ǲ�����ĸ
����
KiKi���ж�������ַ��ǲ�����ĸ����������ʵ�֡�

����������
�������룬ÿһ������һ���ַ���
���������
���ÿ�����룬�������ռһ�У��ж������ַ��Ƿ�Ϊ��ĸ���������������������
ʾ��1
���룺
A
6
�����
A is an alphabet.
6 is not an alphabet.

[��Ŀ����](https://www.nowcoder.com/practice/91a588dd4cd244bfa616f17603ec123c)

```c
#include <stdio.h>

int main()
{
    int ch = 0;
    while ((scanf("%c\n", &ch)) != EOF)
    {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            printf("%c is an alphabet.\n", ch);
        }
        else
        {
            printf("%c is not an alphabet.\n", ch);
        }
    }

    return 0;
}
```
-- -
## BC48 ��ĸ��Сдת��
����
KiKi�������ĸ��Сдת������һ���ַ����ж����Ƿ�Ϊ��д��ĸ������ǣ�����ת����Сд��ĸ����֮��ת��Ϊ��д��ĸ��
����������
�������룬ÿһ������һ����ĸ��
���������
���ÿ�����룬�������ռһ�У������ĸ�Ķ�Ӧ��ʽ��
ʾ��1
���룺
a
A
Z
�����
A
a
z

[��Ŀ����](https://www.nowcoder.com/practice/850ebd30a2a34cfc87199da3fc15786a)

```c
#include <stdio.h>

int main()
{
    int ch;
    while ((scanf("%c", &ch)) != EOF)
    {
        getchar();
        if (ch >= 'A' && ch <= 'Z')
        {
            printf("%c\n", ch + 32);
        }
        if (ch >= 'a' && ch <= 'z')
        {
            printf("%c\n", ch - 32);
        }
    }

    return 0;
}
```
-- -
## BC49 �ж��������Ĵ�С��ϵ
����
KiKi��֪���Ӽ���������������Ĵ�С��ϵ������ʵ�֡�
����������
��Ŀ�ж����������ݣ�ÿһ������������������Χ��1 ~231 - 1�����ÿո�ָ���
���������
���ÿ�����룬����������������С��ϵ�����ֺ͹�ϵ�����֮��û�пո�����������������
ʾ��1
���룺
1 1
�����
1 = 1
ʾ��2
���룺
1 0
�����
1 > 0
ʾ��3
���룺
0 1
�����
0 < 1

    [��Ŀ����](https://www.nowcoder.com/practice/f05358b9e8164b27871c87d3097f4dab)

```c
#include <stdio.h>

int main()
{
    int num1, num2;
    while ((scanf("%d %d", &num1, &num2)) != EOF)
    {
        if (num1 == num2)
        {
            printf("%d=%d\n", num1, num2);
        }
        if (num1 > num2)
        {
            printf("%d>%d\n", num1, num2);
        }
        if (num1 < num2)
        {
            printf("%d<%d\n", num1, num2);
        }
    }

    return 0;
}
```
-- -
## BC50 ���㵥λ��Ծ����
����
KiKi���ѧϰ���ź���ϵͳ�γ̣����ſ�����һ���ǳ���Ȥ�ĺ�������λ��Ծ����������һ�ֶ��巽ʽΪ��
![���������ͼƬ����](https://img-blog.csdnimg.cn/21cc32d39e0c4b61b509209ce2f1ba62.png#pic_center)
��������λ�弤������ʱ��t�ϵ�ֵ��

����������
��Ŀ�ж����������ݣ�ÿһ������һ��t(-1000 < t < 1000)��ʾ������ʱ��t��
    ���������
    ���������ֵ�����С�
    ʾ��1
    ���룺
    11
    0
    - 11
    �����
    1
    0.5
    0

    [��Ŀ����](https://www.nowcoder.com/practice/0b23793ae48a4e6cb7dfff042c959a04)

```c
#include <stdio.h>

int main()
{
    int t = 0;
    while ((scanf("%d", &t)) != EOF)
    {
        if (t > 0)
        {
            printf("1\n");
        }
        if (t == 0)
        {
            printf("0.5\n");
        }
        if (t < 0)
        {
            printf("0\n");
        }
    }

    return 0;
}
```
-- -
## BC51 �������ж�
����
KiKi��֪���Ѿ�������������a��b��c�ܷ񹹳������Σ�����ܹ��������Σ��ж������ε����ͣ��ȱ������Ρ����������λ���ͨ�����Σ���
����������
��Ŀ�ж����������ݣ�ÿһ����������a��b��c(0 < a, b, c < 1000)����Ϊ�����ε������ߣ��ÿո�ָ���
    ���������
    ���ÿ���������ݣ����ռһ�У�����ܹ��������Σ��ȱ��������������Equilateral triangle!���������������������Isosceles triangle!����������������������Ordinary triangle!������֮�����Not a triangle!����
    ʾ��1
    ���룺
    2 3 2
    3 3 3
    �����
    Isosceles triangle!
    Equilateral triangle!

    [��Ŀ����](https://www.nowcoder.com/practice/689ec1e742394e09b1059556fc167b65)

```c
#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;

    while (scanf("%d %d %d", &a, &b, &c) != EOF)
    {
        if ((a + b > c) && (a + c > b) && (b + c > a))
        {
            // �жϱ�
            if (a == b && b == c)
            {
                printf("Equilateral triangle!\n");
            }
            else if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
            {
                printf("Isosceles triangle!\n");
            }
            else
            {
                printf("Ordinary triangle!\n");
            }
        }
        else
        {
            printf("Not a triangle!\n");
        }
    }

    return 0;
}
```
-- -
## BC52 �����������ݳ̶�
����
�ڼ���BMI��BodyMassIndex ����������ָ�����İ��������ϣ��ж��������ݳ̶ȡ�BMI�й���׼���±���ʾ��
![���������ͼƬ����](https://img-blog.csdnimg.cn/f9243b20687448639510c0f92428a328.png#pic_center)
����������
�������룬ÿһ�а��������������ÿո�������ֱ�Ϊ���أ��������ߣ����ף���
���������
���ÿ�����룬���Ϊһ�У��������ݳ̶ȣ������ࡣ
ʾ��1
���룺
80 170
60 170
90 160
50 185
�����
Overweight
Normal
Obese
Underweight

[��Ŀ����](https://www.nowcoder.com/practice/4d604603fae94a26b59b7bc18f363bc0)

```c
#include <stdio.h>

int main()
{
    int w, h;
    float BMI;
    while ((scanf("%d %d", &w, &h)) != EOF)
    {
        BMI = w / (h / 100.00) / (h / 100.00);
        if (BMI < 18.5)
        {
            printf("Underweight\n");
        }
        if (BMI >= 18.5 && BMI <= 23.9)
        {
            printf("Normal\n");
        }
        if (BMI > 23.9 && BMI <= 27.9)
        {
            printf("Overweight\n");
        }
        if (BMI > 27.9)
        {
            printf("Obese\n");
        }
    }

    return 0;
}