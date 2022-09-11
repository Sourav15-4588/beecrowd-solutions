#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    while(cin>>t)
    {
        int n, larg=0;
        for(int i=0; i<t; i++)
        {
            cin>>n;
            if(n>larg)
              larg=n;
        }
        if(larg<10)
        cout<<1<<endl;
        else if(larg>=10 && larg<20)
        cout<<2<<endl;
        else
        cout<<3<<endl;
    }
    return 0;
}
