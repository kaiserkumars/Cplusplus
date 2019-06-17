#include<bits/stdc++.h>
using namespace std;


bool isRotate(vector<string> text, vector<string> pattern)
{
	//auto m = text.size();
	auto n = pattern.size();
	auto key = text[0];
	int key_p;
	auto find_key = find(pattern.begin(),pattern.end(),key);
	if(find_key!=pattern.end())
		key_p = find_key-pattern.begin();
	else 
		return false;
	// for(auto it = pattern.begin();it!=pattern.end();it++)
	// {
	// 	if(pattern.)
	// 	if(*it == key)
	// 		key_p = it - pattern.begin();
	// 	else
	// 		return false;
	// }

	for(auto it = text.begin();it!=text.end();it++)
	{
		if(*it!=pattern[key_p%n])
			return false;
		key_p++;
	}

	return true;
}


int main()
{
	std::vector<string> text = {"12345678"};
	std::vector<string> pattern ={"45678123"};

	bool Rot = isRotate(text,pattern);
	if(Rot==false)
		cout<<"False";
	else
		cout<<"true";
	
}