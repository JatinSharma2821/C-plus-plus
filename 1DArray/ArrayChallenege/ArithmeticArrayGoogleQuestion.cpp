// Google Kickstart question


//Arithmetic array is Arithmetic Progression array
// Basicsally consisting of atleast two elements and having same consecutive difference

// [9,10] [1,2,3,4] [3,3,3] are arithmetic array 
// whilst [9, 7 ,2, 1] [ 2,0,5,-1] are not subarray.

/*
Question - Sarasvati has an array of N non negative integers. The i-th integer of array is Ai
She wants to choose a contigous arithmetic subarray from her array that has maximum length.Please
help her to determine the length of logest contigious arithmetic subarray.

[1,5,2,4,6,3,5,7,9,11,13,6]
Approach - Store difference of first two values in a variable
		compare difference b/w two next consecutive elements and if equal to stored value means part of arithmetic subarray.
		Way to check length declare a variable with initilised t 0 and keep on incrementing if condition satisfied.






Time Constraint  = 20 sec ---
Case 1 1<=N<=2000
Case 2 2000<N<=2*10**5

 In 1 second approximatley 10**8 operations occur
In 20 sec --- no. of operations occuring == 2 * 10*9
Now relating it with time complexity , 
Case 1 - O(n**2) =  4*10**6 < total no of operations  -- means  will work fine
Case 2 - O(n**2) =  4*10**10 > total no of operations so will not work
*/
#include<iostream>
using namespace std;
int main()
{
	
	int n;
	cin>>n;

	int arr[n];

	for (int i =0; i<n; i++)
	{
		cin>>arr[i];
	}
//  9 10 --- 3 3 3 -- [1,5,7,9,13] -- [1,5,2,4,6,3,5,7,9,11,13,6]
	int len = 2;  // declaring length for current arithmetic contigous subarray... intiatied with two because minimum length of AP array can be two only.
	int pd = arr[1]-arr[0]; //As per approach , we stored our first two elements difference // pd = previous difference
	int ans = 2;// declared for answer-- initiliased with two bcz minimum len of AP array - 2
	
	
		
		for(int j = 2;j<n;j++) //j starts from 2 because pd already contains difference upto j=1
		{// aar = [ 1,5,7,9,2,4,6,8,10] - 

		// What we are doing in this code?
		// defined pd.. if next two elements  difference == pd; means they are also part of arithmetic subarray we made first. so, len++ and becmoes =3 giving len =3
		// if difference !=pd, means now string is broken so we  need to start our array again with currently working array so again initiliased len = 2. 

		// example - In aar(defined above) initially pd = 4,
		// @j=2 difference = 2!= pd -- means now string need to break bcz these currenly working elements are not in AP so new pd = new difference = 2 and as we are starting again with new array so again need to start len as 2. So len =2
		// j=3 ; diff = 2 ==pd , so len++ , ; len=3
		// j=4 ; diff = -7 != pd ; new pd = -7 , len again becomes 2, len=2
		// j=5 ; diff = 2 != pd; new pd = 2  ,len again becomes 2, len=2
		// j =6; diff = 2 == pd, len++ and becomes =3
		// j=7; diff = 2 == pd; len++ and becomes 4
		// j =8 ; diff = 2 == pd; len++ and becomes 5
			if ((arr[j]-arr[j-1]) == pd)
			len++;
			else {pd = arr[j]-arr[j-1];
			len = 2;// assigned two  because string got break so need to work with new string having atleast two elements
			}
			ans = max(ans,len);
		}cout<< ans << endl;
		return 0;
		
		
} 

