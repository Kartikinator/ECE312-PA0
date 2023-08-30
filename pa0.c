// ECE 312 PA0
// Kartikeya Gullapalli
// kg34398
// Slip days used: 0
// Fall 2023
#include "pa0.h"

double computeSquare(double x) {
    
	return x * x;
}

int gcd(int y, int z) {
    int gcd = 0;
    int min;

    if(y > z) {
        min = z;
    } else {
        min = y;
    }

    for(int i = 1; i <= min; i ++) {
        if (y % i == 0 && z % i == 0) {
            gcd = i;
        }
    }

	return gcd;
}

//Given function to be used in findSumPrimes
//Returns 1 if num is prime and 0 if num is not prime
int isPrime(int num) {

    if (num <= 1) return 0;
    if (num % 2 == 0 && num > 2) return 0;
    for(int i = 3; i< num / 2; i+= 2)
    {
        if( num % i == 0 ){
            return 0;
        }
    }
    return 1;
}

int findSumPrimes(int x) {

    int sum = 0;
    
	for(int i  = 1; i <= x;i++) {
        if(isPrime(i)) {
            sum += i;
        }
    }
	return sum;
}

