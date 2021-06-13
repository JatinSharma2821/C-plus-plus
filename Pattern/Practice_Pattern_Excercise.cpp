/*
Print Holow star 
   *
  * *
 *   *
*     *
*     *
 *   *
  * *
   *
*/
#include<iostream>
using namespace std;
int main()
{


cout<<"1st program is to print hollow star"<<endl;

int n;
cout<<"ENter n for hollow star"<<endl;
cin>>n;
int j;
for (int i = 1; i<= n; i++){

	for ( j = 1; j <= n; j++){
	if ((i+j)%(n+1)!=0){cout<<" ";}
	else {cout<<"*";}
	}
	int space = i-1;
	for (j = 1 ; j<= space; j++)
	{
		cout<<" ";
	
	}
	if (i!=1)
	{
		for (j = 1; j <=i; j++)
		{
			if (j==i){cout<<"*";}
			
		}
	
	}cout<<endl;


}

for (int i = n; i>= 1; i--){

	for ( j = 1; j <= n; j++){
	if ((i+j)%(n+1)!=0){cout<<" ";}
	else {cout<<"*";}
	}
	int space = i-1;
	for (j = 1 ; j<= space; j++)
	{
		cout<<" ";
	
	}
	if (i!=1)
	{
		for (j = 1; j <=i; j++)
		{
			if (j==i){cout<<"*";}
			
		}
	
	}cout<<endl;


}

cout<<"2nd program is to print hollow rhombus"<<endl;

int m;
cout<<"Enter length of rhombus"<<endl;
cin>>m;

for (int i = 1; i<=m; i++)
{

	for (int j = m; j>=1; j--)
	{
		if(j==i || (i==1 && j<=i) || i==m  ){cout<<"#";}
		else{cout<<" ";}
	}
	for (int j= m-1; j>=i; j--)
	{
		if(i==1||i==j)
		{cout<<"#";}
		else {cout<<" ";}
	}cout<<endl;

}


/*
	for (int j = m;j>=1; j--)
	{
		if(j==i)
		{cout<<"#";}
		else {cout<<" ";}
	}
	for (int j=1; j<=m-2;j++){
		if (i==1 || i==m ){
			cout<<"#";
		}
		else {cout<<" ";}
	}cout<<endl;

*/



















	return 0;
}