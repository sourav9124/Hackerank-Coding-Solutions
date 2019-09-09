#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int d,m;
    
    int ar[n];
    int sum=0;
    int counter=0;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    cin>>d>>m;
    if(d<32 && m<13 && n<=100)
    {
        

    
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            sum=ar[i]+ar[j];
            if(sum==d)
            {
                counter++;
               // i+=1;
            }
        }
    }
}
    cout<<counter;
}

