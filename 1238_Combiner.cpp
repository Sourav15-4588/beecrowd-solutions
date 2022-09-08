#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int fun(int x, int y)
{
	return (x+y+(abs(x-y)))/2;
}

int main()
{
	int n;
	char a[51], b[51];
	cin>>n;
	while(n--)
	{
		getchar();
		cin>>a>>b;
		int la=strlen(a);
		int lb=strlen(b);
		int j=fun(la, lb);
		for(int i=0; i<j; i++)
		{
			if(i<la) cout<<a[i];
			if(i<lb) cout<<b[i];
		}
		cout<<endl;
	}
	
	return 0;	
}
