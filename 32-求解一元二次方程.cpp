#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		double a=0,b=0,c=0,x1=0,x2=0,delta=0;
		cin >> a >> b >> c;
		delta = b*b-4*a*c;
		if (delta>0)
		{
			x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
			x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
			printf("x1=%.5f;x2=%.5f\n",x1,x2);
		}
		else if (delta==0)
		{
			x1 = x2 = (-b + sqrt(b*b-4*a*c))/(2*a);
			printf("x1=x2=%.5f\n",x1);
		}
		else
		{
			double l=0,j=0;
			l = -b/(2*a);
			j = sqrt(-delta)/(2*a);
			printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",l,j,l,j);
		}
	}
	return 0;
}
