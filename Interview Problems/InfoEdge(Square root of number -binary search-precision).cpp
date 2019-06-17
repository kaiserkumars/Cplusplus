#include <iostream>
using namespace std;
//https://www.geeksforgeeks.org/find-square-root-number-upto-given-precision-using-binary-search/
int main() {
	// your code goes here
	int x=11,p=4; //number and precision
	int start = 0, end=x/2;
	float ans;
	while(start<=end)
	{
		int mid=(start+end)/2;
		if(mid*mid==x)
		{ans=mid;break;}
		if(mid*mid<x)
		{start=mid+1;
		 ans=mid;}
		 else
		 end=mid-1;
	}
	
	float inc = 0.1;
	for(int i=0;i<p;i++)
	{
		while(ans*ans<=x)
		{
			//cout<<ans<<"\n";
			ans+=inc;
		}
		
		ans-=inc;
		inc/=10;
	}
	
	cout<<ans;
	return 0;
}