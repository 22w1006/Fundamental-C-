#include<iostream>
#include<stdlib.h>
using namespace std;

double notation()
{
	char alist[1];
	cin >> alist;
	switch(alist[0])
	{
		case '+':
			return notation() + notation();
		case '-':
			return notation() - notation();
		case '*':
			return notation() * notation();
		case '/':
			return notation() / notation();
		default: 
			return atof(alist);
	}	
}


int main()
{
	cout << notation();
	return 0;
}
