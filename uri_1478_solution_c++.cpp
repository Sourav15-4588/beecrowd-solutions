#include<bits/stdc++.h>

using namespace std;  // . . . solved . . .

int main()
{
    int n;
    while(cin>>n && n)
    {
        int ar[n][n];

        for(int i=0; i<n; i++)   // storing the required values in the arrey
        {
            int l=i+1,m;
            for(m=0; m<=i; m++,l--)
                ar[i][m]=l;

            int p=l+2;

            for(int k=m; k<=n; k++,p++)
                ar[i][k]=p;
        }

        for(int i=0; i<n; i++)   // for output
        {
            for(int j=0; j<n; j++)
            {
                if(j==0)
                    cout<<setw(3)<<right<<ar[i][j];
                else 
                    cout<<setw(4)<<right<<ar[i][j];
            }
            cout<<endl;
        }
        cout<<endl;
    }

    return 0;
}