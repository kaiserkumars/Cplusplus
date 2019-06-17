#include <bits/stdc++.h>
//https://stackoverflow.com/questions/137783/expand-a-random-range-from-1-5-to-1-7
int rand5() // given method that returns 1 to 5 with equal probability
{
	// some code here
	return rand()%5+1;
}

int my_rand() // returns 1 to 7 with equal probability
{
	int sev[5][5] ={
	    {1,2,3,4,5},
	    {6,7,1,2,3},
	    {4,5,6,7,1},
	    {2,3,4,5,6},
	    {7,0,0,0,0}
	};
	
	int res =0;
	while(res==0)
	{
	    res = sev[rand5()-1][rand5()-1];
	}
	
	return res;
}

int main()
{
    int arr[8]={0};
    for(int i=0;i<10000;i++)
    {arr[my_rand()]++;}
	
	for(int i=0;i<8;i++)
	printf("%d ",arr[i]);
	return 0;
}
