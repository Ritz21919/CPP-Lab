#include<iostream>
using namespace std;
int main() {
    int num, temp;
    cout<<"Enter a number: ";
    cin>>num;
    temp = num;
    int digit, reverseNum = 0;
    while(temp > 0) {
        digit = temp % 10;
        reverseNum = (reverseNum * 10) + digit;
        temp /= 10;
    }
    if(reverseNum == num)
        cout<<num<<" is a Palindrome number"<<endl;
    else
        cout<<num<<" is not a Palindrome number"<<endl;
    return 0;
}
