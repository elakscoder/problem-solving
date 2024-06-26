#include<bits/stdc++.h>
using namespace std;

//just adding two numbers by finding the carrya and the intrmediate sum.
int main() {
    int num1, num2, base, carry, power, newnum, sum;
    cin >> num1 >> num2 >> base;

    power = 1;
    carry = newnum = 0;

    while (num1 / power || num2 / power) {
        sum = ((num1 / power) % 10 + (num2 / power) % 10) + carry;
        newnum = (sum % base) * power + newnum;
        carry = sum / base;
        power *= 10;
    }

    if (carry) {
        newnum = carry * power + newnum;
    }

    std::cout << newnum << std::endl;
    return 0;
}
