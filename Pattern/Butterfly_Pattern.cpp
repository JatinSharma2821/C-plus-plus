// To print
// #      #
// ##    ##
// ###  ###
// ########
// ########
// ###  ###
// ##    ##
// #      #



// Observation - 1. Upper half and lower half are mirror images
//				 2. Left segment of each half is mirror image of right segment.


//Method-1

// Write code for 1 half first
#include<iostream>
using namespace std;
int main()
{


 int n;
 cout<<"Enter n"<<endl;
 cin>>n;

 char element;
 cout<<"Enter element"<<endl;
 cin>>element;

for (int i = 1; i <= n ; i++)// for upper half
 {
	 
	
		 for (int j = 1 ; j <= i; j++ ) // for left segment (1<j<5)
	 {
		 cout<<element; // it normally prints pattern
	 } 

	 for ( int m = i ; m <= (2*n); m++)// right segment
	// for i=1, no. of columns = 8; m==column
	 //In general, m starts from i and end at 2*n
	
	 {
		 if (m <= (2*n-i))// m < 2*n-i (given pattern has spaces at these position.)
			 cout<<" ";  // it prints space 
			 // for i = 1, it prints spaces for all m<=7, but from upper for loop
			 // some places are already occupied by element.
			 // so, it will skip those and prints space on rest

			 //Similary, same concept for all values of i.
		else 
		cout<<element;//prints element
	 }cout<<endl;
	
 }
 for (int i = n; i >= 1; i--) // for lower half
 {
	 for (int j = 1; j <= i; j++)
	 {
		cout<<element; // again a normal pattern has to be printed
	 }
	 for (int m = i; m <= 2*n; m++)
	 {
		 if (m>2*n-i){
			 cout<<element;
		 }
		 else {
			 cout<<" "; //it will give spaces at blank postions.
		 }
	 }cout<<endl;
	 
}	 
	 
	
 



// Method 2 

// |Given pattern consists of upper and lower parts( both same )
// pattern consits of design element , space




// instead of inseritng " " (spaces) by if else condition, we will create a variable to insert space
int m;
cout<<"Enter m";
cin>>m;

char design;
cout<<"Enter design element";
cin>>design;
// ---For upper part---
for (int i=1; i <= m; i++)
{
	for(int j=1; j<= i; j++){
		cout<<design;// for prinitng leftmost pattern normally
	}
	int space = 2*m-2*i;// at i = 1, no. of spaces = 6: i=2, spaces = 4..so this relation b/w space,n,i is observed
	for (int j=1; j<= space; j++) // loop for inserting space.
	{
		cout<<" ";
	}
	for(int j=1; j<= i; j++)
	{
		cout<<design;// for prinitng rightmost pattern normally
	}cout<<endl;
}
// ----for lower part---
for (int i=m; i >= 1; i--)//clearly visible that pattern element is decrementing in lower part so i--
{
	for(int j=1; j<= i; j++){
		cout<<design;// for prinitng leftmost pattern normally
	}
	int space = 2*m-2*i;// at i = 1, no. of spaces = 6: i=2, spaces = 4..so this relation b/w space,n,i is observed
	for (int j=1; j<= space; j++) // loop for inserting space.
	{
		cout<<" ";
	}
	for(int j=1; j<= i; j++)
	{
		cout<<design;// for prinitng rightmost pattern normally
	}cout<<endl;
}
	return 0;
}