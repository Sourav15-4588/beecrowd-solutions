#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    int a, b, c;
    while(1)
    {
         cin>>a;
        if(a==0) break;
        cin>>b>>c;
        int i;
        double area=a*b*100.0/c;
        i=sqrt(area);
        cout<<i<<endl;
    }

    return 0;
}
