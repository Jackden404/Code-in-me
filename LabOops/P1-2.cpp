#include<iostream>
using namespace std;  // 2. Scan the values of integer, character and float data and display them, using ‘cin’ and ‘cout’.    
class algebra{
    public:
    int a;
    char b;
    float c;
    void getValue(){
        cout<<"Enter the value of int , char and float:";
        cin>>a>>b>>c;
    }
    void Display(){
        cout<<"The value of int is :"<<a<<endl;
        cout<<"The value of char is :"<<b<<endl;
        cout<<"The value of float is :"<<c<<endl;
    }
};
int main(){
    algebra s;
    s.getValue();
    s.Display();
    return 0;
}