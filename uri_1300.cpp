#include<bits/stdc++.h>
using namespace std;
int main()               // Solved uri_1300
{
    int n;
    while(cin>>n)
    {
        if(n%6==0) cout<<"Y"<<endl;
        else cout<<"N"<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()           // Uri_1532
{
    int n, v;
    while(1)
    {
        cin>>n>>v;
        cout<<n<<" ";
        if(n==0 and v==0) break;
        int j=0, i, f=0;
        for(i=1; i<=n; i+=v)
        {
            if(i==v*v) v-=1;
        }
        if(i==v) cout<<"possivel"<<endl;
        else cout<<"impossivel"<<endl;
    }

    return 0;
}