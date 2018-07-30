#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	unordered_map<char,int> charmap;
	string s;
	cin>>s;
	// vector<char> strvec;
	for(int i=0;i<s.length();i++)
	{
		// if(strset.find(s[i])==strset.end())
		// {strvec.push_back(s[i]);strset.insert(s[i]);}
		if(charmap.find(s[i])==charmap.end())
		{charmap[s[i]]=1;}
		else
		charmap[s[i]]++;
	}
	
	
	for(auto it=charmap.begin();it!=charmap.end();it++)
	{
		if(it->second==1&&it->first==s[0])
		{cout<<it->first;break;}
	}
	// auto it = strvec.begin();
	// cout<<*it;
	return 0;
}