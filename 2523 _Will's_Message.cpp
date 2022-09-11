#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main()
{
	string st;
	int n;
	while(cin>>st)
	{
		cin>>n;
		int ar[n];
		for(int i=0; i<n; i++)
		{
			cin>>ar[i];
		}
		int N;
		for(int i=0; i<n; i++)
		{
			N=ar[i];
			cout<<st[N-1];
		}
		cout<<endl;
		getchar();
	}
	
	return 0;
}