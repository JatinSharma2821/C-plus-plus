/*

Find largest word in sentence;

 Tu savoi quel aujourd'hui Je suis content car aujourd'hui Je entrient tu dans mon rever.

 */

/*
Next word is seperated by space in a sentence , make use of that.



*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()

{
	
	
	
	int n;
	cin>>n;// here after inputting n in terminal , we enter qa space so tell the compiler to ignore that space , we use cin.ignore
	cin.ignore();

	char arr[n+1];
	
	cin.getline(arr,n+1);
	cin.ignore();
	 //  cin.ignore(256,delimiting character) -- it transvers over 256 ascii enoding character  and ignore everything until delimitng charcater is reached.
	

	
	
	int currlen = 0;// stores current len
	int maxlen= 0; // stores max length

	int stlarge = 0; // represent starting of largest word 
	int enlarge = 0; // represent ending of largest word.

	int i =0;// for iterating loop
	while (1)// loop for transversing over whole array // 1 refers to true --- while (true)
	{	

		if (arr[i] == ' ' || arr[i] == '\0' )
		{
			if (currlen>maxlen)
			{
				maxlen = currlen;
				enlarge = stlarge;
				 // now if space has come or null character has come means previous word is ending so ending index will be the last st.
				 // lets take an example - He loves she ---- here at st = 7, word - love ends. so ending index = last st = 7.

			}


		//ans = (currlen>maxlen) ? maxlen:currlen; // assiged value of curr len to maxlen
			currlen=0;
			// if pointer encouters with space or '\0' means either new word is going to start or end of statement has come. 
			// So, in both the cases, we need to make curr len as 0; bcz if new word is strating so we need to measure its length strating from zero
			stlarge = i+1; 
			// means starting index of new word is i(at which arr[i] == ' ' ) ------ i+1;
			// lets take an example - He loves she ... @i=2; arr[i] == ' ' ... means now for next word starting-index i.e, stlarge will be 3 ... so, st = i + 1;
		}
		else
		{
			currlen++;
		}
		
		if (arr[i] == '\0')
		{
			break;
		}

		i++;
		

	}
	//cout<<ans;

	cout<<" Length of largest word is "<< maxlen <<" " << "and the word is "; // gives max len
	for (int i=0; i<maxlen; i++)
	{// He loves she 
		 cout<<arr[i+enlarge];
	}




	return 0;
}