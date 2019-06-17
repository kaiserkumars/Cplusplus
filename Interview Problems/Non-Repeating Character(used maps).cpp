#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s;
	cin>>s;
	int n=0;
	unordered_map<char,int> umap;
	auto it = s.begin();
	while(it!=s.end())
	{
		if(umap.find(*it)==umap.end())
		umap[*it]=1;
		else
		umap[*it]++;
		it++;
	}
	cout<<"Non Repeating Characters are: ";
	
	for(auto it=umap.begin();it!=umap.end();it++)
	{
		if(it->second==1)
		cout<<it->first<<" ";
	}
	return 0;
}