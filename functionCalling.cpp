#include<iostream>
using namespace std;
//Call by value
void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"Number 1 = "<<a<<endl;
    cout<<"Number 2 = "<<b<<endl;
}
int main() {
    int num1, num2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    cout<<"Number 1 = "<<num1<<endl;
    cout<<"Number 2 = "<<num2<<endl;
    cout<<"After swapping:"<<endl;
    swap(num1, num2);
    return 0;
}
//Call by reference
/*void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main() {
    int num1, num2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    cout<<"Number 1 = "<<num1<<endl;
    cout<<"Number 2 = "<<num2<<endl;
    swap(&num1, &num2);
    cout<<"After swapping:"<<endl;
    cout<<"Number 1 = "<<num1<<endl;
    cout<<"Number 2 = "<<num2<<endl;
    return 0;
}*/
