#include<iostream>
using namespace std;

void move(int n,char x, char y,char z)
{
	if (n == 1)
		cout << "��һ�����Ӵ�" << x << "�ƶ���" << z << endl; 
	else 
	{
		move(n-1,x,z,y);
		cout << "��һ�����Ӵ�" << x << "�ƶ���" << z << endl; 
		move(n-1,y,x,z);
	}
}

int main() 
{
	cout << "���������ӵĸ�����";
	int n;
	cin >> n;
	cout << "�ڸ��������ƶ�" << n << "ֻ���ӵĲ���Ϊ��" <<endl; 
	move(n,'A','B','C');
	cout << "�����qwq" << endl;
	return 0;
}
