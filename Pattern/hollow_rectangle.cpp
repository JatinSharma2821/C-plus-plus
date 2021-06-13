// Type - 1
// Write code for hollow rectangle
//	#####
//	#   #
//	#   #
//	#   #
//	#####
//

#include <iostream>
using namespace std;
int main()
{
int col, row;
char element;
cout<<"Enter col "<<" Enter row "<<" Enter element "<<endl;
cin>>col>>row>>element;
for (int i = 1; i <= col; i++) 
{
for (int j=1; j <= row; j++) {
  if (i == 1 || i == col || j == 1 || j == row)
  
	  cout<<element;
  
  else  
	  cout<<' ';
	  
}cout<<endl;
}





return 0;
}