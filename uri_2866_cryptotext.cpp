#include<bits/stdc++.h>
using namespace std;
int main()             // Solved uri_2866_cryptotext
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;
        cin>>s;
        int l=s.length()-1;
        for(int i=l; i>=0; i--)
        {
            if(s[i]>='a' and s[i]<='z')
                cout<<s[i];
        }
        cout<<endl;
    }

    return 0;
}
