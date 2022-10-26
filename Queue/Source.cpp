#include <iostream>


using namespace std;
const long long MOD = 1e9 + 7;


long long fact_mod(int val) {
    long long result = 1;

    for (int i = 1; i <= val; i++) {
        result *= i;
        result %= MOD;
    }

    return result;
}


int main() {
	long long n;
	cin >> n;
	long long res =((n - 2) * fact_mod(n - 1))%MOD;
	cout << res;
}