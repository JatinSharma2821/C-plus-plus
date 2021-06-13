/*
Print Spiral Order Matrix Transversal -
1 2 3
4 5 6    ------ Spiral Order Matrix Transversal  - 1 2 3 6 9 8 7 4 5
7 8 9
As the name depicts it will be similar to spiral motion.

*/


#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    
   int arr[n][m];
   
   for (int i =0;i<n;i++)
   {
       for (int j=0; j<m; j++)
       {
           cin>>arr[i][j];
       }
   }
    // 1 2 3
           
/* This is what i tried first
but issue here is after every iteration c = n-1 & r = n-1 so they donot go inside loop

    int r=0;// variable for iterating row
    int c=0;// column
    while (c<n && r<n)
 {   
     while (c<n)// 
     {
         cout<<arr[r][c]<<" ";//c = n-1 -- max value of c --- here r will be zero and c will be incremented
         c++; 
     }
     
     r++;
     c = n-1; --- Issue 1
     if (c==n-1){
         do
         {cout<<arr[r][c]<<" ";
         r++;}
         while(r<n);
     }
     c--;
     
     
     r==n-1; ---- Issue 2
     if (r==n-1)
     {
         do
         {cout<<arr[r][c]<<" ";
         c--;}
         while(c>=0);
     }

     r--;
     c = 0;  ---Issue 3
     if (c==0)
     {
         do {
             cout<<arr[r][c]<<" ";
             r--;
         }
         while(r>=0);
         
     }
     c++;
     
    }
     
    

*/




/*
Corerct solution solving these bugs */


	/*

	consider 3*3 array - 1 2 3
					     4 5 6
						 7 8 9


	*/

int row_start = 0, row_end = n-1 , column_start  = 0, column_end = m-1; // as their name specifies they have created for that purpose 

while (row_start<=row_end && column_start<=column_end)
{// row_start = 0;
// printing first row ---- arr[0][column]

	for (int col = column_start; col<=column_end; col++)// for first row
	{
		cout<<arr[row_start][col]<<" ";
	}// by now we have printed 1st row  - 1 2 3

	// now need to keep pointer at column_end and print row elements hat column;
	row_start++; // if we donot increment it here , it will print correspoding row element two times like 1 2 3 3
	for (int row = row_start; row<=row_end; row++)
	{
		cout<<arr[row][column_end]<<" "; // prints last column /// - output - 1 2 3 6 9
	}

	// now pointer is at last (row,element) -- keeping row constant , need to decrement column;

	column_end--;
	for (int col = column_end; col>=column_start ; col--)
	{
		cout<<arr[row_end][col]<<" "; // prints last row
	}
 // now pointer  at (3,1) == (row,column) .... so no column no will decrease 
	row_end--; // 
	for (int row = row_end; row >= row_start; row--)
	{
		cout<<arr[row][column_start]<<" ";
	}
	column_start++;


}

    return 0;
}
