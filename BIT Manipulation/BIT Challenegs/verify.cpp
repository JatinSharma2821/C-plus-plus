/*
Concept
How does XOR works ? 
Trick to remember  -
    1) We used it in BIT manipulation means it has to do something with 0 & 1
    2) XOR sounds like logical OR ( | ) so its working is also little bit similar to OR.
    3)          OR      XOR
        0   1    1       1    ---
        1   0    1       1      | ----    similarity
        0   0    0       0    ---

        1   1    1       0    --------     difference

XOR operator is denoted by ^










Case 1- If array has only one unique element 
    array = [1,2.4,3,1,3,2]


    consider an array having every element twice except one unique number. Find that unique number

    XOR of evenly reeating number is 0.

    Unqiue number refers to - 4.

    Approach - Here we will be using XOR operator i.e, - ^




Case 2 - Finding two unique elements
    int arr[] = {1,2,3,4,2,1};

    Analysis - Two unique num = 3,4
    3 ^ 4 = 11 ^ 100 = 111 , we can see XOR output has setbit at pos - 0,1,2
     it means one of element participating in  XOR event has setbit has pos 0,1,2,


    So we will transverse over only those elements having setbit at pos - 1 ,
    lets say output of this process as output2 , output2 will give us one unique element
    and then we will take output ^ output , it will give us second unique element.


*/

#include<iostream>
using namespace std;

int uniquenum(int arr[], int n)
{
    int unique = 0;
    for(int j = 0; j < n; j++)
    {
        unique ^= arr[j];
    }
    if(unique)
    cout<<unique<<endl;
    else
    cout<<"No unique number"<<endl;
}

int checksetbit(int allxor, int arr[], int oneelement, int n)
{ // 11 100 - 111
     // represents of one of two unique element
    
    
    for(int j = 3; j>=0; j--)
    {
    if(allxor & (1<<j)) // 00000111
    {
        cout<<" (1<<j)  = "<<(1<<j)<<endl;
    for(int k = 0; k < n ; k++)
    {    
        if(arr[k] & 1<<j)
        {
            cout<<"| element of arr = "<<arr[k]<<" ";
            oneelement = oneelement ^ arr[k];
            cout<<" oneelement = "<<oneelement<<"  | "<<endl;
        }
        

    }
        
        break;
    }
    }
    
}
void twouniquenum(int arr[], int n)
{ // 1 2 3 4  2 1 ; xorsum = 7
int allxor = 0; // represents XOR of whole array ie, xorsum
int oneelement = 0; // will give one element
    for(int j = 0; j<n; j++)
    {
        allxor = allxor^arr[j];
    }
    // cout<<allxor<<endl;

    oneelement = checksetbit(allxor,arr,oneelement,n);
    cout<<oneelement<<endl;
    int secondelement = oneelement ^ allxor;
    cout<<oneelement<<endl;
    cout<<secondelement<<endl;


}
int main()
{
    int n ;
    cin>>n;
    
    int x;
    cout<<"1. Single Unique Number \n2. Two Unique number."<<endl;
    cin>>x;
    int arr[n];

    switch (x)
    {
    case 1:
        
        for(int i = 0; i<n; i++)
        {
        cin>>arr[i];
        }

        uniquenum(arr,n);// it prints unique number

        break;
    
    case 2:

        for(int j = 0; j<n; j++)
        {
            cin>>arr[j];
        }
           twouniquenum(arr,n);

        break;
    default:
        cout<<"Run again and select between 1 and 2."<<endl;
        break;
    }
    
    
    
 




    return 0;
}