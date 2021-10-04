#include<bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for (int i=a; i<=b; i++) 
typedef long long LL;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int ans=0;
        int oddCount=0,evenCount=0;
        int smallest=INT_MAX;
        FOR(i,0,n-1)
        {
            cin>>a[i];
            if(a[i]%2==0)   evenCount++;
            else    oddCount++;
        }
        int count;
        int count2;
        int y[n];
        if(oddCount==0)
        {
            for(int i=0;i<n;i++)
            {
                count2=0;
                while(a[i]%2==0)
                {
                    a[i]=a[i]/2;
                    count2++;
                }
                y[i]=count2;
            }
            for(int i=0;i<n;i++)
            {
                if(y[i]<=smallest)
                {
                    smallest=y[i];
                }
            }
            cout<<smallest<<endl;
            
        }
        else{
            cout<<ans<<endl;
        }     
        
        
    }
    return 0;
}
