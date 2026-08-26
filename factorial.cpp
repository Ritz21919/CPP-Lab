#include<iostream>
using namespace std;
int main() {
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num < 0) {
        cout<<"Factorial of negative number is undefined"<<endl;
        return 0;
    }
    if(num == 0 || num == 1) {
        cout<<"Factorial of "<<num<<" = 1"<<endl;
        return 0;
    }
    int fact = 1, i;
    for(i = 1; i <= num; i++) {
        fact *= i;
    }
    cout<<"Factorial of "<<num<<" = "<<fact<<endl;
    return 0;
}
