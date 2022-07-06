#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int h,r,N;
	float V; 
	cin >> h >> r;
	V = 3.14159*r*r*h;
	N = ceil(20000/V);
	cout << N;
}


