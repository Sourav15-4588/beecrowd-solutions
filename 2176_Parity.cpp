#include<bits/stdc++.h>
#include<string.h>

using namespace std;
#define endl '\n'

int main()
{
    string num;
    getline(cin,num);

    int l=num.length();
    int count=0;

    for(int i=0; i<l; i++)
    {
        if(num[i]=='1')
          count++;
    }

    if(count%2!=0)
       num=num+'1';
    else num=num+'0';

    cout<<num<<endl;  
    return 0;
}
