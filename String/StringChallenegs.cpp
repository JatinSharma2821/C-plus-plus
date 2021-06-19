/*
in short - 
toupper/tolower - transform/ASCII Encoding
form biggest number from string




*/

#include<cmath>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str;
    cout<<"Enter string"<<endl;
    getline(cin,str);
    int n = str.length();
    int x;
    cout<<"Choose 1 for converting to uppercase \n 2 for converting to lowercase"<<endl;
    cin>>x;


// Using ASCII Encoding
switch (x)
{
case 1 :
for (int i = 0; i < n; i++)
{
    if(str[i] >= 'a' && str[i] <= 'z') 
    {
        char t = str[i] - (char)32;
        cout<<t;
        
    }
    else
    {
        cout<<str[i];
    }
}   
    
    break;
    

case 2 :
for (int i = 0; i < n; i++)
{
    
    if (str[i] >= 'A' && str[i] <= 'Z') 
    {
        char t = str[i] + (char)32;
        cout<<t;
        
    }
    else
    {
    cout<<str[i];
    }
}   
    
    break;
default:
    cout<<"segmentation fault";
    break;
}

cout<<endl;
 // Using in-built function to transform
 // function name is also transform

string s;
// getline() cin  and stores it in second argument passed;
getline(cin,s);
/*

 transform(begining of string, ending of string, index num from where to start,::output-result-type);
 in transform() ,  4 arguments are to be passed
 1-2. Complete string in form of - s.begin() , s.end()
 3. index number from where to start
 4. output-result-type -- like toupper.tolower

*/

transform(s.begin(),s.end(),s.begin(),::toupper);
cout<<s<<endl;;

string s1;
cout<<"Enter numerical string"<<endl;
cin>>s1;
/*
int m = s1.size();
int st = 0; // s refers to starting
int en = m-1; //en refers to ending
while(true)
{
    if(s1[st] < s1[en])
    {
        int temp = s1[st];
        s1[st] = s1[en];
        s1[en] = temp;
    }
    
        if(s1[st] == '\0' || s1[en] == '\0')
    {
        break;
    }

    

    en--;
    if(en == st)
    {
        st++;
        en = m-1;
    }

}

*/
sort(s1.begin(),s1.end());
reverse(s1.begin(),s1.end());
cout<<s1<<endl;
string s2;
cout<<"Enter s2"<<endl;
cin>>s2;
int k = s2.size();
int count = 0;
int ans = -99999;
char repalpha;// for storing repeating charcater
// abcdabcabda
sort(s2.begin(),s2.end());
/*
for(int i =0; i<k ; i++)
{
    count = 0;
    for(int j = i; j <k; j++)
    {
        if(s2[i]==s2[j])
        {
            count++;
            ans = max(ans,count);
        }
        else
        {
            break;
        }
        if(ans==count)
        {
            repalpha = s2[i];
        }
        
    }
}
*/
// optimal approach

// make an empty array of size 26(==total alphabets) with each element zero and increment each element as repetion of chcracters in string increases.

int empty [26];
for(int i =0; i<26 ; i++)
{
    empty[i] = 0;// made each element as 0
}
for(int i = 0; i<26 ; i++)
{
    empty[s2[i] - 'a']++;
    // initially each element is zero : lets say i = 0, s2[i] = b so , s2[i] - 'a' = 1 ,so empty[1] will be incremented once 
    // and in the same way every element willl be incremeneted ,
    // now lets say b is repeating element and s2[5] = b also ,
    //so s2[5] - 'a' = 1 so empty[1] will be incremeneted again and
    // now at position 1 in empty 2 will be the new element in this way , 
    // we will get maximum element representing most occuring element

}

for (int i = 0; i<26; i++)
{
    if(empty[i]>ans)
    {
        ans = empty[i];
        repalpha = i + 'a';
    }
    
}

cout<<ans<<endl;
cout<<repalpha<<endl;

    return 0;
}