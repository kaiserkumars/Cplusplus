#include <bits/stdc++.h>
using namespace std;
template <typename T> std::string type_name();

int countTriplets(int arr[], int n, int m){
	unordered_map<int,int> unmap;
	for(int i=0;i<n;i++)
	{
		unmap[arr[i]]=i;
		
	}
	int count =0;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]*arr[j]!=0&&(m%(arr[i]*arr[j])==0)){
				int check = m/(arr[i]*arr[j]);
				auto it = unmap.find(check);
				cout<<typeid(it).name()<<"\n";
				if(check!=arr[i]&&check!=arr[j]&&it!=unmap.end()&&it->second>i&&it->second>j)
				count++;
			}
		}
	}
	
	return count;
}


int main() {
	int arr[] = { 1, 4, 6, 2, 3, 8 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = 24;
 
    cout << countTriplets(arr, n, m);
 
    
	return 0;
}