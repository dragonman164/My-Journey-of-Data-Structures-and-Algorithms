#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,ans=0;
    vector <int> a;
    cout<<"Number of inputs:";
    cin>>n;
    cout<<"\ninitiate input: ";
        for(int i=0;i<n;i++)
        {
            cin>>x;
            a.push_back(x);    
        }
    
    for(int i=2;i<n;i++)
    {
        if(a[i]-a[i+2]>=0 || a[i]-a[i+2]<=0 && a[i]> a[i+1])
        {
           ans=ans + a[i]-a[i+2]-a[i+1];
        }
        
        if(a[i]-a[i-2]>=0 || a[i]-a[i-2]<=0 && a[i]> a[i-1])
        {
           ans=ans + a[i]-a[i-2]-a[i-1];
        }
    }

    cout<<"Miinimum cost is:"<<ans;
    
    return 0;    
}