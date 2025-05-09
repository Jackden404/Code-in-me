#include<iostream>
using namespace std; //WAP of a simple calculator, using switch case and ‘cin’ & ‘cout’ objects.
class Calculator{
    public:
    int num1;
    int num2;
    void get_value(){
        cout<<"Enter numbers:"<<endl;
        cin>>num1>>num2;
    }
    void display(){
        int choice;
        cout<<"Enter your choice"<<endl;
        cout<<"1. Addition"<<endl;
        cout<<"2. Subtraction"<<endl;
        cout<<"3. Multiplication"<<endl;
        cout<<"4.division"<<endl;
        cin>>choice;
        switch(choice) {
            case 1:
                cout << "Sum: " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Difference: " << num1 - num2 << endl;
                break;
            case 3:
                cout << "Product: " << num1 * num2 << endl;
                break;
            case 4:
                if (num2 != 0)
                    cout << "Quotient: " << num1 / num2 << endl;
                else
                    cout << "Cannot divide by zero!" << endl;
                break;
        }
        
    }
};
int main(){
    Calculator c;
    c.get_value();
    c.display();
    return 0;
}
