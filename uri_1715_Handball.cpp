#include<bits/stdc++.h>

using namespace std;
#define endl '\n'

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	int n, m;
	cin>>n>>m;
	
	int x[n][m];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cin>>x[i][j];
		}
	}
	
	int count = 0;
	int flag=0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(x[i][j]==0) 
			{
				flag=0;
				break;
			}
		
			else flag=1;
		}
		
		if(flag==1)
		count++;
	}
	cout<<count<<endl;
	
	return 0;
}