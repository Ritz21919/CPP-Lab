#include<iostream>
#include<cmath>
int main() {
    int num;
    std::cout<<"Enter a number:";
    std::cin>>num;
    int temp1, temp2, countDigits = 0;
    temp1 = num;
    temp2 = num;
    while(temp1 > 0) {
        temp1 = temp1 / 10;
        countDigits += 1;
    }
    int digit;
    double sum = 0.0;
    while(temp2 > 0) {
        digit = temp2 % 10;
        sum += pow(digit, countDigits);
        temp2 = temp2 / 10;
    }
    
    if(static_cast<int>(sum) == num)
        std::cout<<"Is "<<num<<" an Armstrong number? True"<<std::endl;
    else
        std::cout<<"Is "<<num<<" an Armstrong number? False"<<std::endl;
    
    return 0;
}
