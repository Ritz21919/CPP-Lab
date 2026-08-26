#include<iostream>
using namespace std;
int main() {
    int num, temp;
    cout<<"Enter a number: ";
    cin>>num;
    temp = num;
    int digit, sum = 0;
    while(temp > 0) {
        digit = temp % 10;
        sum += digit;
        temp /= 10;
    }
    cout<<"Sum of digits of "<<num<<" = "<<sum<<endl;
    return 0;
}
