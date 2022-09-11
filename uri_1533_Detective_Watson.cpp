#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(1)
    {
        cin>>n;
        if(n==0) break;
        int ar[n];
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
        }
        int max=0, max2=0, po, po2;
        for(int i=0; i<n; i++)
        {
            if(ar[i]>max)
               max=ar[i];
        }   
        for(int i=0; i<n; i++)
        {
            if(ar[i]>max2 && ar[i]!=max)
            {
                max2=ar[i];
                po=i+1;
            }
        }
        cout<<po<<endl;
    }
    return 0;
}