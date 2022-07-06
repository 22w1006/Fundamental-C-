#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int m,n;
	cin >> m >> n;
	int alist[m];
	double blist[m];
	for(int i = 0;i < m;i++) cin >> alist[i] >> blist[i];
	for(int i = 0;i < m-1;i++) /*冒泡排序（从大到小）*/ 
	{
		for(int ii = 0;ii < m-1;ii++)
		{
			if (blist[ii+1] > blist[ii]) /*交换*/
			{
				double t = blist[ii];
				blist[ii] = blist[ii+1];
				blist[ii+1] = t;
				int T = alist[ii];
				alist[ii] = alist[ii+1];
				alist[ii+1] = T;
			} 
		}
	}
	printf("%d %g",alist[n-1],blist[n-1]);
	return 0; 
}
