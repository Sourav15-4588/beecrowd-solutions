#include<bits/stdc++.h>
using namespace std;

int main()           // uri_2556 Accepted
{
    int n;
    while(cin>>n)
    {
        int t=n;
        int ar[t];
        for(int i=0; i<t; i++)
            cin>>ar[i];

        int j;
        for(int k=1; k<n; k++)
        {
            j=k;
            while(j>0 && ar[j]<ar[j-1])
            {
                swap(ar[j], ar[j-1]);
                j--;
            }
        }


        if(n%2==0){
            n=n/2;
            cout<<n<<" ";
            cout<<ar[n] - ar[n-1]<<endl;
        }
        else{
            n=n/2;
            cout<<n+1<<" ";
            cout<<ar[n+1] - ar[n]<<endl;
        }

    }

    return 0;
}