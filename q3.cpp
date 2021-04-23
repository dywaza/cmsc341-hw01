/*===============================================
I realize now that I probably built the version
of this program that has the really inefficient
asymptotic analysis.
However, this is 2018, and PC memory is so vast
that we basically won't have to worry about that,
right?
...
...
...
i just felt an odd shiver down my spine...
===============================================*/
#include <cstdlib>
#include <iostream>
using namespace std;

void printRandom(int C[], int n, int seed)
{
    srand(seed);
    bool isOut [n];
    int currIndex = -1;
    int random = -1;
    bool dooverFlag = false;

    for (int count = 0; count < n; count++)
    {
        isOut[count] = false;
    }

    for (int count = 0; count < n; count++)
    {
        do {
            random = (rand())%10;
            //cout << random << endl;

            if (isOut[random] == false)
            {
                dooverFlag = false;
                cout << C[random] << " ";
                isOut[random] = true;
            }
            else {
                dooverFlag = true;
            }
        } while (dooverFlag == true);
    }
    cout << "" << endl;

}

int main () {
    int A[10];
    int B[10];

    A[0] = 21;
    A[1] = -34;
    A[2] = 2;
    A[3] = -42;
    A[4] = 89;
    A[5] = 24;
    A[6] = 11;
    A[7] = 4;
    A[8] = 13;
    A[9] = -18;

    for (int count = 0; count < 10; count++)
    {
        B[count] = A[count];
    }
    printRandom(B,10,38172410);

    for (int count = 0; count < 10; count++)
    {
        B[count] = A[count];
    }
    printRandom(B,10,83103131);

    for (int count = 0; count < 10; count++)
    //i bet five bucks that future dylan is going to forget to remove this comment
    {
        B[count] = A[count];
    }
    printRandom(B,10,77192102);

    return 0;
}
