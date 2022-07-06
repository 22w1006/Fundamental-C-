#include<iostream>
using namespace std;
int main()
{
	int k;
	int a1,a5,a10 = 0;
	cin >> k;
	int alist[k];
	for(int i = 0;i < k;i++) cin >> alist[i];
	for(int i = 0;i < k;i++)
	{
		switch(alist[i])
		{
			case 1: a1++;break;
			case 5: a5++;break; 
			case 10: a10++;break;
		}
	}
	cout << a1 << endl;
	cout << a5 << endl;
	cout << a10 << endl;
	return 0;
}
