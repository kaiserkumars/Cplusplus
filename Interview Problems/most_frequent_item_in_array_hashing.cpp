#include <bits/stdc++.h>
using namespace std;
//most freuqent item in an array

int freq_item(int arr[],int n)
{
	unordered_map<int,int> intumap;
	
	for(int i=0;i<n;i++)
	{
		if(intumap.find(arr[i])==intumap.end())
		{
			intumap[arr[i]]=1;
		}
		
		else
		intumap[arr[i]]++;
	}
	
	for(auto it=intumap.begin();it!=intumap.end();it++)
	{
		cout<<it->first<<"=>"<<it->second<<"\n";
	}
	
	auto it = intumap.begin();
	int maxcount = it->second;
	int maxelement=it->first;
	for(it;it!=intumap.end();it++)
	{
		if(it->second>=maxcount)
		{
			maxelement=it->first;
			maxcount=it->second;
		}
	}
	
	return maxcount;
}

int main() {
	int arr[6]={1,3,1,3,2,1};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<freq_item(arr,n);
	return 0;
}