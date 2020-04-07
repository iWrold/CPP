#include<bits/stdc++.h>
using namespace std;
int len_1(char* a);
int tr(char* a);
int main() {
	char num_1[1000], num_2[1000];
	int temp = 48, temp_2 = 48, a = 63;
	int i = 0, len;
	while ((num_1[i] = getchar()) != ' ')//逐字读入输入
	{
		i += 1;
		//if (num_1[i] == '.') num_1[i] = '0';//把小数点看做数字
	}
	num_1[i ] = '\n';
	i = 0;
	while ((num_2[i] = getchar()) != '\n')
	{
		i += 1;
		//if (num_2[i] == '.') num_2[i] = '0';
	}
	len = len_1(num_1);//获取数组长度
	for (i = 0; i < len - 1; i++)
		if (num_1[i] > 57 || num_1[i] < 48) {
			temp = -1;
			break;//有非数字则为问号 ?
		}
	len = len_1(num_2);
	for (i = 0; i < len - 1; i++)
		if (num_2[i] > 57 || num_2[i] < 48) {
			temp_2 = -1;
			break;//有非数字则为问号 ?
		}
	if (temp != -1)
		temp = tr(num_1);
	if (temp_2 != -1)
		temp_2 = tr(num_2);
	if (temp == -1 && temp_2 != -1) {
		cout << " ? " << " + " << temp_2 << " = " << " ? " << endl;
	}
	else if (temp != -1 &&temp_2 == -1) {
		//a = 63;
		cout << temp <<  " + " << " ? " << " = " << " ? " << endl;
	}
	else if (temp == -1 && temp_2 == -1) {
		//a = 63;
		cout << " ? " <<  " + " << " ? " << " = " << " ? " << endl;
	}
	else {
		a = temp + temp_2;
		cout << temp << " + " << temp_2 << " = " << a << endl;
	}
	return 0;
}

int len_1(char *a) {//获取数组长度
	int i=0;
	while (a[i]!='\n'){
		i += 1;
	}
	return i;
}

//纯数组成的字符串转为int整型
int tr(char* a) {
	int len, i, sum = 0;
	len = len_1(a);
	for (i = 0; i < len; i++) {
		a[i] = (int)a[i];
		sum += (a[i] - 48) * pow(10, len - i-1);
	}
	//for (i = 0; i < len; i++) cout << a[i];
	return sum;
}
//int main() {
//	char A[10] = { '1','9','8','9','7','\n' };
//	int len_1, sum;
//	sum = tr(A);
//	cout << sum << endl;
//	return 0;
//}
//while (1) {		
	//	while ((temp = getchar()) != '\0') {
	//		if (temp >= 57 || temp <= 48)
	//			num_1 = '?';
	//	}
	//	while ((temp_2 = getchar()) != '\0') {
	//		if (temp_2 >= 57 || temp_2 <= 48)
	//			num_2 = '?';
	//	}
	//	if (num_1 == '?' || num_2 == '?') a = '?';
	//	cout << num_1 << '+' << num_2 << '=' << a << endl;
	//}
	//cin >> num_1 >> num_2;


