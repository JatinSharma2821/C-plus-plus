#include<bits/stdc++.h>
using namespace std;

int main()

{
	int n;
		
		cin>>n;
		cin.ignore();//for ignoring enter key pressed after n

		char arr[n+1];
		//getline() is used for getting complete line as input  ... here complete line refers to arr with size n
		cin.getline(arr,n);
		cin.ignore();//again to ignore enter key pressed then

		int currlen = 0;// variable for storing current length of word
		int minlen = INT_MAX;// variable minlen will give minimum value of word
		// REason for assigning minlen max value is as soon as it encounters with currlen<minlen, minlen will take value of currlen;

		int maxlen = 0; // stores max length
		int stmin=0; // storing starting index no. for minimum word

		int enmin = 0; // storing ending index no. for minimum word;
		int enlarge = 0; // largest last index no
		 int stlarge = 0; // smallest first index no

		int i =0; // for iterating using loop
		while (true)
		{
			if (arr[i] == ' ' || arr[i] == '\0')
			{	if (currlen>maxlen)
			
			{	maxlen = currlen;
					enlarge = stlarge;
				
			}
				//maxlen = (currlen>maxlen) ? currlen : maxlen;

				if (currlen<minlen)
				{	minlen = currlen;
					enmin = stmin;
					
					}
				//minlen = (currlen<minlen) ? currlen : minlen;
			}
			
			stlarge = i+1;
			stmin  = i;
			currlen++;
			if (arr[i] == '\0')
			{
				break;
			}
		}

		cout<< " Minium len is" << minlen <<" and shortest word is " ;
		for (int i =0; i<minlen; i++)
		{
			cout<<arr[i+enmin];
		}
		cout<<endl;

		cout<<" Maximum len is " << maxlen << " and largest word is ";
		for (int i =0; i<maxlen; i++)
		{
			cout<<arr[i+enlarge];
		}		
		

		


	
	

	return 0;
}
	