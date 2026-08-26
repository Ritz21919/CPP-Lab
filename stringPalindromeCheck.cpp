#include<iostream>
#include<cstring>
using namespace std;
int main() {
    char string[20];
    cout<<"Enter a string: ";
    cin>>string;
    int left = 0, right = strlen(string) - 1, flag = 0;
    while(left <= right) {
        if(string[left] != string[right]) {
            flag = 1;
            break;
        }
        left++;
        right--;
    }
    if(flag)
        cout<<string<<" is not a Palindrome"<<endl;
    else
        cout<<string<<" is a Palindrome"<<endl;

    return 0;
}
