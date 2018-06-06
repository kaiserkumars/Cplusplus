#include <bits/stdc++.h>
using namespace std;

void common_elements(int *p, int *q,int m,int n)
{
	
	vector<int> uset;
	int i=0;
	
	while(i<m||i<n)
	{
		
		if(*p==*q)
		{
		    
			uset.push_back(*p);
			p++;
			q++;
		}
		
		else if(*p>*q)
		{
			q++;
		}
		
		else if(*q>*p)
		{
			p++;
		}
		
		i++;
	}
	
	for(auto it=uset.begin();it!=uset.end();it++)
	{
		cout<<*it<<" ";
	}
	
	
	
}


int main() {
	int a1[] = {1,2,3,4,5,6,54};
	int a2[] = {1,2,3,4,6,8,9,12,54};
 
	int m = sizeof(a1)/sizeof(a1[0]);
	int n = sizeof(a2)/sizeof(a2[0]);
 
	common_elements(a1,a2,m,n);
	return 0;
	
	
}