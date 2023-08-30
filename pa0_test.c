#include <stdio.h>
#include "pa0.h"

//Test main to help you debug PA0
int main() {
    //Test computeSquare
    double computeSquareInput = 8.5;
    double computeSquareExpectedOutput = 72.25;
    if(computeSquare(computeSquareInput) == computeSquareExpectedOutput) {
        printf("computeSquare test passed!\n");
    }
    else {
        printf("computeSquare test failed. Output was %lf, expected %lf\n", computeSquare(computeSquareInput), computeSquareExpectedOutput);
    }
    //Test gcd
    int gcdInput1 = 10, gcdInput2 = 15;
    int gcdExpectedOutput = 5;
    if(gcd(gcdInput1, gcdInput2) == gcdExpectedOutput) {
        printf("gcd test passed!\n");
    }
    else {
        printf("printSquare test failed. Output was %d, expected %d\n", gcd(gcdInput1, gcdInput2), gcdExpectedOutput);
    }
    //Test findSumPrimes
    int findSumPrimesInput = 15;
    int findSumPrimesExpectedOutput = 41;
    if(findSumPrimes(findSumPrimesInput) == findSumPrimesExpectedOutput) {
        printf("findSumPrimes test passed!\n");
    }
    else {
        printf("findSumPrimes test failed. Output was %d, expected %d\n", findSumPrimes(findSumPrimesInput), findSumPrimesExpectedOutput);
    }

    return 0;
}
