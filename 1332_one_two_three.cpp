#include<bits/stdc++.h>

using namespace std;   // . . . Solved :)

int main()
{
     int n;
     cin>>n;
     char num[10];
     while(n--)
     {
        getchar();
        cin.get(num,10);
        int l= strlen(num);
        if(l==5)
          cout<<3<<endl;
        else if(num[0]=='t' && num[1]=='w' || num[0]=='t' && num[2]=='o' || num[1]=='w' && num[2]=='o')
          cout<<2<<endl;
        else cout<<1<<endl;
     }
    return 0;
}
