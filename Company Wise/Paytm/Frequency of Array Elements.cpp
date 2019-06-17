// https://practice.geeksforgeeks.org/problems/frequency-of-array-elements/0
// PAYTM
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> intv(n+1);
		fill(intv.begin(),intv.end(),0);
		unordered_map<int,int> uimap;
		int num;
		for(int i=0;i<n;i++)
		{
			cin>>num;
			if(uimap.find(num)==uimap.end())
			{uimap[num]=1;}
			else
			uimap[num]++;
		}
		
		for(auto it=uimap.begin();it!=uimap.end();it++)
		{
			intv[it->first]=it->second;
		}
		
		for(auto it=intv.begin()+1;it!=intv.end();it++)
		{
			cout<<*it<<" ";
		}
		
		cout<<"\n";
		
	}
	// your code goes here
	return 0;
}