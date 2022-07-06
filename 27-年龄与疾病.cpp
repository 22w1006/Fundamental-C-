#include<iostream>
#include<stdio.h>
using namespace std;
double sum,a1,a2,a3,a4,n = 0;

void add()
{
	cin >> n;
	if((n >= 1)&&(n <= 18)) a1++;
	else if((n >= 19)&&(n <= 35)) a2++;
	else if((n >= 35)&&(n <= 60)) a3++;
	else if(n > 60) a4++;
}

int main()
{
	cin >> sum;
	for(int i = 0;i < sum;i++) add(); 
	double w1,w2,w3,w4;
	w1 = a1*100/sum;
	w2 = a2*100/sum;
	w3 = a3*100/sum;
	w4 = a4*100/sum;
	printf("1-18: %.2f%\n",w1);
	printf("19-35: %.2f%\n",w2);
	printf("36-60: %.2f%\n",w3);
	printf("Over60: %.2f%\n",w4);
	
}
