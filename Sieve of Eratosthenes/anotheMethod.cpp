#include<iostream>
#include<vector>
using namespace std;

int countPrimeNumber(int n){
    int countPrime = 0;
    int trueCount = 0;

    vector<bool> primes(n+2, false);


    for(int i = 2; i*i <= n; i++){
        if(!primes[i]){
            for(int j = i*i; j <= n; j+=i){
                if(!primes[j]){
                    trueCount++;
                }
                primes[j] = true;
            }
        }
    }

    countPrime = n - trueCount - 1;
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
