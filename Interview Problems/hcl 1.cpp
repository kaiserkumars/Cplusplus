#include <bits/stdc++.h>
using namespace std;

int varx(int x,int c);
int main()
{
	int x;
	cin>>x;
	int result = varx(x,1);
	cout<<result;
	return 0;
}


int varx(int x,int c)
{
	int rem = x - pow(c, 2);
	if(rem == 0)
	return 1;
	if(rem < 0)
	return 0;

	return (varx(x,c+1) + varx(rem,c+1));
}

