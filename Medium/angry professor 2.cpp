// Author: Sourabh
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
    int n, k;
    cin >> n >> k;
    int ans =0;

    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
    
        if(x<=0)    
            ans++;
    }    

    (ans>=k) ? cout<<"NO" : cout<<"YES";
    cout<<endl;
}
return 0;
}
