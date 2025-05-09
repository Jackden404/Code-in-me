#include<iostream>             //Write a program for sum and average of two numbers. 
using namespace std;
class algebra {
    public:
    void sum(int x, int y){
        cout<<"Sum of two numbers is "<<x+y<<endl;
    }
    void average(int x, int y){
        cout<<"Average of two numbers is "<<(x+y)/2<<endl;
    }
};
int main()
{
    algebra a;
    a.sum(25,30);
    a.average(25,30);
    return 0;
}