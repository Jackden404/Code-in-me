//  4. WAP to read the data (name, Id and basic salary) of N employee and compute Net salary of each employee 
//(DA=52% of Basic and Income Tax (IT) =30% of the gross salary)
#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int id;
    float basicSalary, da, grossSalary, incomeTax, netSalary;

public:
    // Function to take input
    void getData() {
        cout << "Enter Name, ID, and Basic Salary: ";
        cin >> name >> id >> basicSalary;

        // Salary calculations
        da = 0.52 * basicSalary;                     // DA = 52% of Basic Salary
        grossSalary = basicSalary + da;              // Gross Salary
        incomeTax = 0.30 * grossSalary;              // IT = 30% of Gross Salary
        netSalary = grossSalary - incomeTax;         // Net Salary
    }

    // Function to display employee details
    void displayData() {
        cout << "\nEmployee Details:\n";
        cout << "Name: " << name << "\nID: " << id << "\nBasic Salary: " << basicSalary;
        cout << "\nDA: " << da << "\nGross Salary: " << grossSalary;
        cout << "\nIncome Tax: " << incomeTax << "\nNet Salary: " << netSalary << "\n";
    }
};

int main() {
    int N;
    cout << "Enter number of employees: ";
    cin >> N;

    Employee emp[N]; // Array of objects to store multiple employees

    // Taking input for N employees
    for (int i = 0; i < N; i++) {
        cout << "\nEnter details for Employee " << i + 1 << ":\n";
        emp[i].getData();
    }

    // Displaying details of N employees
    for (int i = 0; i < N; i++) {
        emp[i].displayData();
    }

    return 0;
}

        

    



