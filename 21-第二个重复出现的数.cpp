#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for(int i = 0;i < n;i++)
	{
		int k;
		cin >> k;
		int alist[500];
		for(int z = 0;z < k;z++) alist[z] = 0;
		char olist[500]; 
		int flag = 0;
		for(int x = 0;x < k;x++)
		{
			int t;
			cin >> t;
			if(flag == 2) continue;
			for(int y = 0;y < k;y++)
			{
				if(t == alist[y])
				{
					flag++;
					if(flag == 2) cout << t << endl;break;
				}
			}
			alist[x] = t;
		}
		if(flag != 2) cout << "NOT EXIST" << endl;
	}
	return 0; 
}
