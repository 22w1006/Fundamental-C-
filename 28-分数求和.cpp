#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int A,B; /*分子 分母*/ 

int f(int A,int B) /*约分（一次）*/
{
	if(B == 1) return 0; /*0是整除情况*/ 
	else if(A == 1) return 2;
	int min = A>B ? A : B;
	int flag = 0;
	for(int i = 2;i <= min;i++)
	{
		if ((A%i == 0)&&(B%i == 0))
		{
			flag = 1;
			A = A/i;
			B = B/i;
			break;
		}
	}
	if(flag ==0) return 2; /*2是无法约分的情况*/ 
	else return 1;
}

int main()
{
	int k;
	cin >> k;
	for(int i = 0;i < k;i++)
	{
		char alist[3];
		int a,b;
		cin >> alist;
		a = (int)(atof(alist));
		b = (int)(atof(alist));
		A = A*b + a*B;
		B = b*B;
	}
	while (f(A,B) != 2)
	{
		if (f(A,B) == 0) 
		{
			cout << A << endl;
			break;
		}
		else if (f(A,B) == 1) cout<<A<<B;continue;
	}
	if (f(A,B) == 2) printf("%d/%d",A,B);
	return 0;
}
