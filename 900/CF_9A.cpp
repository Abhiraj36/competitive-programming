#include<iostream>
#include<numeric>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    int maximum = max(a,b);
    int numerator = (6 - maximum) + 1;
    int denominator = 6;
    
    int g =  gcd(numerator, denominator);
    numerator /= g;
    denominator /= g;

    cout << numerator << "/" << denominator;

    return 0;
}