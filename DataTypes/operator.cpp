#include<iostream>
using namespace std;
int main() {
    // types of Operator 

    //1. Arithmetic Operator = Binary  (Dual Operand) and Urinary (Single) (Pre/Post increment)
    // Binary = +,-,*,/,%
    // Urinary - ++i (Pre) i++ (post)
            int b,d;
            int a = 10;
            b = ++a; // 'a' increments itself first and get stored in 'b wiht incremented value'
            cout<<a<<" "<<b<<endl;

            int c = 10;
            d = c++; // Here as the name suggets post, C will be incremented post storing value in d.
                // First c with its inital value gets stored in d
                // and gets incremented later
            cout<<c<<" "<<d<<endl;
            // Basic Program to understand

            int i = 1;

            i = i++ + ++i; // In i++, it is post increment operator so first it will reserve its initial value 
            //and will give initial value in output  (i == 1) and later gets incremented making i==2

            // Coming to ++i, it is pre incremental operator so it first gets incremented and then gives output
            // New i==2 so it will increment first giving  output later as 3

            // So, i++ == 1 and ++i = 3
            // i++ + ++i = 1 + 3 = 4
            cout<<i<<endl;


        // Another example 

        int e = 3;
        int f = 4;
        // int g = 3*++e; (Try to sove later)

        int j = e + f + ++e + ++f + e++ + f++; //++g + g++;
        cout<<j<<endl;
        cout<<e<<""<<f<<""<<j<<endl;


        // Another exapmle
        int l = 1;

        int m = l++ - --l + ++l - l--;
        cout<<l<<" "<<m<<endl;


        // Final Example

        int p = 10, q = 20, r;

        r = p-- - p++ + --q - ++q + --p - q-- + ++p - q++;
        cout<<p<<endl;//10
        cout<<q<<endl;//20
        cout<<r<<endl;//-20


    //2. Relational Operator - Compares two objects - Gives bool value
        // Write a program to check whether z is greater, equal or less than 10
            int z,y;
            cout<<"Enter z"<<endl;
            cin>>z;

            y = 10; // Use if elseif else
            //Switch not applicable here
            
        //   switch (z,y)
        //
        //    {
        //   case 'z==y':
        //        cout<<"Both are equal";
        //        break;

        //    case 'z < y' : 
        //        cout<<"Entered no. is less than 10.";
        //        break;

        //    case 'z > y' :
        //        cout<<"Entered no. is greater than 10.";
        //        break;
            
        //    default :  
        //        cout<<"Comparision not available";
        //       break;
        //    }


// 3. Logical Operator - &&, || , !
    // Write a program to check wheher a no. is divisible by both A&B or divisible by one of them.

        int w;
        cout<<"Enter w"<<endl;
        cin>>w;

        int x = w%2 == 0 && w%3 == 0;
        int o =  w%2 == 0 || w%3 == 0;

        cout<<x<<endl;
        cout<<o<<endl;

        cout<<"Enter w"<<endl;
        cin>>w;

        bool x1 = w%2 == 0 && w%3 == 0;
        bool o2 =  w%2 == 0 || w%3 == 0;

        cout<<x<<endl;
        cout<<o<<endl;

        int a1 = !(5); // Logical operator works by treating everything as True(1) and False(0)
        cout<<a1<<endl; // !(True) = False = 0

        bool a2 = 5&&6;// True && True = True = 1
        cout<<a2<<endl;

        bool a3 = 5&&0;//; True && False = False = 0
        cout<<a3<<endl;



 //   4. Bitwise Operator - As the name suggets,  works on bits (convert everything into bits first and then perform opertation.)
    //       4.1 - And (&) (Works like Truth Table)
            int a4 = 8; // (1000)
            int a5 = 10;// (1010)
            int a6 = a4&a5;
            cout<<a6<<endl; //(expected output - 1000 = 8 in decimal)

    //       4.2 - Or(|) (works like Truth Table)
            // int a4 = 8; // (1000)
            // int a5 = 10;// (1010)
            int a7 = a4 | a5;
            cout<<a7<<endl;// (expected output = 1010 = 10 in decimal)


    //       4.3 XOR (^) (If both same so gives = 0 else 1 )
            int a8 = a4^a5;
            // int a4 = 8; // (1000)
            // int a5 = 10;// (1010)
            cout<<a8<<endl;// (expected output = 0010 = 2 in decimal)
        
    //      4.4 Complement (~) (Complement of 1 = 0 and of 0 = 1, works on this prinicipal only and replace 1 with 0 and 0 with 1)
            // int a4 = 8; // (1000)
            // int a5 = 10;// (1010)
            int a9 = ~a4;// (expected output = -9)
            cout<<a9<<endl;

    //      4.5 Left shift - Shifts the bits of given given no. towards left by required value.
            int a10 = a8>>3;// (expected output = 64) (formula = a*2^n)
            cout<<a10<<endl;


    //      4.5 Right shift - Shifts the bits of given given no. towards right by required value.
            int a11 = a8<<3;// (expected output = 1) (formula = a/2^n)
            cout<<a11<<endl;

// 5 Assignment Operator  - Assigns value of right operand to left operand
//         Operators - = , +=, -= , *=, /= .etc.
            int a13 = 20;
            a13 -= 5; // it means a13 = a13 - 5..// As said above value of right operands (a13 - 5) gets assigned to left operand (a13)
            cout<<a13;
            // Same phenomenon for all other Assignment Operator


// 6. Miscallenous Operator - 
        //6.1 - sizeof() - gives size of passed argument.
        cout<<sizeof(10)<<endl;
    
        //6.2 Ternary/Conditional Operator - ?X:y = gives X if condition is ture else y// used in place of if else if possible, shortens the code
        int a14 = 15;
        int a15 = 30;
        int a16 = a14>a15 ? a14/a15 : a15/a14;
        cout<<a16;

        //6.3 Cast operator - Convert one data type to another
        // a14 is int as declared earlier
        cout<<char(a14)<<endl;// expected output - character having ascii encoding as 14

        //6.4 Commq(,) - Useful writing sequence of integer
        // for e/g- int a,b,e,c,d .// with the help of comma operator we declared 4 variables simultaneously
        int a16 = (2,3,4,5); // Here varible will take lastmost value so value assigned to a16 is 5

        //6.5 Reference OPerator (&) - Gives address of variable // like id gives address in python
        cout<<&(a16)<<endl; // Gives address of 16

        //6.6 Pointer (*) - Pointer to a variable
         int * a17 = &(a16);
        return 0;
    }