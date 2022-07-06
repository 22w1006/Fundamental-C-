#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	switch(n)
	{
		case 1:
		case 3:
		case 5:
			cout << "NO" << endl;break;
		default:
			cout << "YES" << endl;break;
	}
	return 0;
}
