#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    unsigned char puc[4];
//
//    struct tagPIM
//    {
//        unsigned char ucPim1;
//        unsigned char ucData0 : 1;
//        unsigned char ucData1 : 2;
//        unsigned char ucData2 : 3;
//    }*pstPimData;
//
//    pstPimData = (struct tagPIM*)puc;
//    memset(puc, 0, 4);
//
//    pstPimData->ucPim1 = 2;
//    pstPimData->ucData0 = 3;
//    pstPimData->ucData1 = 4;
//    pstPimData->ucData2 = 5;
//
//    printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
//
//    return 0;
//}
// ��ͼ


//#include <stdio.h>
//
//union Un
//{
//	short s[7]; // 7*2=14
//	// 2 4 2
//	int n;
//	// 4 4 4
//	// 16
//};
//
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//
//	return 0;
//}
// ???????????????????????????????


// ��X86�£������г���
//#include<stdio.h>
//
//int main()
//{
//    union
//    {
//        short k;
//        char i[2];
//    }*s, a;
//
//    s = &a;
//    s->i[0] = 0x39;
//    s->i[1] = 0x38;
//
//    printf("%x\n", a.k);
//
//    return 0;
//}
// ?????????????


// ģ��ʵ��atoi
//#include <stdio.h>
//#include <assert.h>
//#include <ctype.h>
//#include <limits.h>
//
//enum State
//{
//	VALID, // ����
//	INVALID, // �Ƿ�
//};
//enum State state = INVALID;
//
//int my_atoi(const char* str)
//{
//	// str��NULL
//	assert(str);
//
//	// strָ����ǿ��ַ���
//	if (*str == '\0')
//		return 0;
//
//	// �����հ��ַ�
//	while (isspace(*str)) // �������ʱ�հ��ַ� Ϊ�� ���ǣ�����0
//	{
//		str++;
//	}
//
//	// ʶ��������
//	int flag = 1;
//	if (*str == '+')
//	{
//		str++;
//	}
//	else
//	{
//		flag = -1;
//		str++;
//	}
//
//	// ת��
//	long long ret = 0;
//	while (*str)
//	{
//		if (isdigit(*str)) // �ж������ַ�
//		{
//			ret = ret * 10 + flag*(*str - '0');
//			if (ret > INT_MAX || ret < INT_MIN)
//			{
//				return 0; // �Ƿ�����
//			}
//			str++;
//		}
//		else
//		{
//			state = VALID;
//			return (int)ret; // �Ϸ�
//		}
//	}
//
//	state = VALID;
//	return (int)ret;
//}
//
//int main()
//{
//	int ret = my_atoi("    -1234abc");
//	if (state == VALID)
//	{
//		printf("�Ϸ����أ�ֵΪ��%d\n", ret);
//	}
//	else
//	{
//		printf("�Ƿ����أ�ֵΪ��%d\n", ret);
//	}
//
//	//??????????????????
//
//	return 0;
//}


//#include <stdio.h>
//
//#define SWAP_BIT(n) (n=((n&0xaaaaaaaa)>>1)+((n&0x55555555)<<1))
//
//int main()
//{
//	int a = 10;
//	
//	SWAP_BIT(a);
//	printf("a=%d\n", a);
//	
//	return 0;
//}

 