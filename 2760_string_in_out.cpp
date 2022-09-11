#include<bits/stdc++.h>
#include<string.h>

using namespace std;    // . . . Solved  :)

int main()
{
    char a[101], b[101], c[101];
    cin.get(a, 100);
    getchar();
    cin.get(b, 100);
    getchar();
    cin.get(c, 100);

    int la=strlen(a);
    int lb=strlen(b);
    int lc=strlen(c);

    cout<<a<<b<<c<<endl;
    cout<<b<<c<<a<<endl;
    cout<<c<<a<<b<<endl;
    if(la>=10)
    {
        for(int i=0; i<10; i++)
           cout<<a[i];
    }
    else cout<<a;

   if(lb>=10)
    {
        for(int i=0; i<10; i++)
           cout<<b[i];
    }
    else cout<<b;

    if(lc>=10)
        {
            for(int i=0; i<10; i++)
            cout<<c[i];
        }
        else cout<<c;
    cout<<endl;
    return 0;
}
