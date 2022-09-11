#include<bits/stdc++.h>
#include<math.h>
using namespace std;   // . . . solved . . . 

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, num;
        cin>>n>>num;

        int srt[n+1],po, dis=100;

        for(int i=0; i<n; i++)
        {
            cin>>srt[i];

            int s=abs(srt[i]-num);

            if(s<dis)
            {
                dis=s;
                po=i;
            }
        }

        cout<<po+1<<endl;
    }

    return 0;
}
