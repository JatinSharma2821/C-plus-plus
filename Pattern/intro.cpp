#include <iostream>
using namespace std;
int main() {
    int col;
 char design = '*';
 cout<<"Enter no. of Col"<<endl;
 cin>>col;
 int row;
 cout<<"Enter no. of row";
 cin>>row;
    for (int column = 1; column <= col; column++){
    for (int ro = 1; ro <= row; ro++)
        {
        cout<<design;
        }
        cout<<endl;
    }
//    int col1;
//    cout<<"Enter no. of column"<<endl;
//    cin>>col1;
//    for (int c = 1; c <= col1; c++)
//    {       for (int r = c ; r <= c ; c++ )
//            {
//            cout<<design;
//            }cout<<endl;
//        
//    }

int col1;
int row1;
cout<<"Enter col1"<<"Enter row1"<<endl;
cin>>col1>>row1;
for (int co1 = 1; co1 <= col1; co1++)
{
for (int ro1 = 1; ro1 <= row1; ro1++){
    cout<<design<<endl;
    if (co1 = 1 , col1 ) {continue;}
}
cout<<endl;

}
    

    return 0;
}
