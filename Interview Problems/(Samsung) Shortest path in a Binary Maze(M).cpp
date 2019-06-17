#include <bits/stdc++.h>
using namespace std;
#define R 20
#define C 20

//https://www.geeksforgeeks.org/shortest-path-in-a-binary-maze/
//https://www.youtube.com/watch?v=KiCBXu4P-2Y (good explanation)

//Direction arrays
int rowDir[4]={-1,1,0,0};
int colDir[4]={0,0,1,-1};


bool isValid(int row, int col,int n, int m)
{
	if(row<0||col<0||row>=n||col>=m)
	return false;
	return true;
}

int BFS(int arr[][C],int n,int m,int sx, int sy, int dx,int dy)
{
	int nodes_left = 1;
	int nodes_next= 0;
	int move_count=0;
	if(!arr[sx][sy]||!arr[dx][dy])
	return -1;
	bool visited[R][C];
	memset(visited,false,sizeof visited);
	queue<int> xq;
	queue<int> yq;
	xq.push(sx);
	yq.push(sy);
	while(!xq.empty())
	{
		int xc = xq.front();
		int yc = yq.front();
		if(xc == dx && yc==dy)
		return move_count;
		xq.pop();
		yq.pop();
		
		//explore neighbors
		for(int i=0;i<4;i++)
		{
			int r = xc + rowDir[i];
			int c = yc + colDir[i];
			if(isValid(r,c,n,m)&&arr[r][c]&&!visited[r][c])
			{
				//cout<<r<<" "<<c<<"\n";
				xq.push(r);yq.push(c);
				visited[r][c]=true;
				nodes_next++;
			}
		}
		
		nodes_left--;
		if(nodes_left==0)
		{
			nodes_left=nodes_next;
			nodes_next=0;
			move_count++;
		}
	
		
	}
	return -1;
}

int main() {
	int t;
     cin>>t;
     while(t--)
     {
         int n;
         int m;
         cin>>n>>m;
         int arr[R][C];
         for(int i=0;i<n;i++)
         {
         	for(int j=0;j<m;j++)
         	cin>>arr[i][j];
         }
         
         int sx=0,sy=0,dx,dy;
         cin>>dx>>dy;
         int steps = BFS(arr,n,m,sx,sy,dx,dy);
         cout<<steps<<"\n";
     }

	return 0;
}