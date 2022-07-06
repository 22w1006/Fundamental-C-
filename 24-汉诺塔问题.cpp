#include<iostream>
using namespace std;

void move(int n,char x, char y,char z)
{
	if (n == 1)
		cout << "把一个盘子从" << x << "移动到" << z << endl; 
	else 
	{
		move(n-1,x,z,y);
		cout << "把一个盘子从" << x << "移动到" << z << endl; 
		move(n-1,y,x,z);
	}
}

int main() 
{
	cout << "请输入盘子的个数：";
	int n;
	cin >> n;
	cout << "在根柱子上移动" << n << "只盘子的步骤为：" <<endl; 
	move(n,'A','B','C');
	cout << "完成啦qwq" << endl;
	return 0;
}
