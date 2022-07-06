#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for(int i = 0;i < n;i++)
	{
		int b,g;
		int time = 1;
		cin >> b >> g;
		if (b > 1000000) b = 1000000;
		while (b>g)
		{
			b = b-g;
			b = b*2; 
			g = g*1.05;
			time++;
			if (b > 1000000) b = 1000000;
		}
		cout << time <<endl;
	}
	return 0; 
}
