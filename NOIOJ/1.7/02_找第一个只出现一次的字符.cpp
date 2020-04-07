//2020年4月4日16:51:54
//描述：
//给定一个只包含小写字母的字符串，请你找到第一个仅出现一次的字符。如果没有，输出no。
//
//输入：
//一个字符串，长度小于100000。
//输出：
//输出第一个仅出现一次的字符，若没有则输出no

#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a[10000];
	int b[26][1] = { {0} };
	int i, j, num = 0;
	for (i = 0; i < 26; i++) b[i][0] = 0;
	while ((a[num] = getchar()) != '\n')//逐字读入输入
	{
		num += 1;		
	}
	for (j = 0; j < num; j++)
	{
		b[a[j] - 97] += 1;
	}
	for (j = 0; j < 26; j++)
	{
		if (b[j] == 1)
		{
			cout << char(j + 97);
			break;
		}
	}
	return 0;
}