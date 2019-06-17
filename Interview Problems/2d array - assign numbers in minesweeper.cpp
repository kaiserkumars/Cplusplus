#include <bits/stdc++.h>
using namespace std;

void minesweeper(vector<pair<int,int>> vint, int r, int c)
{
	int arr[r][c];
	int a,b;
	memset(arr,0,sizeof(arr[0][0])*r*c);
	for(int i=0;i<vint.size();i++)
	{
		a=vint[i].first;
		b=vint[i].second;
		
		for(int m = a-1;m<=a+1;m++)
		{
			for(int n = b-1;n<=b+1;n++)
			{
				if(m<0||m>r-1||n<0||n>c-1||arr[m][n]==-1)
				continue;
				else
				arr[m][n]+=1;
			}
						
			
		}
		arr[a][b]=-1;
	}
	
	
	for(int i=0;i<r;i++)
	{
		for(int j=0;i<c;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		
		cout<<"\n";
	}
	
}

int main() {
	// your code goes here
	vector<pair<int,int> > vint;
	int n;
	cin>>n;
	int a,b;
	int r,c;
	cin>>r>>c;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		vint.push_back(make_pair(a,b));
	}
	minesweeper(vint,r,c);
	// auto it  = vint.begin();
	// cout<<vint.size();
	return 0;
}