#include <bits/stdc++.h>
using namespace std;
//O(n)

void common_elements(int a[],int b[],int m, int n)
{
	int t;
	t = m>=n?m:n;
	
	unordered_set<int> uset;
	int maparr[t];
	unordered_set<int> carray;
	if(m>=n)
	{
		
		for(int i=0;i<t;i++)
		{
			uset.insert(a[i]);
		}
		
		for(int i=0;i<n;i++)
		{
			if(uset.find(b[i])!=uset.end())
				carray.insert(b[i]);
		}
	}
	else 
	{
		
		for(int i=0;i<t;i++)
		{
			uset.insert(b[i]);
		}
		
		for(int i=0;i<m;i++)
		{
			if(uset.find(a[i])!=uset.end())
				carray.insert(a[i]);
		}
		
	}
	
	
	for(auto it=carray.begin();it!=carray.end();it++)
	cout<<*it<<" ";
	
	
	
}

int main() {
	// your code goes here
	int a1[] = {1,2,3,4,5,6};
	int a2[] = {1,3,6,8,9,12,54,4};
	
	int m = sizeof(a1)/sizeof(a1[0]);
	int n = sizeof(a2)/sizeof(a2[0]);
	
	common_elements(a1,a2,m,n);
	return 0;
}