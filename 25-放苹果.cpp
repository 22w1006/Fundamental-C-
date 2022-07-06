#include<iostream>
using namespace std;
int sum = 0;

int f(int m,int n)
{
	if (n > m) n = m;
	if (m == 0) return 1;
	else
		if (n == 1) return 1;
		else return (f(m,n-1) + f(m-n,n));
}

int main() 
{
	cout << "请输入盘子的个数：";
	int n;
	cin >> n;
	cout << "请输入苹果的个数：";
	int m;
	cin >> m;
	if(n > m) n = m;
	cout << f(m,n) << endl;
	return 0;
}
