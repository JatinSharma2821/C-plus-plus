// Why to learn String when we have character array?
/*
Well, we can consider string as senior to character

Well once we have declared size of character array , we cannot change its size
While in String , pre declaration of size is not required 

Strings being Dynamic can be appended, shortened or even concatenated but char being static not possible.
For doing , appending character array we need to declare it initially with larger size.
*/
/*
1. String declaratrion
2. merge/concatenation
3. compare - compares lexicographically
4. empty() --- boolean operator
4.1 clear() -- replace characters of string with dashes
5.size/length
6. erase
7. stoi - string to integer
8. to_string - to string
9. insert()
10. replace
11. find
12. s.begin() , s.end()
13. reverse



*/

#include<iostream>
#include<string> // for working with strings
#include<algorithm>




using namespace std;
int main()
{
    string s1 = "JatinStud";
    string s2 = " SharmaS ";
    string s3 = "abc";
    string s4 = "xyz";

    cout<<s1<<endl;
    cout<<s1.append(" Ji ")<<endl;    // append - concatenates
    cout<<s1 + s2 <<endl; // concatenate

    string test = "Trial of clear";
    test.clear();
    //cout<<<test<<endl;// as the clear name sounds , it will clean complete string and replace dashes with original element..

    cout<< s4.compare(s3) <<endl; // strcmp replacement in C++ // can be used for checking equality
    // s1 = transform(s1.begin(),s1.end(),toupper(s1));
    cout<<s4<<endl;
    s4.clear();
    if(s4.empty())
    {
        cout<<"Yeah, it is empty"<<endl;
    }

    cout<<s1<<endl;
    s1.erase(5,4);  
    // erases element of strings, two arguments required , 1st is index no from where to start erasing  , 2nd is how much characters to be erased
    s1.insert(5," Sharma "); // inserts character, again two arguments , 1- index no @ which to insert , 2nd - characters to be inserted.
    cout<<s1<<endl;
    s2.pop_back();// removes last character

    string s6 = "Trial work";
    s6.replace(3,3,"YOO"); // replaces range of characters.
    cout<<s6<<endl ;

    // it finds index no. of passed argument in corresponding string.
    cout<<s6.find("YOO")<<endl; // if we pass character that is not present in string , then it will give some random address of it.
    cout<<s1.find("Jatin")<<endl;
    

    cout<<s1.substr(4)<<endl; // will give substring starting from index no as argument passed.

    cout<<s1.substr(4,4)<<endl; // second argument is for length of substring

    // int x = stoi(s1); -- this will show error bcz a numerical string can be converted to int numerical and vice-versa but not alphabetical/alphanumerical
    string s7 = "8122";
    int x = stoi(s7);
    cout<<x<<endl;// being int arthimetical operations can be performed .
    cout<< x + 2 <<endl;

    cout<<to_string(x)<<endl;
    cout<<to_string(x) + " 1703";

    string sorttrial = "zyxwvutsrqponmlkjihgfedcba";
    cout<<"Unsorted string = "<<sorttrial<<endl;
    sort(sorttrial.begin() ,sorttrial.end());// for sort() we need to incliude algorithm header file
    cout<<"Sorted String = "<<sorttrial<<endl; // sorts lexicographically.
    cout<<endl;
    reverse(sorttrial.begin(), sorttrial.end());// reverses string
    cout<<" Reverse String = " <<sorttrial<<endl;
    return 0;
}
