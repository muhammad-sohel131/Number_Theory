#include<iostream>

using namespace std;

bool isPrime(int n){
    if(n < 2){
        return false;
    }
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }

    return true;
}

int main(){
    int test, n;

    cin >> test;

    while(test--){
        cin >> n;
        if(isPrime(n)){
            cout << n << " is prime number\n";
        }else{
            cout << n << " is not prime number\n";
        }
    }

}
