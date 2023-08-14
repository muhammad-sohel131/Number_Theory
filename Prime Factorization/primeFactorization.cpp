#include<iostream>

using namespace std;

void primeFactorization(int n){
    if(n < 2){
        cout << "There is no prime factors\n";
        return ;
    }

    cout << "Prime factors of " << n << " are: \n";
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0){
            int power = 0;
            while(n % i == 0){
                n /= i;
                power++;
            }
            cout << i << " , " << power << " times\n";
        }
    }

    if(n > 1){
        cout << n << " , " << 1 << " times";
    }
    cout << "\n\n";
}

int main(){
    int test, n;

    cin >> test;
    while(test--){
        cin >> n;
        primeFactorization(n);
    }

    return 0;
}
