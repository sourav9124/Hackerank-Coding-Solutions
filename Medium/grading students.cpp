#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int grade[100];
    
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>grade[i];
    }
    
    for(int i=0;i<n;i++)
    {
        if(grade[i]>=38)
        {
            
        
         if((((grade[i]/5+1)*5)-grade[i])<3)
        {
            grade[i]=(grade[i]/5+1)*5;
            
        }
    }
        
    }
    for(int i=0;i<n;i++)
    {
        cout<<grade[i]<<endl;
    }

}

