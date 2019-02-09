//��������֮��ĺ�������ָ�������������ֶ�Ӧ������λ��ͬ��λ�õ���Ŀ��
//
//������������ x �� y����������֮��ĺ������롣
//
//ע�⣺
//0 �� x, y < 231.
//
//ʾ��:
//
//���� : x = 1, y = 4
//
//��� : 2
//
// ���� :
//	1   (0 0 0 1)
//	4   (0 1 0 0)
//           ��   ��
//
//	����ļ�ͷָ���˶�Ӧ������λ��ͬ��λ�á�
//
//
//
//����һ����������������Ĳ����������ǶԸ����Ķ����Ʊ�ʾȡ����
//
//ע�� :
//
//������������֤��32λ�����������ķ�Χ�ڡ�
//����Լٶ���������������ǰ����λ��
//ʾ�� 1 :
//
//���� : 5
// ��� : 2
//  ���� : 5�Ķ����Ʊ�ʾΪ101��û��ǰ����λ�����䲹��Ϊ010����������Ҫ���2��
//	   ʾ�� 2 :
//
//   ���� : 1
//	��� : 0
//	 ���� : 1�Ķ����Ʊ�ʾΪ1��û��ǰ����λ�����䲹��Ϊ0����������Ҫ���0��
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>

int hammingDistance(int x, int y) {
	int count = 0;
	while (x != 0 || y != 0)
	{
		int a = x & 1;
		int b = y & 1;
		if (a != b)
		{
			count++;
		}
		x /= 2;
		y /= 2;
	}
	return count;
}

int findComplement(int num) {
	int a = num;
	int b = 1;
	while (a != 0)
	{
		b *= 2;
		a /= 2;
	}
	b -= 1;
	num ^= b;
	return num;
}

int main()
{
	int a = 0;
	int b = 0;
	printf("������������:");
	scanf("%d %d", &a, &b);
	//int count = hammingDistance(a, b);
	int count = findComplement(a);
	printf("%d\n", count);
	system("pause");
	return 0;
}