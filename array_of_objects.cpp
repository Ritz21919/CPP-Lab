#include<iostream>
using namespace std;
class Person {
    char name[64], address[64];
    int age;
    float b_salary, HRA, DA, g_salary;
public:
    Person() {
        cout<<"\nEnter name: ";
        cin>>name;
        cout<<"\nEnter age: ";
        cin>>age;
        cout<<"\nAddress: ";
        cin>>address;
        cout<<"\nEnter basic salary: ";
        cin>>b_salary;
    }
    void calculateSalary() {
        HRA = 0.2 * b_salary;
        DA = 1.8 * b_salary;
        g_salary = b_salary + HRA + DA;
    }
    int getAge() {
        return age;
    }
    void display() {
        cout<<"\n----Salary slip----\n";
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"Basic salary: "<<b_salary<<endl;
        cout<<"HRA: "<<HRA<<endl;
        cout<<"DA: "<<DA<<endl;
        cout<<"Gross salary: "<<g_salary<<endl;
    }
};
inline void youngest_eldest(Person p[], int n) {
    int max = p[0].getAge();
    int min = p[0].getAge();
    for(int i = 0; i < n; i++) {
        if(p[i].getAge() > max) {
            max = p[i].getAge();
        }
        if(p[i].getAge() < min) {
            min = p[i].getAge();
        }
    }
    cout<<"\nYoungest age = "<<min<<endl;
    cout<<"Eldest age = "<<max<<endl;
}
int main() {
    int n;
    cout<<"Number of entries: ";
    cin>>n;
    Person p[n];
    for(int i = 0; i < n; i++) {
        p[i].calculateSalary();
        p[i].display();
    }
    youngest_eldest(p, n);
    return 0;
}
