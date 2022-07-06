#include<iostream>
using namespace std;
int main()
{
	//ASCII 65-90 97-122
	char alist[200];
	cin.getline(alist,200);
	int num = 0;
	for(int i = 0;alist[i] != 0;i++)
	{
		if ((i > 0)&&(((alist[i] > 90)&&(alist[i] < 97))||(alist[i] > 122)||(alist[i]< 65))&&
		(((alist[i-1] <= 90)&&(alist[i-1] >= 65))||((alist[i-1] <= 122)&&(alist[i-1] >= 97))))
			num++;
	}
	cout<<num<<endl;
	return 0;
}
