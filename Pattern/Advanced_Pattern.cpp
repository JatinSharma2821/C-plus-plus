#include<iostream>
using namespace std;
	
int main()
{
// Question-1
// Task - 
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2 
// 1
cout<<"This program is to print Number pyramid pattern of desired no. of rows"<<endl;
int n;
cout<<"Enter no. of rows to be printed";
cin>>n;

for(int i = n; i>= 1; i--)
	{
		for (int j = 1; j<= i ; j++)// or j<= n+1 - i
		{
			cout<<j<<" ";
		}cout<<endl;
	}

//Question-2 print(n=7)
/*
1 
0 1
1 0 1 
0 1 0 1
1 0 1 0 1 
0 1 0 1 0 1 
1 0 1 0 1 0 1
*/


/*

Observation - When both i,j are either odd oe even, output==1 else 0


*/
cout<<"This program is to to print 0-1 Pattern of desired length"<<endl;

int m;
cout<<"Enter length";
cin>>m;

for (int i=1; i <= m; i++)
{
	for (int j = 1; j <=i; j++)
	{
		if (i%2==0 && j%2==0 || i%2!=0 && j%2!=0)// condition for either both odd or even.
		{
			cout<<"1"<<" ";
		}
		else {
			cout<<"0"<<" ";
		}
	}cout<<endl;
}
// Question 3
/* Print rhombus (n=5)
	    #####
	   #####
	  #####
	 #####
	#####
*/


/*
Way to think = Divide the given pattern into known figure
rhombus =    #             ####
            ##             ###
		   ###      +      ##
		  ####             #
		 #####
          (A)              (B)




*/
// Method-1 (self method)
cout<<"This program is to print rhombus of desired no. of columns"<<endl;
int o;//o== no.of rows==columns in given rhombus
cout<<"ENter no. of columns";
cin>>o;
for (int i= 1; i <= o; i++) // outer loop for n. of rows
{
	for (int j = 1; j<= o; j++)// loop for printing our known pattern , Pattern(A)
	{
		if (j>o-i)
		{
			cout<<"#";
		}
		else {
			cout<<" ";
		}
	}
	for (int j = o-1; j>=i; j--) // for Pattern (B)
	{
		cout<<"#";
	}cout<<endl;
}


// MEthod-2 (Space MEthod)
cout<<"This program is for priting rhombus of desired length"<<endl;
int p;
cout<<"Enter desired length";
cin>>p;
for (int i = 1; i<=p;i++)
{
	for(int space = p-1; space >= i; space --)
	{
		cout<<" ";
	}
	for (int j = 1; j<=p; j++)
	{
		cout<<"#";
	}cout<<endl;
}

cout<<"This program is to print Number Pattern"<<endl;
int q;// no. of element/row/column
cout<<"Enter maximum no. of element in pattern."<<endl;
cin>>q;

for (int i= 1; i <= q ; i++)//outer loop for no. of rows
{
	for (int space = q-1; space >= i; space--)// loop for inserting space.
	{// at i=1, 4 spaces ; i=2. 3 spaces so above relation is observed b/w no. of space,i , q.
		cout<<" ";
	}
	for (int j = 1; j<=i; j++)
	{
		cout<<j<<" ";//prints elemtent and space after element
	}cout<<endl;
}
// Question- Print Palindrome Pattern
/*     1
      212
	 32123
	4321234
   543212345

*/

// Key to think = Break the pattern
/*
       1              1      
      212            21           2
	 32123    =     321     +     23  
	4321234        4321           234
   543212345      54321           2345
     Question     (A)             (B)
	

(B) doesnot has any element for i == 1 means it strats from i==2.
*/
cout<<"This program is to print Palindrome pattern";
int r;// r - no. of rows
cout<<"Enter no. of rows."<<endl;
cin>>r;

for(int i = 1; i<=r; i++)
{
	for (int j = r; j >=1; j--) // for (A)
	{
		if(j<=i){
			cout<<j;
		
		}
		else {
			cout<<" ";
		}
	}
	if (i!=1) // for (B)
	{
	for (int j = 2; j<=i; j++)
	{
		cout<<j;
	}
	}
	cout<<endl;
}
// Question - Print Star Pattern

/*
	*
   ***
  *****
 *******
 *******
  *****
   ***
    *
*/
// Again just break the pattern - 
/*
Observation - Upper and lower parts are symmetrical
Left and right are also symmetrical

Each half is similar to Palindrome Pattern with element as asterik(*)
*/
int s;// no. of rows/2

cout<<"This program is to print star pattern of asterik"<<endl;
cout<<"Enter no. of rows"<<endl;
cin>>s;//store no. of rows in s.

// Divide it in upper and lower half and solve for each sequence wise
for(int i = 1; i  <= s; i++) // upper half
{
	for (int j = s; j>=1; j--)//leftmost
	{
		if (j<=i){ cout<<"*";}
		else { cout<<" ";}
	}
	if (i!=1){
		for(int j = 2; j<= i; j++)//rightmost
		{
			cout<<"*";
		}
	}cout<<endl;
}

for(int i = s; i  >= 1; i--)//lower half, it is similar to upper half and it is mirror image of upper half.// In upper half i increments.
//  So, as we go down in its mirror image,i decrements
{
	for (int j = s; j>=1; j--)// leftmost
	{
		if (j<=i){ cout<<"*";}
		else { cout<<" ";}
	}
	if (i!=1)//rightmost
	{
		for(int j = 2; j<= i; j++){
			cout<<"*";
		}
	}cout<<endl;
}

//Question- Zig-Zag Pattern
/*
  *   *
 * * * *
*   *   *

*/
int t;
cout<<"This program is to print Zig-Zag pattern of asterik"<<endl;
cout<<"Enter length of zig zag pattern."<<endl;
cin>>t;

for (int i = 1; i<= t/3; i++)
{
	
	for (int j = 1; j <=t; j++)
	{
		if (i%2==0 && j%2==0 || (i+j)%4==0)
		{
			cout<<"*";
		}
		else {
			cout<<" ";
		}
	}cout<<endl;
}
	return 0;
}