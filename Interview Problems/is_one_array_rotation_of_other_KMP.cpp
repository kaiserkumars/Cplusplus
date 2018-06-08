#include <bits/stdc++.h>
using namespace std;

void preKMP(vector<string> pattern, int F[])
{
	int m = pattern.size();
	
	F[0] = F[1] = 0; // always true
  
  for(int i = 2; i <= m; i++) {
    // j is the index of the largest next partial match 
    // (the largest suffix/prefix) of the string under  
    // index i - 1
    int j = F[i - 1];
    for( ; ; ) {
      // check to see if the last character of string i - 
      // - pattern[i - 1] "expands" the current "candidate"
      // best partial match - the prefix under index j
      if(pattern[j] == pattern[i - 1]) { 
        F[i] = j + 1; break; 
      }
      // if we cannot "expand" even the empty string
      if(j == 0) { F[i] = 0; break; }
      // else go to the next best "candidate" partial match
      j = F[j];
    }
  }   
	
}



bool KMP(vector<string> text,vector<string> pattern)
{
  // let n be the size of the text, m the 
  // size of the pattern, and F[] - the
  // "failure function"
  auto l = text.size();
  text.resize(2*l);
  copy_n(text.begin(),l,text.begin()+l);
  //for(auto it=text.begin();it!=text.end();it++)
  //cout<<*it;
  int m=pattern.size();
  int n=text.size();
  int f[m];
  preKMP(pattern,f); 
  
  int i = 0; // the initial state of the automaton is
         // the empty string

  int j = 0; // the first character of the text
  
  for( ; ; ) {
    if(j == n) break; // we reached the end of the text

    // if the current character of the text "expands" the
    // current match 
    if(text[j] == pattern[i]) {
      i++; // change the state of the automaton
      j++; // get the next character from the text
      if(i == m) // match found
    	return true;
    }

    // if the current state is not zero (we have not
    // reached the empty string yet) we try to
    // "expand" the next best (largest) match
    else if(i > 0) i = f[i];

    // if we reached the empty string and failed to
    // "expand" even it; we go to the next 
    // character from the text, the state of the
    // automaton remains zero
    else j++;
  }
}




int main() {
	vector<string> text={"123456"};
	vector<string> patt={"345612"};
	bool x;
	x = KMP(text,patt);
	if(x==true)
	cout<<"It's a Match";
	else
	cout<<"Not a Match";
	// your code goes here
	return 0;
}