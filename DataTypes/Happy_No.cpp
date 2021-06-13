#include <iostream>

using namespace std;
int Happy_Num(int num)
{
    int a,cycle_no,result,n;

    for  (cycle_no = 1; cycle_no <= 10 ; cycle_no++ ) // cycle_no - for each outer iteration
    { {if (cycle_no. == 1) { num = num;}
     else {num = result; }

      for (int i = a ; i <= n ; i++)
      {  a = num%10;
        a = (a*a) ;
        cout<<a ;
        num = num/10 ;
        result = result + a ;
        cout<<result;
        if (result == 1) { cout<<num<<"is a Happy Num"<<cycle_no ; break; };
      }
    }



}

int main()
{
    int num,n,result;
    result = 0;
    cout<<"Enter lenght of no";
    cin>>num;
    cout<<"Enter the no,";
    cin>>num;
    cout<< Happy_Num(num);
    cout<<"Enter result"<<result;
    return 0;
}
