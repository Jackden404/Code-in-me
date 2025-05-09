#include<iostream>
using namespace std; //1. WAP using ‘class’ with name person, with functions to input value of age and name and display the same.
class person{
    public:
    string name;
    int age;
    void get_value(){
        cout<<"Enter the Name and Age of person:"<<endl;
        cin>>name>>age;
    }
    void display(){
        cout<<"Name of person is: "<<name<<endl;
        cout<<"Age of person is: "<<age<<endl;
    }
};
int main(){
    person p1;
    p1.get_value();
    p1.display();
    return 0;
}