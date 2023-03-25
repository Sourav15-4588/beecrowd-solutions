#include<bits/stdc++.h>
using namespace std;               // Accepted uri_1980_Shuffling

long long fact(int n)
{
    if(n==0) return 0;
    else if(n==1) return 1;
    else return n*fact(n-1);
}

int main()
{
    string s;
    while(cin>>s)
    {
        if(s[0]=='0') break;
        long long l=s.length();
        cout<<fact(l)<<endl;
    }
    return 0;
}