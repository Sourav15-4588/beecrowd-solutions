#include<bits/stdc++.h>
#include<string.h>

using namespace std;   // . . . Solved :) 
#define endl '\n'
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        char st[102];
        getchar();
        cin.get(st,101);
        int l = strlen(st);
        int count=0;
        for(int i=0; i<l; i++)
        {
            if(st[i]=='1')
              count+=2;
            else if(st[i]=='2' || st[i]=='3' || st[i]=='5')
              count+=5;
            else if(st[i]=='4')
              count+=4;
            else if(st[i]=='6' || st[i]=='9' || st[i]=='0')
              count+=6;
            else if(st[i]=='7')
              count+=3;
            else if(st[i]=='8')
              count+=7;    
        }
        cout<<count<<" leds"<<endl;
    }
    return 0;
}