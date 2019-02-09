//两个整数之间的汉明距离指的是这两个数字对应二进制位不同的位置的数目。
//
//给出两个整数 x 和 y，计算它们之间的汉明距离。
//
//注意：
//0 ≤ x, y < 231.
//
//示例:
//
//输入 : x = 1, y = 4
//
//输出 : 2
//
// 解释 :
//	1   (0 0 0 1)
//	4   (0 1 0 0)
//           ↑   ↑
//
//	上面的箭头指出了对应二进制位不同的位置。
//
//
//
//给定一个正整数，输出它的补数。补数是对该数的二进制表示取反。
//
//注意 :
//
//给定的整数保证在32位带符号整数的范围内。
//你可以假定二进制数不包含前导零位。
//示例 1 :
//
//输入 : 5
// 输出 : 2
//  解释 : 5的二进制表示为101（没有前导零位），其补数为010。所以你需要输出2。
//	   示例 2 :
//
//   输入 : 1
//	输出 : 0
//	 解释 : 1的二进制表示为1（没有前导零位），其补数为0。所以你需要输出0。
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
	printf("请输入两个数:");
	scanf("%d %d", &a, &b);
	//int count = hammingDistance(a, b);
	int count = findComplement(a);
	printf("%d\n", count);
	system("pause");
	return 0;
}