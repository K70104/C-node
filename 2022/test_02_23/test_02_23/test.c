#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void move_Parity(int* arr, int sz)
{
	int left = 0;
	int right = sz - 1;

	while (left < right)
	{
		//��ǰ����ҵ�һ��ż��
		while ((left < right) && arr[left] % 2 == 1)
		{
			left++;
		}
		//�Ӻ���ǰ�ҵ�һ������
		while ((left < right) && arr[right] % 2 == 0)
		{
			right--;
		}
		//����
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}

void Print(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	//ȫ��ż�� ȫ������
	//��ż����
	int arr[] = { 1,23,3,47,5,6,7,8,92,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	move_Parity(arr, sz);

	Print(arr, sz);

	return 0;
}
