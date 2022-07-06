#include<iostream>
using namespace std;
int main()
{
	int au = 0;
	int ag = 0;
	int cu = 0;
	int sum,n;
	cin >> n;
	for(int i = 0;i < n;i++)
	{
		int alist[3];
		for(int j = 0;j < 3;j++) cin >> alist[j];
		au = au + alist[0];
		ag = ag + alist[1];
		cu = cu + alist[2];
	}
	sum = au + ag + cu;
	cout << au << ' ' << ag << ' ' << cu << ' ' << sum << endl;
	return 0;
}
