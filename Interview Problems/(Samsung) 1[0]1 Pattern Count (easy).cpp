#include<bits/stdc++.h>
using namespace std;
//https://practice.geeksforgeeks.org/problems/101-pattern-count/0/?ref=self
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         string s;
         cin>>s;
         int ct=0;
         for(int i=0;i<s.length();i++)
         {
             if(s[i]=='1'&&s[i+1]=='0')
             {
                 int j=i+1;
                 while(s[j]=='0')
                 j++;
                 if(s[j]=='1')
                 {ct++;i=j-1;}
             }
         }
         
         cout<<ct<<"\n";
         
     }
	//code
	return 0;
}