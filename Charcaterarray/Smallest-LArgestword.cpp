/*

This program is for clearity of cin.ignore() & cin.getline()

Tu  savoi quel aujourd'hui Je swis content car aujourd'hui Je entrient tu dans mon rever

Find length and word for smallest and largest word.






*/

#include<bits/stdc++.h>

using namespace std;
int main()
{
	char user_choice;
	
	do 
	{
	cout<<"Hello! Welcome to LaSm - Largest and Smallest Question \n Choose one of the following program to continue \n 1.Finding length of largest word\n2.Finding length of Largest word along with Largest word \n 3. Find length of smallest word. \4. Finding length of smallest word alongwith smallest word.\5. Find largest and smallest word"<<endl;
	int option;
	cin>>option;

		

	switch (option)
	{
	case 1 :
		
		int n;
		
		cin>>n;
		cin.ignore();//for ignoring enter key pressed after n

		char arr[n+1];
		//getline() is used for getting complete line as input  ... here complete line refers to arr with size n
		cin.getline(arr,n);
		cin.ignore();//again to ignore enter key pressed then

		int currlen = 0;// variable for storing current length of word
		int maxlen = 0;// storing largest length of word

		int i =0; // for iterating using loop

		int ans; // for storing final ans


		while (true)
		{
			// if space / null chARACTER comes while iterating over loop- last active word has ended and now new word is coming after , so we need to store length of last active word.
			if (arr[i] == ' ' || arr[i] == '\0')
			{
				// declaring answer for storing answer
				// although using if else condition no need to declare ans variable ... just to use ternary operator and give a beautiful look to code ternary operator is used.
				/* ---- using if else ----
				if (currlen>maxlen)
				{
					maxlen = currlen;
				}
				*/
				 ans = (currlen>maxlen) ? currlen : maxlen;



				currlen = 0;//assigning zero for starting of length of upcoming word with again as a 1.
			}

			
			currlen++;//for increment of current length for word over which pointer is working.


			if (arr[i] == '\0')// breaking condition
			{
				break;
			}
			i++;

		}

		cout<<"Max len is "<<ans<<endl;
		break;
	
	case 2 :

	int n;
		
		cin>>n;
		cin.ignore();//for ignoring enter key pressed after n

		char arr[n+1];
		//getline() is used for getting complete line as input  ... here complete line refers to arr with size n
		cin.getline(arr,n);
		cin.ignore();//again to ignore enter key pressed then

		int currlen = 0;// variable for storing current length of word
		int maxlen = 0;// storing largest length of word

		int stlarge=0;// strores index of starting of large word
		int enlarge=0;// index of ending of large word
	

		int ans; // for final answer

		int i =0; // for iterating using loop



		while (true)
	{

		if (arr[i] == ' ' || arr[i] == '\0')

		{
			if (maxlen<currlen { enlarge = stlarge ;}
			 ans = (maxlen<currlen) ? currlen : maxlen;
			// enlarge = stlarge // enlarge will store  last stlarge when space will come.
			// now if space has come or null character has come means previous word is ending so ending index will be the last st.
				 // lets take an example - He loves she ---- here at st = 7, word - love ends. so ending index = last st = 7.

			currlen = 0; // for storing len of new word as a fresh word as if only that words exits so that length of previous word is not stored whlie calculating len of next word
		}
		
		currlen++; // len increments of current word
		stlarge = i + 1; // why i+1 ? bcz i for which arr[i] == 0; next word will be starting from i+1 and stlarge stores index no. for starting of word


		if (arr[i] == '\0') // terminating condition
		{
			break;

		}

	}

	cout<<"MAx len is " << ans << " and word is ";
	for (int i =0; i<ans; i++)
	{
		cout<<arr[i+enlarge];
	}
		break;

	case 3 :


		int n;
		
		cin>>n;
		cin.ignore();//for ignoring enter key pressed after n

		char arr[n+1];
		//getline() is used for getting complete line as input  ... here complete line refers to arr with size n
		cin.getline(arr,n);
		cin.ignore();//again to ignore enter key pressed then

		int currlen = 0;// variable for storing current length of word
		int minlen = 0;// storing minimum length of word.

		int i =0; // for iterating using loop
		int ans; // for final answer

		while (true)
		{

			if (arr[i] == ' ' || arr[i] == '\0')
			{
				
				minlen = (currlen<minlen) ? currlen : minlen ;

				currlen = 0;// assiging zero for storing unaffected and fresh value of next word length
			}


			currlen++;

			if (arr[i] = '\0')
			{
				break;
			}


		}
		ans = minlen;

		cout<< " Minimun len is " << ans <<endl;


		break;

	case 4:

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

		int stmin=0; // storing starting index no. for minimum word

		int enmin = 0; // storing ending index no. for minimum word;

		int i =0; // for iterating using loop
		int ans = 0; //  for final answer

		while (true)
		{
			if (arr[i] == ' ' || arr[i] == '\0')
			{
				if (currlen<minlen) { enmin = stmin ;}
				minlen = (currlen<minlen) ? currlen : minlen ;
				
				// Do Die
				// I love you 
				

				st = i;


				currlen = 0;
			}

			stmin = i;
			currlen++;

			if (arr[i] == '\0')
			{

				break;
			}
		}

		ans = minlen;


		cout<<" Min len is " << ans << " and word is ";


		for (int i = 0; i<ans; i++ )
		{
			cout<<arr[i+enmin];
		}

		break;



	case 5 : 
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
			{	if (currlen>maxlen){enlarge = stlarge;}
				maxlen = (currlen>maxlen) ? currlen : maxlen;

				if (currlen<minlen){enmin = stmin;}
				minlen = (currlen<minlen) ? currlen : minlen;
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
		
		break;

	default:
		cout<<"Sorry, Presently I am in Beta Version"<<endl;
		break;
	}

	cout<<"Do you want to run program again? (Y/N)"<<endl;
	 user_choice;
	cin>>user_choice;

	int j = 0;
	while (user_choice[j] != '\0')
	{
	if (islower(user_choice[j])) { user_choice[j] = toupper(user_choice[j]);}

	}
	} while(user_choice == 'Y');
	return 0;
}
