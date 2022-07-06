#include<iostream>
using namespace std;
int main()
{
	double a,b;
	char o;
	cin >> a >> o >> b;
	if (((a < 1)&&(a > -1))&&((b < 1)&&(b > -1)))
		cout << "yes" << endl;
	else if ((a > 1)||(a < -1)||(b > 1)||(b < -1))
		cout << "no" << endl;
	return 0;
}
