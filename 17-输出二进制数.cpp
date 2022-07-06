#include<iostream>
using namespace std;

void f(int n)
{
	int step = 0; 
	if (n == 0)
	{
		cout << 0;
	}
	else if (n == 1)
	{
		cout << 1;
	} 
	else 
	{
		f(n/2); 
		cout << n%2;
	} 
}


int main() 
{
	int n;
	cin >> n;
	f(n);
	return 0;
}
