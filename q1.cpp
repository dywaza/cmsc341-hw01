#include <iostream>
#include <stdlib.h>
using namespace std;

class Two {
public:
    int part1;
    int part2;

};

int main () {

    int arrSize = 10;
    Two * dp[arrSize];


    for (int count = 0; count < arrSize; count++)
    {
        dp[count] = new Two();
        dp[count]->part1 = 0;
        dp[count]->part2 = 0;
    }



}
