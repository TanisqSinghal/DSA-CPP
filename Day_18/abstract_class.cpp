#include<iostream>
#include<cstring>
using namespace std;

//abstract class
class Shape{
    public:
        virtual void draw() = 0;
};

class Circle: public Shape{
    public:
        void draw(){
            cout << "Drawing Circle" << endl;
        }
};

int main(){
    Circle c1;
    c1.draw(); // Drawing Circle
    return 0;
}