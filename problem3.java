/* 
Problem 3
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/
#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

int main()
{ long long int a =600851475143;
long long int sroot = sqrt(a);

 for(long long int i=1 ;i <a;i++){
    if(a%i==0){
        if(isPrime(i)){
            cout<<i<<"is a prime number"<<"\n";

        }
    }
 }

    return 0;
}
// Answer is 6857
