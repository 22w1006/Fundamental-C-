#include<iostream>
using namespace std;
int main()
{
	char sl[100];
	while (cin.getline(sl,100))
	{
		for (int i = 0 ; sl[i]!='\0'; i++)
		{
			if(sl[i] == ' ') sl[i] = ' ';
			else if(sl[i] == 'z') sl[i] = 'a';
			else if(sl[i] == 'Z') sl[i] = 'A';
			else sl[i] = sl[i]+1;
		}
		cout<<sl<<endl;
		sl[100] = {0};
	}
	return 0;
 }
