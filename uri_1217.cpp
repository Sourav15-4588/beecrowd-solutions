#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    float tksum=0, frtsum=0;
    for(int i=0; i<n; i++)
    {
        float tk[n];
        string frt;
        int c=0;
        cin>>tk[i];
        tksum+=tk[i];
        cin.ignore();
        while(1)
        {
            cin>>frt;
            if(frt=="\0") break;
            c++;
            frtsum+=c;
        }
        cout<<"day "<<i+1<<": "<<c<<" kg"<<endl;
    }
    cout<<fixed<<setprecision(2);
    cout<<frtsum/(float)n<<" kg by day"<<endl;
    cout<<"R$ "<<tksum/(float)n<<" by day"<<endl;

    return 0;
}