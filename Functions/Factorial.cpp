// Here it is first program for learning about fuctions
// Here, we will try to learn concept through factorial trial.

#include<iostream>
using namespace std;

// while defining a function first output-return-type is specified .
// then name of function... argument with  their data types are written in paranthesis
int func_factorial(int n)// int is output-return-type
{
	int c = 1;
	for (int i = 1; i <= n; i++)
	{
		c = c*i;
	}
return c;
	
}

int main()
{
int n; // arguments are declared
cout<<"Enter no.1"<<endl;
cin>>n;



int factorial = func_factorial(n);// function is called ---- point to note is while calling func arguments are passed without their datatypes.

cout<<factorial;


	return 0;
}
// for understanding important topics, how the functions are called or we can say Control Of Flow is quintessential to understand.
// This all happens thourgh Stack--- similar to inserting paper in basket one by one then removing one by one
// The last paper added will be removed first so it will be sort active among other.

 /*
 Memory allocated for executing instruction is called Process.
Main Memory allocate part of memory to process.        

|______Main Memory_____|
|                      |
|  |__Stack Segment__| |
|  |__Data  Segment__| |
|  |__Code  Segment__| |
|                      |
|                      |
|______________________|

Allocated Memory is also classified into three categories ; -
1. Stack Segment - Stores Call Stack
2. Data Segment - Dynamically allocated Data //(will study later)
3. Code Segment - Stores instructions which has to be exceuted.



// We need to store information about function calls that allows access to Last-in-First-out (LIFO).
// Call Stack gives us this access.
// Call Stack is like Stack of paper .
// Imagine we added paper1 first then above it paper2 and then paper3..Now when taking  paper out, the first paper will be paper3 
// But wait we added it in the last. So, this is the concept..Last-in-First-Out


// While entering to callee function, instruction that allows entry has some address in main memory allocated memory for process.
// Whilst returning back to caller function , we want the program to resume from the instruction where it entered.
// So, for that we need to save the address while entering.

// Program Counter(PC) saves this address to caller function.
// Program Counter - Lives in Present - Holds the address of currently exceuting instruction
//                   Also, PC stores values of local variables in callee function.


// Caller function calls callee function.
// At the time of entry to calle fncction.
// Entry is called Activation Record/Frame.


// Entry - // While OS calls Main() ; Activation record of Main() gets stored in Call Stack
        // Main() calls myencoded() :  Activation record of myencoded gets stored in Call Stack. Variables of Main gets stored in myencoded
        // myencoded() calls power() :  Activation record of power() gets stored in Call Stack.  Variables of myencoded()  gets stored in myencoded

Main()-myencoded()-power()-are three types as per their order of execution.
// In this way information about flow of control gets stored.
//
// Return - // Last-in-First-out comes into role. 
*/