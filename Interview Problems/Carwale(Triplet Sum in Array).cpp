#include<bits/stdc++.h>
using namespace std;

int check(int arr[],int n,int m)
{
    unordered_map<int,int> umap;
    for(int i=0;i<n;i++)
    umap[arr[i]]=i;
    int ct=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int c = m-(arr[i]+arr[j]);
            auto it = umap.find(c);
            if(c!=arr[i]&&c!=arr[j]&&it!=umap.end()&&c!=0&&it->second>i&&it->second>j)
            ct++;
        }
    }
    
    return ct;
}


int main()
 {
     
     int t;
     cin>>t;
     while(t--)
     {
         int n,m;
         cin>>n>>m;
         int arr[n];
         for(int i=0;i<n;i++)
         cin>>arr[i];
         int x = check(arr,n,m);
         
         if(x>0)
         cout<<"1"<<"\n";
         else
         cout<<"0"<<"\n";
     }
     
     
	//code
	return 0;
}