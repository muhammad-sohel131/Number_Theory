// this program will help to find out the exponential result like 2^3 = 8;

//There are two simple condition for this algorithm

//if the power is odd, we multiply the base with the result and reduce one from the power.
//if the power is even, we multiply the base with base and divide the power with 2;


#include<iostream>

using namespace std;

typedef long long int ll;

ll exponentiation(ll base, ll power){
    ll result = 1;

    while(power){
        if(power % 2 == 1){
            result *= base;
            power--;
        }else {
            base *= base;
            power /= 2;
        }
    }

    return result;
}

int main(){
    ll base, power;
    int t;

    cin >> t;

    while(t--){
        cout << "Base : ";
        cin >> base ;

        cout << "Power : ";
        cin >> power;

        cout << exponentiation(base, power) << "\n";
    }

    return 0;
}
