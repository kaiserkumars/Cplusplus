int main()                   //eu017  number to words 
{
	int t;
	cin>>t;
	cin.ignore(254,'\n');
	while(t--)
	{
	     char ones[][10]={"One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
	     char tens[][8]={"Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};
	     char hun[8]={"Hundred"};
	     char th[10]={"Thousand"};
	     char mi[8]="Million";
	     char bil[8]="Billion";
	     //char zeroes[][25]={"One Thousand","Ten Thousand","One Hundred Thousand","One Million","Ten Million","One Hundred Million","One Billion","Ten Billion","One Hundred Billion","One Trillion"};
	     long long int n;
	     char str[14];
	     gets(str);
	     n=strlen(str);

	     int k=n/3,i,j,flag=0,a,b,c,ct=0;    //index for billion =i,million=a,thousand=b,hundreds=c

	     for(i=1;i<n;i++)
	     {
	     	if(str[i]-48==0)
	     	{
	     		ct++;
	     	}
	     }

	     if(ct==12)
	     {
	     	cout<<"One Trillion\n";
	     	continue;
	     }
	    // if(ct==3)

	     i=0;
	     if(n%3!=0&&k==3)    //for million index
	     {
	     	a=i+n%3;
	     }
	     else if(n%3==0&&k==4)
	     {
	     	a=3;
	     }
	     else
	     {
	     	a=0;
	     }


	     if(n%3!=0&&k==3)   //for thousand index
	     {
	     	b= 3+i+n%3;
	     }
	     else if(n%3==0&&k==4)
	     {
	     	b=6;
	     }
	     else if(n%3!=0&&k==2)
	     {
	     	b=i+n%3;
	     }
	     else if(n%3==0&&k==3)
	     {
	     	b=3;
	     }
	     else
	     {
	     	b=0;
	     }


	     if(n%3!=0&&k==3)     //for hundred index
	     {
	     	c= 6+i+n%3;
	     }
	     else if(n%3==0&&k==4)
	     {
	     	c=9;
	     }
	     else if(n%3!=0&&k==2)
	     {
	     	c=i+n%3+3;
	     }
	     else if(n%3==0&&k==3)
	     {
	     	c=6;
	     }
	     else if(n%3!=0&&k==1)
	     {
	     	c=i+n%3;
	     }
	     else if(n%3==0&&k==2)
	     {
	     	c=3;

	     }

	     else
	     {
	     	c=0;
	     }







	     //billion lobby
	     if(n%3==1&&k==3)
	     	{
	     		flag=1;
	     		for(j=0;ones[str[i]-49][j]!='\0';j++)        //loop for like: two billion
	     		{
	     			cout<<ones[str[i]-49][j];
	     		}
	     		cout<<" ";
	     		for(j=0;bil[j]!='\0';j++)
	     		{
	     			cout<<bil[j];
	     		}
	     		cout<<" ";
	     	}
	     	else if(n%3==2&&k==3)                        //loop for like: twenty four billion
	     	{
	     		flag=1;
	     		if(str[i]-48>=2)
	     		{
	     			for(j=0;tens[str[i]-50][j]!='\0';j++)
	     		  {
	     			cout<<tens[str[i]-50][j];
	     		  }
	     		  cout<<" ";
	     		  //puts(ones[str[i]-50]);


	     		  if(str[i+1]-48!=0)
	     		  {
	     		  	for(j=0;ones[str[i+1]-49][j]!='\0';j++)
	     		    {
	     		  	    cout<<ones[str[i+1]-49][j];
	     		    }
	     		    cout<<" ";
	     		  }

	     		}
	     		else
	     		{
	     			for(j=0;ones[str[i+1]-39][j]!='\0';j++)
	     		  {
	     		  	cout<<ones[str[i+1]-39][j];
	     		  }
	     		  cout<<" ";
	     		}


	     		  for(j=0;bil[j]!='\0';j++)
	     	    	{
	     		     	cout<<bil[j];
	     		    }
	     		cout<<" ";
	     	}

	     	else if(n%3==0&&k==4)   //loop for like Three hundred twenty four billion
	     	{
	     		flag=1;
	     		for(j=0;ones[str[i]-49][j]!='\0';j++)
	     		{
	     			cout<<ones[str[i]-49][j];
	     		}
	     		cout<<" ";
	     		for(j=0;hun[j]!='\0';j++)
	     		{
	     			cout<<hun[j];

	     		}
	     		cout<<" ";
	     		if(str[i+1]-48>=2)
	     		{
	     			for(j=0;tens[str[i+1]-50][j]!='\0';j++)
	     			{

						 cout<<tens[str[i+1]-50][j];
	     			}
	     			cout<<" ";
	     			for(j=0;ones[str[i+2]-49][j]!='\0';j++)
	     			{
	     				cout<<ones[str[i+2]-49][j];
	     			}
	     			if(str[i+2]-48!=0)
	     			{
	     				cout<<" ";
	     			}

	     		}

	     		else
	     		{
	     			//cout<<" ";
	     			if(str[i+1]-48==0)
	     			{
	     				for(j=0;ones[str[i+2]-49][j]!='\0';j++)
	     				cout<<ones[str[i+2]-49][j];
	     				if(str[i+2]-48!=0)
	     				    {
	     				    	cout<<" ";
	     				    }
	     			}

	     			else
	     			{
	     				for(j=0;ones[str[i+2]-39][j]!='\0';j++)
	     				cout<<ones[str[i+2]-39][j];
	     				cout<<" ";
	     			}

	     		}

	     		for(j=0;bil[j]!='\0';j++)
	     	    	{
	     		     	cout<<bil[j];
	     		    }
	     		    cout<<" ";
	     	}






	     	//million lobby




	     	if(n%3==1&&k==2)
	     	{
	     		flag=1;
	     		for(j=0;ones[str[a]-49][j]!='\0';j++)       //check when str[a] contains zero //loop for like: two million
	     		{
	     			cout<<ones[str[a]-49][j];
	     		}
	     		cout<<" ";
	     		for(j=0;mi[j]!='\0';j++)
	     		{
	     			cout<<mi[j];
	     		}
	     		cout<<" ";
	     	}

	     	else if(n%3==2&&k==2)                        //loop for like: twenty four million
	     	{
	     		flag=1;

	     		if(str[a]-48>=2)
	     		{
	     			for(j=0;tens[str[a]-50][j]!='\0';j++)
	     		  {
	     			cout<<tens[str[a]-50][j];
	     		  }
	     		  cout<<" ";
	     		  //puts(ones[str[a]-50]);

	     		  if(str[a+1]-48!=0)
	     		  {
	     		  	for(j=0;ones[str[a+1]-49][j]!='\0';j++)
	     		    {
	     		  	    cout<<ones[str[a+1]-49][j];
	     		    }
	     		    cout<<" ";
	     		  }


	     		}
	     		else
	     		{
	     			for(j=0;ones[str[a+1]-39][j]!='\0';j++)
	     		  {
	     		  	cout<<ones[str[a+1]-39][j];
	     		  }
	     		  cout<<" ";
	     		}

	     		  for(j=0;mi[j]!='\0';j++)
	     	    	{
	     		     	cout<<mi[j];
	     		    }
	     		cout<<" ";
	     	}

	     	else if((n%3==0&&k==3)||flag==1)   //loop for like Three hundred twenty four million
	     	{
	     		flag=1;
	     		for(j=0;ones[str[a]-49][j]!='\0';j++)
	     		{
	     			cout<<ones[str[a]-49][j];
	     		}

	     		if(str[a]-48!=0)
	     		{   cout<<" ";
	     			for(j=0;hun[j]!='\0';j++)
	     	     	{
	     			  cout<<hun[j];
	     		    }
	     		    cout<<" ";
	     		}


	     		if(str[a+1]-48>=2)
	     		{
	     			for(j=0;tens[str[a+1]-50][j]!='\0';j++)
	     			{

						 cout<<tens[str[a+1]-50][j];
	     			}
	     			cout<<" ";
	     			for(j=0;ones[str[a+2]-49][j]!='\0';j++)
	     			{
	     				cout<<ones[str[a+2]-49][j];
	     			}
	     			if(str[a+2]-48!=0)
	     			{
	     				cout<<" ";
	     			}

	     		}

	     		else
	     		{
	     			//cout<<" ";
	     			if(str[a+1]-48==0)
	     			{
	     				for(j=0;ones[str[a+2]-49][j]!='\0';j++)
	     				cout<<ones[str[a+2]-49][j];
	     				if(str[a+2]-48!=0)
	     				    {
	     				    	cout<<" ";
	     				    }
	     			}

	     			else
	     			{
	     				for(j=0;ones[str[a+2]-39][j]!='\0';j++)
	     				cout<<ones[str[a+2]-39][j];
	     				cout<<" ";
	     			}

	     		}
	     		if(str[a]+str[a+1]+str[a+2]-144!=0)
				 {
				 	for(j=0;mi[j]!='\0';j++)
	     	    	{
	     		     	cout<<mi[j];
	     		    }
	     		    cout<<" ";
				 }

	     	}




	     //Thousand lobby

	     if(n%3==1&&k==1)
	     	{
	     		flag=1;
	     		for(j=0;ones[str[b]-49][j]!='\0';j++)       //check when str[b] contains zero //loop for like: two thousand
	     		{
	     			cout<<ones[str[b]-49][j];
	     		}
	     		cout<<" ";
	     		for(j=0;th[j]!='\0';j++)
	     		{
	     			cout<<th[j];
	     		}
	     		cout<<" ";
	     	}
	     	else if(n%3==2&&k==1)                        //loop for like: twenty four thousand
	     	{
	     		flag=1;
	     		if(str[b]-48>=2)
	     		{
	     			for(j=0;tens[str[b]-50][j]!='\0';j++)
	     		  {
	     			cout<<tens[str[b]-50][j];
	     		  }
	     		  cout<<" ";
	     		  //puts(ones[str[b]-50]);


	     		  if(str[b+1]-48!=0)
	     		  {
	     		  	for(j=0;ones[str[b+1]-49][j]!='\0';j++)
	     		    {
	     		  	    cout<<ones[str[b+1]-49][j];
	     		    }

	     		    	cout<<" ";


	     		  }

	     		}
	     		else
	     		{
	     			for(j=0;ones[str[b+1]-39][j]!='\0';j++)
	     		  {
	     		  	cout<<ones[str[b+1]-39][j];
	     		  }
	     		  cout<<" ";
	     		}

	     		  for(j=0;th[j]!='\0';j++)
	     	    	{
	     		     	cout<<th[j];
	     		    }
	     		cout<<" ";
	     	}

	     	else if(n%3==0&&k==2||flag==1)   //loop for like Three hundred twenty four thousand
	     	{
	     		flag=1;
	     		for(j=0;ones[str[b]-49][j]!='\0';j++)
	     		{
	     			cout<<ones[str[b]-49][j];
	     		}

	     		if(str[b]-48!=0)
	     		{
	     			cout<<" ";
	     			for(j=0;hun[j]!='\0';j++)
	     	    	{
	     			   cout<<hun[j];

	     		    }
	     		    cout<<" ";
	     		}

	     		if(str[b+1]-48>=2)
	     		{
	     			for(j=0;tens[str[b+1]-50][j]!='\0';j++)
	     			{

						 cout<<tens[str[b+1]-50][j];
	     			}
	     			cout<<" ";
	     			for(j=0;ones[str[b+2]-49][j]!='\0';j++)
	     			{
	     				cout<<ones[str[b+2]-49][j];
	     			}
	     			if(str[b+2]-48!=0)
	     			{
	     				cout<<" ";
	     			}

	     		}

	     		else
	     		{
	     			//cout<<" ";
	     			if(str[b+1]-48==0)
	     			{
	     				for(j=0;ones[str[b+2]-49][j]!='\0';j++)
	     				cout<<ones[str[b+2]-49][j];
	     				if(str[b+2]-48!=0)
	     				    {
	     				    	cout<<" ";
	     				    }
	     			}

	     			else
	     			{
	     				for(j=0;ones[str[b+2]-39][j]!='\0';j++)
	     				cout<<ones[str[b+2]-39][j];
	     				cout<<" ";
	     			}

	     		}

	     		if(str[b]+str[b+1]+str[b+2]-144!=0)
				 {
				 	for(j=0;th[j]!='\0';j++)
	     	    	{
	     		     	cout<<th[j];
	     		    }
	     		    cout<<" ";
				 }
	     	}








	     //hundreds lobby



 if(n==1&&str[0]-48==0)
	     	{
	     		cout<<"Zero";
	     	}

else if(n%3==1&&k==0)
	     	{
	     		flag=1;
	     		for(j=0;ones[str[c]-49][j]!='\0';j++)       //check when str[c] contains zero //loop for like: two hundred
	     		{
	     			cout<<ones[str[c]-49][j];
	     		}
	     		cout<<" ";

	     	}
	     	else if(n%3==2&&k==0)                        //loop for like: twenty four
	     	{
	     		flag=1;
	     		if(str[c]-48>=2)
	     		{
	     			for(j=0;tens[str[c]-50][j]!='\0';j++)
	     		  {
	     			cout<<tens[str[c]-50][j];
	     		  }
	     		  cout<<" ";
	     		  //puts(ones[str[c]-50]);


	     		  if(str[c+1]-48!=0)
	     		  {
	     		  	for(j=0;ones[str[c+1]-49][j]!='\0';j++)
	     		    {
	     		  	    cout<<ones[str[c+1]-49][j];
	     		    }
	     		    cout<<" ";
	     		  }

	     		}
	     		else
	     		{
	     			for(j=0;ones[str[c+1]-39][j]!='\0';j++)
	     		  {
	     		  	cout<<ones[str[c+1]-39][j];
	     		  }
	     		  cout<<" ";
	     		}


	     	}

	     	else if((n%3==0&&k==1)||flag==1)   //loop for like Three hundred twenty four
	     	{

	     		for(j=0;ones[str[c]-49][j]!='\0';j++)
	     		{
	     			cout<<ones[str[c]-49][j];
	     		}
	     		if(str[c]-48!=0)
	     		{
	     			if(str[c]+str[c+1]+str[c+2]-144!=0)
				 {cout<<" ";
				 	for(j=0;hun[j]!='\0';j++)
	     	    	{
	     		     	cout<<hun[j];
	     		    }
	     		    cout<<" ";
				 }

	     		}

	     		if(str[c+1]-48>=2)
	     		{
	     			for(j=0;tens[str[c+1]-50][j]!='\0';j++)
	     			{

						 cout<<tens[str[c+1]-50][j];
	     			}
	     			cout<<" ";
	     			for(j=0;ones[str[c+2]-49][j]!='\0';j++)
	     			{
	     				cout<<ones[str[c+2]-49][j];
	     			}
	     			cout<<" ";
	     		}

	     		else
	     		{
	     			//cout<<" ";
	     			if(str[c+1]-48==0)
	     			{
	     				for(j=0;ones[str[c+2]-49][j]!='\0';j++)
	     				cout<<ones[str[c+2]-49][j];
	     				if(str[c+2]-48!=0)
	     				    {
	     				    	cout<<" ";
	     				    }
	     			}

	     			else
	     			{
	     				for(j=0;ones[str[c+2]-39][j]!='\0';j++)
	     				cout<<ones[str[c+2]-39][j];
	     				cout<<" ";
	     			}

	     		}


	     	}

	     cout<<"\n";
	}
	return 0;
}