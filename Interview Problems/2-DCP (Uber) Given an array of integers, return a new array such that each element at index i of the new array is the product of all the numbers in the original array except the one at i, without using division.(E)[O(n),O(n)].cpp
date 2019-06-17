#include <bits/stdc++.h>
using namespace std;
#define NL cout<<"\n"; 

// Algorithm:
// 1) Construct a temporary array left[] such that left[i] contains product of all elements on left of arr[i] excluding arr[i].
// 2) Construct another temporary array right[] such that right[i] contains product of all elements on on right of arr[i] excluding arr[i].
// 3) To get prod[], multiply left[] and right[].

int main() {
	
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	int *left = (int*)malloc(sizeof(int)*n);
	int *right = (int*)malloc(sizeof(int)*n);
	int *prod = (int*)malloc(sizeof(int)*n);
	
	left[0]=1;
	right[n-1]=1;
	
	for(int i=1;i<n;i++)
	left[i]=left[i-1]*arr[i-1];
	
	for(int i=n-2;i>=0;i--)
	right[i]=right[i+1]*arr[i+1];
	
	for(int i=0;i<n;i++)
	prod[i]=left[i]*right[i];
	
	for(int i=0;i<n;i++)
	cout<<prod[i]<<" ";
	
	return 0;
}