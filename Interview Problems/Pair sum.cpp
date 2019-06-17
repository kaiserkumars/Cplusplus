#include <bits/stdc++.h>
using namespace std;
//  The Two­Sum Problem : Check if sum of any pair of elements of an ---
// --- array equals to the given sum

// Hashing used
int main() {
	// your code goes here
	int n,s;
	cin>>s;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	unordered_map<int,int> umap;
	for(int i=0;i<n;i++)
	umap[arr[i]]=i;
	int count=0;
	for(int i=0;i<n;i++)
	{
		auto it = umap.find(s-arr[i]);
		if(it!=umap.end()&&it->second>i)
		count++; 
	}
	cout<<count<<"\n";
	return 0;
}