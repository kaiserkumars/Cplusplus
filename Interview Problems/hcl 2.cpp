#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<string> vecstr;
	string input;
	for(int i=0; i<n; i++)
	{
		cin>>input;
		vecstr.push_back(input);
	}
    sort(vecstr.begin(), vecstr.end());
	bool visited[n];
	memset(visited, false, sizeof(visited));
	vector<string> res;

	for(int i=n-1; i>=0; i--)
	{
		if(visited[i] == false)
		{
			res.push_back(vecstr[i]);
			for(int j=i-1; j>=0; j--)
			{
				bool flag = false;
				int x = vecstr[j].length();
				for(int k=0; k<x; k++)
				{
					if(vecstr[j][k] != vecstr[i][k])
					{
						flag = true;
						break;
					}
				}
				if(flag == false)
				{
					visited[j] = true;
					break;
				}
			}
		}
	}


	int ans = 0;
	for(int i=0; i<res.size(); i++)
	{
		string vecstr = res[i];
		for(int j=0; j<vecstr.length(); j++)
			ans += int(vecstr[j]);
	}
	cout<<ans<<endl;
	return 0;
}
