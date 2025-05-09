#include<iostream>   //WAP to scan an integer array of 5 elements. 
using namespace std;
class scan_arr{
    public:
    int arr[5];
    void get_data(){
        for(int i=0;i<5;i++){
            cout<<"Enter element "<<i+1<<" : "<<endl;
            cin>>arr[i];
        }
    }
    void display(){
        for(int i=0;i<5;i++){
        cout<<"The value of entered array are:"<<arr[i]<<endl;
      }
    
    }    
};
int main(){
    scan_arr s1;
    s1.get_data();
    s1.display();
    return 0;
}    