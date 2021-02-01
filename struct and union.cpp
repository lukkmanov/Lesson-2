#include <iostream>
using namespace std;

typedef union vr {
    int i  ;
    char c ;
    float f ;
} vr;
struct comp {
    union vr val;
    int isint  :1 ;
    int isfloat:1 ;
    int ischar :1 ;
};

int main()
{
 comp eu;
 eu.val.c='S';
 eu.val.f=4.5;
 eu.val.i=4;
 eu.ischar = 0;
 eu.isfloat = 0;
 eu.isint = 1;
   cout << "Is Float "<<eu.isfloat << endl  ;
    cout <<"Is Int "<< eu.isint << endl  ;
     cout <<"Is Char "<< eu.ischar << endl  ;

     cout << eu.val.c << endl;cout << eu.val.f << endl;  cout << eu.val.i << endl;

    return 0;
}
