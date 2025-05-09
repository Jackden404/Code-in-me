#include<iostream>  // WAP to find maximum out of two different values, using ‘cin’ & ‘cout’. 
using namespace std;
class compare{
    public:
    int a,b;
    void getdata(){
        cout<<"Enter the value of a and b:"<<endl;
        cin>>a>>b;
    }
    void display(){
        if(a>b){
            cout<<"Maximum is A:"<<a;
        }
        else{
            cout<<"Maximum is B:"<<b;
        }
    }
};
int main(){
    compare c1;
    c1.getdata();
    c1.display();
    return 0;
}
