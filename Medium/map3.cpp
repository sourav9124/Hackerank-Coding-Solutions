#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

void count_fr(int n)
{
	map<int,int> mp;
	vector<int> v;
	
	while(n!=0)
	{
		int a;
		cin>>a;
		mp[a]++;
		
		n--;
	}
	
	map<int,int>::iterator it;
	
	for(it=mp.begin();it!=mp.end();it++)
	{
	
		cout<<it->first<<" : "<<it->second<<endl;
		
	
		 
    
	}
	
     
	
}
int main()
{
	int n;
	int m;
	cout<<"enter n"<<endl;
	cin>>n;
	//cout<<"enter m"<<endl;
	
	//cin>>m;
	count_fr(n);
	//count_fr(m);
	
	
}

