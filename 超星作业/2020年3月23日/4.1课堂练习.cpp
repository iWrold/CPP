#include<bits/stdc++.h>
using namespace std;
int qianqvhouji() {//ǰ������ַ�
	char A, B;
	int temp;
	cin >> A >> B;
	cout << char(A) << ":" << "qianqu:" << char(A - 1) << "houji:" << char(A + 1) << endl;
	cout << char(B) << ":" << "qianqu:" << char(B - 1) << "houji:" << char(B + 1) << endl;
	return 0;
}

void daxiaoxie() {//Сд���д
	char A;
	cin >> A;
	cout << char(A - 32) << "\n";
}

//�������˼۸�
//ĳ��վ���������շѱ�׼�ǣ�10�����10�������£��շ�2.5Ԫ��
//����10����������ÿ����1��������1.5Ԫ�����շѡ�
//�Ա�һ�������������������������˷ѡ�
void tuoyun() {
	int weigth;
	float price;
	cin >> weigth;
	if (weigth <= 10) price = 2.5;
	else price = 2.5 + (weigth - 10) * 1.5;
	cout << fixed << setprecision(2) << price << endl;
}

//������
//����һ����λ�������������������ԭ���Ĳ�ֵ�����Ҫ��Ϊ��������
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


//������λ�����Ҵ��������ֵ
//��������һ����λ�������ٰ����ĸ�λ��������������һ���µ���λ������ʹ��ֵ���
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