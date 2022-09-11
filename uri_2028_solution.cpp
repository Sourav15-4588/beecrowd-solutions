#include<bits/stdc++.h>

using namespace std;

int main()
{
	int num, count=1;
	while(cin>>num)
	{
		int sum=1;
		for(int i=1; i<=num; i++)
		{
			sum=sum+i;
		}
		
		int num_cnt=sum;
		if(num==0)
		cout<<"Caso "<<count<<": "<<num_cnt<<" numero"<<endl;
		else
		cout<<"Caso "<<count<<": "<<num_cnt<<" numeros"<<endl;
		
		cout<<0;
		if(num==0)
		cout<<endl;
		else
		cout<<" ";
		for(int i=1; i<=num; i++)
		{
			for(int j=1; j<=i; j++)
			{
				cout<<i;
				if(j==num)
				cout<<endl;
				else
				cout<<" ";
			}
		}
		count++;
		cout<<endl;
	}
	
	return 0;
}