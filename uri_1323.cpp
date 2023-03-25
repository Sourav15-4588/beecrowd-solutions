#include<bits/stdc++.h>
using namespace std;

int fun(int a)        //  Solved uri_1323
{
    if(a==1) return 1;
    else return a*a + fun(a-1);
}

int main()
{
    int n;
    while(cin>>n and n)
    {
        cout<<fun(n)<<endl;
    }
    return 0;
}