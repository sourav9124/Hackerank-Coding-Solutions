#include<iostream>
#include<algorithm>
using namespace std;
int main()

{
	int t;
	cin>>t;
	int n,k;
	int count=0;
    
	if(t<=10){
		
	
	while(t--)
	{
		 cin>>n>>k;
		 if(n<=1000 && k<=n)
		 {
		 	
		 
	
		 int ar[n];
		 
		 
		 for(int i=0;i<n;i++)
		 {
		 		cin>>ar[i];
		 		if(ar[i]>=-100 && ar[i]<=100)
		 		{
		 			
				 
      		if(ar[i]<0)
		 	{
		 		count++;
			 }
		}
		 }
		 
		
		 if(count>k)
		 {
		 	cout<<"NO"<<endl;
		 }
		 else
		 {
		 	cout<<"YES"<<endl;
		 }
		 
	}
}
}
}
