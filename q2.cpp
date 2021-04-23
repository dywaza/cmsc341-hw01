#include <iostream>
using namespace std;

void initialize (int*& pot, int sizeOf);

int main() {
    int *ptr ;
    int n = 10 ;
    initialize(ptr,n);

    for (int i=0 ; i < n ; i++)
        {
            cout << "ptr[" << i << "] = " << ptr[i] << endl ;
        }

    int sum = 0 ;
    for (int i=0 ; i < n ; i++)
        {
            sum += ptr[i] ;
        }
    cout << "Sum = " << sum << endl ;
    delete [] ptr ;


    int *ptr2 ;
    initialize(ptr2,15) ;
    sum = 0 ;
    for (int i=0 ; i < 15 ; i++)
        {
            sum += ptr2[i] ;
        }
    cout << "Sum = " << sum << endl ;
    delete [] ptr2 ;
}

void initialize (int*& pot, int sizeOf)
{
    pot = new int [sizeOf];
    for (int countup = 0; countup < sizeOf; countup++)
    {
        pot[countup] = countup;
    }
}

