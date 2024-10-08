#include <bits/stdc++.h>

using namespace std;
 
 
// function to check given number is prime or not
// basic idea is numbers not divided by any primes are primes

int isPrime(int k)
{

    // Corner cases

    if (k <= 1)

        return 0;

    if (k==2 || k==3)

        return 1;

  

    // below 5 there is only two prime numbers 2 and 3 

    if (k % 2 == 0 || k % 3 == 0)

        return 0;

  

  // Using concept of prime number can be represented in form of (6*k + 1) or(6*k - 1) 

    for (int i = 5; i * i <= k; i = i + 6)

        if (k % i == 0 || k % (i + 2) == 0)

            return 0;

  

    return 1;
}
 
 
// function which gives prime at position n

int nThPrime(int n)
{

    int i=2;

     

    while(n>0)

    {

        // each time if a prime number found decrease n

        if(isPrime(i))

          n--;

        

        i++;  //increase the integer to go ahead

    }

    i-=1; // since decrement of k is being done before 

          //Increment of i , so i should be decreased by 1

    return i;
}
 

int main() 
{

    int n; cin >> n;
    cout << nThPrime(n);

    return 0;
}
