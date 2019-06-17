#include<bits/stdc++.h>
using namespace std;
//https://practice.geeksforgeeks.org/problems/smallest-positive-missing-number/0
//APproach-1. https://blog.vcillusion.co.in/finding-first-missing-positive-integers-the-right-way/
//2.https://www.geeksforgeeks.org/find-the-smallest-positive-number-missing-from-an-unsorted-array/
int main()
 {
     
     int t;
     cin>>t;
     while(t--)
     {
         int n;
         cin>>n;
         vector<int> vec(n);
        
         for(int i=0;i<n;i++)
         {
             cin>>vec[i];
         }
         
         auto ait = vec.begin();
         auto bit = vec.begin();
         //first we separate the negative and postive integers. Negative integers shifted to left 
         //part of the vector.
         //eg: -12 -3 43 -6 12 34 2 67 -23
         //seaprated to : -12 -3 -6 -23 12 34 2 67 43 
         
         for(;ait!=vec.end();ait++)
         {
             if(*ait<=0)
             {iter_swap(ait,bit);bit++;} //iter_swap: swap values pointer by two vectors
             
         }
        
        //Now we need to mark which postive numbers are present
        //by placing them to the their index value
        //eg: -12 2 -6 -23 12 34 -3 67 43 (2 placed at index 1)
        //IMP: Point worth noting here is that The +ve values which are greater
        //than the size of the vector will be ignored. This always ensure that
        //correct answer is given because +ve values start from 1 and also that 
        //there will atleast be one element in the given vector.
        //eg: -12 -4 -23 1 2 3 4 15 -3, we see that here min +ve missing is 5 therefore 
        //size of array will be atleast 4, and even if we dont put 15 to its correct index
        //we will get correct answer.
         for(auto it=bit;it!=vec.end();it++)
         {
             while(*it-1<vec.size()&&*it>=0) //we swap until we donot have +ve value at the 
             //curretn iterator postion or the +ve no. is > size of vector
             {
                 auto its = vec.begin()+*it-1;
                
                 if(its==it||*its==*it) //we break if we are swapping the same number at two different locaions 
                 //or both the iterator point to same location to avoid getting into infinte loop
                 break;
                 iter_swap(its,it);
       
                 
                  
             }
            
                
         }
         
        //we print the idex+1 as answer if the value of vector at that index is 
        //not equla to index+1,
        //else vec.size()+1 if situation is like this eg. 1 2 3 4 5
        for(int i = 0; i < vec.size(); i++) 
            if (vec[i] !=i+1) 
              {cout<<i+1<<"\n";break;}
            else if(vec[i]==i+1&&i==vec.size()-1)
            {cout<<vec[i]+1<<"\n";}
             
     
     }

	return 0;
}