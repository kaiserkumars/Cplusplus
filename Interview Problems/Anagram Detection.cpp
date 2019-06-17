#include <bits/stdc++.h>
using namespace std;
// Anagram detection by counting the frequency of the letters int words.
int main() {
	// your code goes here
	string a,b;
	cin>>a>>b;
	int histo[26]={0};
	for(int i=0;i<a.length();i++)
	{
		histo[a[i]-'a'-1]++;
	}

	for(int i=0;i<b.length();i++)
	{
		histo[b[i]-'a'-1]--;
	}
	
	for(int i=0;i<26;i++)
	{
		cout<<histo[i]<<" ";
		if(histo[i]!=0)
		{cout<<"Not Anagram!";return 0;}
		
	}
	cout<<"Anagram";
	return 0;
}