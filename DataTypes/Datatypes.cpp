// Data Types 
// Primitive, Derived, User Defined
// Primitive - int, float,char, bool . 
// Derived - Functions, Arrays, Pointers , Reference
// User Defined - Class, Structure, Union, Enum

// Primitive :
// 1.  Int - 4 bytes = 32 bits. Max no. = 2^32,( From all 0 to all 1 ) 
        //      Range (Unsigned) = 0 to 2^32 - 1
        //      Range (Signed ) =  -2^31 to 2^31 - 1 
        // One may think that range (unsigned ) is why not just negative of Range(signed)
            //      Why? Concept - To represent negative integer we just write MCB as 1 . 
            // So for 0 two case arises - 10000000 (-0) and 00000000 (+0), but it does not make any sense. So, we consider +0 only. So now bits left = 31 So Rsnge = -2^31 to 2^31 - 1

//  2. char - 1 byte = 8 bits, MAx no - 2^8 ( From all 0 to all 1 ) Range - 0 to 2^8 - 1
        // we use ASCII encoding for storing char.
        // Representation - int ascii = 'a'
        //                  cout<<ascii = 91.




//  3. float = 4 bytes . can store max upto 7 decimal digits 

//  4. double - 8 bytes for storing upto 15 decimal digits
// double - 8 bytes - 64 bits --- used to represent float with more precision upto larger decimal places


// 5. bool = 0(False) or 1(True) = 1 byte 


// 6. void - void means nothing -- basically it is not a data type --- output return type can be void --
        // void func_name() -- refers to function that does not return something -- 
        // argument of function can be void s


//    7.  - string - series of char - 
//          words, paragraph are all string types



// 8. - Structure - Structs - grouping int , string ,etc. into one data type and using them -- sounds interesting

// 9  - Defined types --- defining own data types.....



#include<iostream>
using namespace std;
int main()
{
        string name;
        cin>>name;

        int len = name.size() ;

        for (int i=0; i<=len; i++)
        {
                cout<<name[i];
        }
        cout<<endl;



        return 0;
}