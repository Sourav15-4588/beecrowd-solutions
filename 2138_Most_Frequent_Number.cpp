#include<bits/stdc++.h>
#include<string.h>

using namespace std;    // . . . Solved . . :)
#define endl '\n'

int main()
{
    string n;
    while(cin>>n)
    {
        int ar[10];
        for(int i=0; i<=10; i++)
         ar[i]=0;

        int l=n.length();
        int N=0;

        for(int i=0; i<l; i++)
        {
            if(n[i]=='0')
              ar[0]++;
            else if(n[i]=='1')
              ar[1]++;
            else if(n[i]=='2')
              ar[2]++; 
            else if(n[i]=='3')
              ar[3]++;
            else if(n[i]=='4')
              ar[4]++;
            else if(n[i]=='5')
              ar[5]++;
            else if(n[i]=='6')
              ar[6]++;
            else if(n[i]=='7')
              ar[7]++;
            else if(n[i]=='8')
              ar[8]++; 
            else if(n[i]=='9')
              ar[9]++;      
        }

        int a=ar[0], p=0;
        for(int i=1; i<10; i++)
        {
            if(ar[i]>=a)
            {
              a=ar[i];
              p=i;
            }
        }
        cout<<p<<endl;
    }
    return 0;
}
