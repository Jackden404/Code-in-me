#include<iostream>
using namespace std;             //WAP to demonstrate the use of scope resolution operator ::
// Accessing Global Variables (when a local variable has the same name)
                                     
//Defining Class Member Functions Outside the Class
//Accessing Static Members of a Class
//Accessing Namespace Members.                                  
    class fruit{
    public:
    int price;
    int Q;
    void quantity();
    void display();
    void total_price();
    };
    void fruit::quantity(){
        cout<<"Enter the Quantity of fruit:"<<endl;
        cin>>Q;
        cout<<"Enter the price of each:"<<endl;
        cin>>price;
    }
    void fruit::display(){
        cout<<"Price of each fruit is:"<<price<<endl;
    }
    void fruit::total_price(){
        cout<<"Total price is:"<<Q*price<<endl;
        cout<<"Please visit again!"<<endl;
        cout<<"Thanking you";
    }
int main(){
    fruit f1;
    f1.quantity();
    f1.display();
    f1.total_price();
    return 0;
}                            
 