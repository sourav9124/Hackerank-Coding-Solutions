#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int  w,b,bc,wc,z,t;
    long long total =0;

    cin>>t;

    while(t--)
    {
        cin>>b>>w;
        cin>>bc>>wc>>z;

        
         if(wc+z<bc)
        {
            z=wc+z;
            total=(z*b)+(wc*w);
            cout<<total<<endl;
        }
        else if(bc+z<wc)
        {
            z=bc+z;
            total=(w*z)+(bc*b);
            cout<<total<<endl;
        }
        else
        {
            total=(b*bc)+(w*wc);
            cout<<total<<endl;
        }
    }
}

