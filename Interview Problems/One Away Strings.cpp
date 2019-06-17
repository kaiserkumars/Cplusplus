#include <bits/stdc++.h>
using namespace std;
//input string a in map and record the count of each character, now input string b and decrease the count of the
//characters. Putting some conditions on the remaining value we can know whether strings are 
//one away or not.

int main() {
	// your code goes here
	string a,b;
	cin>>a>>b;
	if(a.length()!=b.length()&&(a.length()+1!=b.length()&&a.length()!=b.length()+1))
	{cout<<"false";return 0;}
	//int ct=0;
	map<char,int> mp;
	
	for(int i=0;i<a.length();i++)
	{
		if(mp.find(a[i])==mp.end())
		mp[a[i]]=1;
		else
		mp[a[i]]++;
	}
	
	for(int i=0;i<b.length();i++)
	{
		if(mp.find(b[i])==mp.end())
		mp[b[i]]=1;
		else
		mp[b[i]]--;
	}
	int ct=0;
	for(auto it=mp.begin();it!=mp.end();it++)
	{
		if(it->second>1)
		{cout<<"falkse";return 0;}
		else if(it->second==1)
		ct++;
		if(ct>2)
		{cout<<"falkse";return 0;}
		
	}
	
	cout<<"true";
	return 0;
}