#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin>>n && n)
    {
       int arr[n][n];
       int hn=n/2;
       if(n%2==1) hn+=1;
       int a=0, b=n-1;
        for(int l=1; l<=hn; l++)
        {
                 
            for(int i=a; i<=b; i++)
            {
                for(int j=a; j<=b; j++)
                    arr[i][j]=l;
            } 
            a++;
            b--;
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(j==0) cout<<setw(3)<<right<<arr[i][j];
                else cout<<setw(4)<<right<<arr[i][j];
            }  
              cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}