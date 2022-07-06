#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int alist[100];
	for(int i = 0;i < n;i++) cin>>alist[i];
	for(int i = 0;i < n-1;i++)
		cout<<alist[n-i-1]<<' ';
	cout<<alist[0];
	return 0;
}
