#include<iostream>
#include<vector>
#include<string>
using namespace std;
//: Create a class to store Complex numbers. Using operator overloading, create the logic to subtract one complex number from another
class Complex{
    private:
        int real;
        int imag;
    public:
        Complex(int r, int i){
            real = r;
            imag = i;
        }
        Complex operator-(Complex &obj){
            Complex temp(0, 0);
            temp.real = real - obj.real;
            temp.imag = imag - obj.imag;
            return temp;
        }
        void display(){
            cout << real << " + " << imag << "i" << endl;
        }
};
class BankAccount {
    int AccountNumber;
    int Balance = 0;
public:
    void deposite(int amount){
        Balance += amount;
        cout << "Deposited: " << amount << endl;
        cout << "Your balence is: " << Balance << endl;
    }
    void withdraw(int amount){
        Balance -= amount;
        cout << "Withdrawn: " << amount << endl;
        cout << "Your balence is: " << Balance << endl;
    }
    void getbalence(){
        cout << "Your balence is: " << Balance << endl;
    }
};
class Person{
public:
    string name;
    int age;
};
class Student: public Person{
public:
    int studentID;
    Student (string n, int a, int id){
        name = n;
        age = a;
        studentID = id;
    }
    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Student ID: " << studentID << endl;
    }
};
int main(){
    Student student("Tanishak", 20, 1234);
    student.display();
    return 0;
}