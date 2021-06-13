/*
Pointer is a variable that stores the address of variable.
Data type of pointer == Data type of variable to which pointer is referring.

int a = 10;
int *aptr ; // pointer declared
aptr = &a ----- aptr named pointer linked to variable a;

cout<<a; // gives 10
cout<<aptr;// gives address of a, for example say - 1000

aptr++;
cout<<aptr;
// now we expect answer to be 1001 but answer will be 1004 ---- bcz pointer skips memory equal to its data type taking space of memory
// further clarification - data type of aptr -- int , and int takes 4 bytes so each incrementation of  int pointer will be (initial + 4)

// cout<<*aptr;  // answer is value of  a == 10
for understanding imagine as aptr is itself a pointer and pointer to same pointer cancels the effect of pointer gives value of variable
*aptr -- is known as Degeneracy of pointer ----- same as deactivating its power

MAking another pointer to a pointer - 


int *bptr = &aptr // bptr is pointer to a pointer means it is storing address of pointer p.

cout<<*bptr; // gives address of aptr
cout<<**bptr // gives value of a // here we have degenrated bptr two times so for understanding we can think like pushing bptr two steps back

*/

#include<iostream>
using namespace std;
int add(int a, int b);
void add1(int *a,int *b);

int main()
{
	int a = 10 , b = 20;
	add(a,b);
	cout<<a<<" | "<<b<<endl; // here we expect a = 11 and b = 21 // but a is still 10 and b is still 20
	// due to Pass By Value phenomenon

	// So to deal with it we use pointer
	
	add1(&a,&b);//
	cout<<a<<" | "<<b;



	return 0;
}
int add(int a,int b)
{
	a++;
	b++;
	return a,b;
}
void add1(int *a,int *b)
{
	*a++;
	*b++;
	 
}