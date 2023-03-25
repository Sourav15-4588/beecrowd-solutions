#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()  // Solved 
{
    int n;
    string d;
    cin>>n;
    cin.ignore();
    while(n--)
    {
        getline(cin, d);
        int d1=0, d2=0;
        int l=d.length();
        for(int i=0; i<=l; i++)
        {
            if(d[i]=='<') d1++;
            if(d[i]=='>') 
            {
                if(d1>0) d2++, d1--;
            }

        }
        cout<<d2<<endl;
    }

    return 0;
}