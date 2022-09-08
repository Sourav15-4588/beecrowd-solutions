#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    string text;
    while(getline(cin, text))
    {
        int l=text.length();
        int ig, flag;

        for(int i=0; i<l; i++)
        {
            if((text[i]==' ' && text[i+1]=='.') || (text[i]==' ' && text[i+1]==','))
                continue;
                cout<<text[i]; 
        }
        
        cout<<endl;

    }

    return 0;
}
