#include<bits/stdc++.h>
using namespace std;
int main()       // uri_1961_jumping_frog Solved
{
    int p, n;
    cin>>p>>n;
    int ar[n];
    for(int i=0; i<n; i++) 
        cin>>ar[i];

    bool f=false;
    for(int i=0; i<n-1; i++)
        if(abs(ar[i]-ar[i+1])>p){
        f=true;
        break;
    }

    if(f==true)cout<<"GAME OVER"<<endl;
    else cout<<"YOU WIN"<<endl;

    return 0;
}