#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int terms;
	while(n--)
	{
		int sum=0;
		cin>>terms;
		for(int i=1; i<=terms; i++)
		{
			if(i%2==0)
			sum-=1;
			else
			sum+=1;
		}
		cout<<sum<<endl;
	}
	
	return 0;
}