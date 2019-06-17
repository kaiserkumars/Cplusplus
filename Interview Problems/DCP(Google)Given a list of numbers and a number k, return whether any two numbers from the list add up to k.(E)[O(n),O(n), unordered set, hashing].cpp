#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,sum;
	unordered_set<int> uset;
	cin>>n>>sum;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	for(int i=0;i<n;i++)
	{
		int temp = sum - arr[i];
		if(temp>=0&&uset.find(temp)!=uset.end())
			cout<<"Found\n";
		uset.insert(arr[i]);
	}
	return 0;
}