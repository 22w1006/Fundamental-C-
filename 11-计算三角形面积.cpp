#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	double n,a,b,c,p,S;
	cin >> n;
	for(int i = 0;i < n;i++)
	{
		cin >> a >> b >> c;
		p = (a + b + c)/2.0;
		S = sqrt(p*(p-a)*(p-b)*(p-c));
		cout << fixed << setprecision(2) << S << endl;
	} 
	getchar();
	return 0;
 } 
