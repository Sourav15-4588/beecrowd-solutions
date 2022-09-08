#include<bits/stdc++.h>

using namespace std;
#define endl '\n'
                            // . . . Solved :) 
int main()
{  
    char n;
    string num;
    int ch,l;

    while(1)
    {
        cin>>n>>num;
        ch=0;
        l=num.size();
     if(n=='0' && num[0]=='0') break;
        for(int i=0; i<l; i++)
        {
            if(num[i]=='0')
            {
                if(ch!=0)
                    cout<<num[i];
            }
            else if(num[i]!=n)
            {
                cout<<num[i];
                ch=1;
            }
        }

        if(ch==0)
            cout<<0<<endl;
        else cout<<endl;
    }

    return 0;
}
