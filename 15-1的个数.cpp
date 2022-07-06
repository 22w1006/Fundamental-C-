#include<iostream>
using namespace std;
int main()
{
	int n,s;
	cin >> n;
	int num = 0,j = 10;
	for(int i = 1;i <= n;i++)
	{
		s = i;
		while(s >= 10)
		{
			if(s%10 == 1) num++;
			s = s/10;
		}
		if (s == 1) num++;
	}
	cout <<"Number of one in "<< n << " is " << num << "." << endl;
	return 0;
}
