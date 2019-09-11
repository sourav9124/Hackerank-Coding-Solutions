#include<bits/stdc++.h>
using namespace std;
int main()
{
    // 1(W) --> 3(S) --> 4(W) --> 8(S) --> 9(W) --> 18(S)......
    int t;
    cin>> t;
    
    while(t--)
    {
        long long int tree = 1;
        int n;
        cin >> n;
        for(int i=1;i<=n;i++)
        {
            (i%2==0)?tree++: tree*=2;
        }
        cout<<tree<<endl;
    }
    return 0;
}

