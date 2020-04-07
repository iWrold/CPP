#include<bits/stdc++.h>
using namespace std;
int qianqvhouji() {//前驱后继字符
	char A, B;
	int temp;
	cin >> A >> B;
	cout << char(A) << ":" << "qianqu:" << char(A - 1) << "houji:" << char(A + 1) << endl;
	cout << char(B) << ":" << "qianqu:" << char(B - 1) << "houji:" << char(B + 1) << endl;
	return 0;
}

void daxiaoxie() {//小写变大写
	char A;
	cin >> A;
	cout << char(A - 32) << "\n";
}

//行礼托运价格
//某车站行李托运收费标准是：10公斤或10公斤以下，收费2.5元；
//超过10公斤的行李，按每超过1公斤增加1.5元进行收费。
//试编一程序，输入行李的重量，算出托运费。
void tuoyun() {
	int weigth;
	float price;
	cin >> weigth;
	if (weigth <= 10) price = 2.5;
	else price = 2.5 + (weigth - 10) * 1.5;
	cout << fixed << setprecision(2) << price << endl;
}

//两数差
//输入一个四位数，输出倒序后的新数与原数的差值（结果要求为正数）。
void liangshucha() {
	int num, a, b, c, d, num_new;
	cin >> num;
	a = num / 1000; num -= a * 1000;
	b = num / 100; num -= b * 100;
	c = num / 10; num -= c * 10;
	d = num;
	num = a * 1000 + b * 100 + c * 10 + d;
	num_new = d * 1000 + c * 100 + b * 10 + a;
	//cout << num << "\t" << num_now << "\n" << endl;
	cout << num_new << "-" << num << "=" << (num_new - num) << endl;
}


//任意三位数打乱次序后的最大值
//任意输入一个三位整数，再把它的各位次序打乱重新组合一个新的三位整数，使其值最大。
void MixMax() {
	int num, a, b, c, num_new;
	int maxNum, minNum, midNum;
	cin >> num;
	a = num / 100; num -= a * 100;
	b = num / 10; num -= b * 10;
	c = num;
	maxNum = max(a, max(b, c));
	minNum = min(a, min(b, c));
	midNum = a + b + c - maxNum - minNum;
	cout << (maxNum * 100 + midNum * 10 + minNum) << endl;
}
int main() {
	//qianqvhouji();
	//daxiaoxie();
	//tuoyun();
	//liangshucha();
	MixMax();
	return 0;
}