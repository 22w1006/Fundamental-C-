#include <iostream>
using namespace std;
int main()
{
	int point;
	cin>>point;
	if ((point<=100)&&(point>=90))
	cout<<'A';
	else if ((point<90)&&(point>=80))
	cout<<'B';
	else if ((point<80)&&(point>=70))
	cout<<'C';
	else if ((point<70)&&(point>=60))
	cout<<'D';
	else cout<<'E';
	return 0;
}
