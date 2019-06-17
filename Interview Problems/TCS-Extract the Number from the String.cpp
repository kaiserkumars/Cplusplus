#include<bits/stdc++.h>
using namespace std;
//https://practice.geeksforgeeks.org/problems/extract-the-number-from-the-string/0
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         string s;
         cin.ignore(254,'\n');
         getline(cin,s);
         //cout<<s.length();
         long long maxi=0;
         for(int i=0;i<s.length();i++)
         {
         	 //cout<<s[i];cou
             int flag=0,j=i;
             long long x=0;
             while(isdigit(s[j]))
             {
             
                 
                 if(s[j]=='9')
                 {
                 	flag=1;
                    
                 	
                 }
                   j++;
             }
             
             if(flag==0&&isdigit(s[i]))
             {
                 stringstream num(s.substr(i,j));
                 num>>x;
                 //cout<<x<<"-";
                 if(x>maxi)
                 maxi=x;
                 i=j;
             }
         }
         
         cout<<maxi<<"\n";
        
     }
	//code
	return 0;
}