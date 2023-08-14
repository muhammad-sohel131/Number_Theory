#include<iostream>
#include<vector>
using namespace std;

int countPrimeNumber(int n){
    int countPrime = 0;

    bool primes[n+3];

    for(int i = 2; i <= n; i++){
        primes[i] = false;
    }

    for(int i = 2; i*i <= n; i++){
        if(!primes[i]){
            for(int j = i*i; j <= n; j+=i){
                primes[j] = true;
            }
        }
    }

    for(int i = 2; i <= n; i++){
        if(!primes[i]) countPrime++;
    }

    return countPrime;
}

int main(){
    int test, n;
    cin >> test;

    while(test--){
        cin >> n;
        int primes = countPrimeNumber(n);
        cout << "There are " << primes << " prime number upto " << n << "\n";
    }
}
