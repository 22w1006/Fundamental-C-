#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int max=0,min=0;
	float n = 0;
	cin >> n;
	if ((n!=2) && ((n/2)==(((int) n)/2)))
	{
		min = ceil(((float) n)/4);
		max = n/2;
		printf("%d %d",min,max);
	}
	else if (n==2) printf("1 1"); 
	else printf("0 0");
	return 0;		
 } 
