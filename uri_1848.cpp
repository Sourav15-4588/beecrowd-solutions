#include<bits/stdc++.h>
using namespace std;
int main()        // Accepted 
{
    int t=3;
    int x=0;
    while(t)
    {
        string s;
        
        getline(cin, s);

        if(s=="---")
                x+=0;
        else if(s=="--*")
                x+=1;
        else if(s=="-*-")
                x+=2;
        else if(s=="-**")
                x+=3;
        else if(s=="*--")
                x+=4;
        else if(s=="*-*")
                x+=5;
        else if(s=="**-")
                x+=6;
        else if(s=="***")
                x+=7;

        if(s=="caw caw") {
            t--;
            cout<<x<<endl;
            x=0;
        }

    }

    return 0; 
}


