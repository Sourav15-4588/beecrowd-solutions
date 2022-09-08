#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int space=n/2;
        int line=n/2;
        for(int i=1; i<=n; i+=2)
        {
            for(int j=1; j<=space; j++)
                cout<<" ";
                space--;

            for(int j=1; j<=i; j++)
                cout<<"*";
                cout<<endl;
        }

        for(int i=1; i<=3; i+=2)
        {
            for(int j=1; j<=line; j++)
                cout<<" ";
                line--;

            for(int j=1; j<=i; j++)
                cout<<"*";
                cout<<endl;
        }
        cout<<endl;
    }

    return 0;
}
