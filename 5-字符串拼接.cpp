#include<iostream>
using namespace std;
int main()
{
	char str1[50],str2[50];
	cin.getline(str1,50);
	cin.getline(str2,50);
	int len1,len2;
	for (len1=1;str1[len1]!='\0';len1++);
	for (len2=1;str2[len2]!='\0';len2++);
	if (len1 > len2)
	{
		for(int i=len1;i<(len1+len2);i++)
			str1[i] = str2[(i-len1)];
		str1[(len1+len2)] = '\0';
		cout<<str1;
	}
	else
	{
		for(int i=len2;i<(len1+len2);i++)
			str2[i] = str1[i-len2];
		str2[(len1+len2)] = '\0';
		cout<<str2;
	}
	return 0;
 } 
