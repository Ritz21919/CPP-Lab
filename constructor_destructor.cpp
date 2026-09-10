#include<iostream>
#include<cmath>
using namespace std;
class Shape {
    float length, width, radius;
public:
    Shape(float l, float w) {
        length = l;
        width = w;
        radius = 0;
        cout<<"\nRectangle created with length "<<length<<" and width "<<width<<endl;
    }
    Shape(float r) {
        length = 0;
        width = 0;
        radius = r;
        cout<<"\nCircle created with radius "<<radius<<endl;
    }
    ~Shape() {
        cout<<"\nShape object destroyed"<<endl;
    }
    float calculateRectanglePerimeter() {
        if(length > 0 && width > 0){
            return 2 * (length + width);
        }
        else {
            cout<<"\nInvalid length and width for rectangle"<<endl;
            return 0;
        }
    }
    float calculateCirclePerimeter() {
        if(radius > 0) {
            return 2 * M_PI * radius;
        }
        else {
            cout<<"\nInvalid radius for circle"<<endl;
            return 0;
        }
    }
};

int main() {
    float len, wdt, rad;
    cout<<"\nEnter length and width for rectangle: ";
    cin>>len>>wdt;
    cout<<"\nEnter radius for circle: ";
    cin>>rad;
    Shape rec(len, wdt);
    cout<<"\nPerimeter of given rectangle = "<<rec.calculateRectanglePerimeter()<<endl;
    Shape cir(rad);
    cout<<"\nPerimeter of given circle = "<<cir.calculateCirclePerimeter()<<endl;
    return 0;
}
