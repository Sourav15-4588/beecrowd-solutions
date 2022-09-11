#include<bits/stdc++.h>
#include<math.h>

using namespace std;   // solved. . .

int main()
{
    int n;
    while(cin>>n && n)
    {
        long long int ar[n][n];
        int space;

        if(n%2==0)
          space=n/2;
        else space=(n/2)+1;
        
        int space2=space+1;  

        for(int i=0; i<n; i++)   // storing the required values
        {
            int l=i;
            for(int j=0; j<n; j++)
            {
                ar[i][j]=pow(2,l);
                l++;
            }
        }

        for(int i=0; i<n; i++)   // for output
        {
            for(int j=0; j<n; j++)
            {
                if(n<=5){
                if(j==0)
                    cout<<setw(space)<<right<<ar[i][j];
                else
                    cout<<setw(space2)<<right<<ar[i][j];
                }
                else if(n==6 || n==7)
                {
                    if(j==0)
                    cout<<setw(4)<<right<<ar[i][j];
                else
                    cout<<setw(5)<<right<<ar[i][j];
                }
                else if(n==8 || n==9)
                {
                    if(j==0)
                    cout<<setw(5)<<right<<ar[i][j];
                else
                    cout<<setw(6)<<right<<ar[i][j];
                }
                else if(n==10)
                {
                    if(j==0)
                    cout<<setw(6)<<right<<ar[i][j];
                else
                    cout<<setw(7)<<right<<ar[i][j];
                }
                else if(n==11 || n==12)
                {
                    if(j==0)
                    cout<<setw(7)<<right<<ar[i][j];
                else
                    cout<<setw(8)<<right<<ar[i][j];
                }
                else if(n==13 || n==14)
                {
                    if(j==0)
                    cout<<setw(8)<<right<<ar[i][j];
                else
                    cout<<setw(9)<<right<<ar[i][j];
                }
                else if(n==15)
                {
                    if(j==0)
                    cout<<setw(9)<<right<<ar[i][j];
                else
                    cout<<setw(10)<<right<<ar[i][j];
                }
            } 
            cout<<endl;    
        }
        cout<<endl;
    }

    return 0;
}