#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int N;

string DayOfWeek(int n) /*计算周几*/ 
{
	int rest = n%7;
	string a;
	switch(rest)
	{
		case 0:a ="Saturday";break;
		case 1:a ="Sunday";break;
		case 2:a ="Monday";break;
		case 3:a ="Tuesday";break;
		case 4:a ="Wednesday";break;
		case 5:a ="Thursday";break;
		case 6:a ="Friday";break;
	}
	return a;
}

bool f(int n) /*判断闰年*/
{
	if (n%4 == 0)
	{
		if (n%100 == 0)
		{
			if (n%400 == 0)
				return true;
			else
				return false;
		}
		else
			return true;
	}
	else 
		return false;
 } 

int Year(int n) /*计算年份*/
{
	int i = 366;
	int year = 2000;
	while(n >= i)
	{
		n = n-i;
		year++;
		if(f(year))
			i = 366;
		else
			i = 365;
	}
	return year;
 } 

int Month(int n )
{
	N = n;
	int sum_Month = 1;
	int flag = 0;
	while(flag == 0)
	{
		switch(sum_Month%12)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 0:
			{
				if(N >= 31)
				{
					N = N-31;
					sum_Month++;
				}
				else
					flag = 1;
				break;	
			}
			case 4:
			case 6:
			case 9:
			case 11:
			{
				if(N >= 30)
				{
					n = n-30;
					sum_Month++;
				}
				else
					flag = 1;
				break;	
			}
			case 2:
			{
				if(f(N))
				{
					if(N >= 29)
					{
						N = N-29;
						sum_Month++;
					}
					else
						flag = 1;
					break;
				}
				else
				{
					if(N >= 28)
					{
						N = N-28;
						sum_Month++;
					}
					else
						flag = 1;
					break;	
				}
			}
		}
	}
	int rest = sum_Month%12;
	if (rest == 0)
		return 12;
	else 
		return rest;
}
 
int main()
{
	cout << "请输入从2000年1月1日起过去的天数：";
	int n;
	cin >> n;
	while(n != -1)
	{
		
		cout << Year(n) << "-" << setw(2) << setfill('0') << Month(n) << '-';
		cout << setw(2) << setfill('0') << 1+N << ' ' << DayOfWeek(n) << endl;
		cin >> n;
	}
	return 0;
} 
