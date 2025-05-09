//WAP using class to process Shopping List for a Departmental Store. 
//The list includes details such as the CodeNo and Price of each item and perform the operations like Adding, 
//Deleting Items to the list and Printing the Total value of an Order.
#include <iostream>
using namespace std;

class ShoppingList {
private:
    struct Item {
        int codeNo;
        float price;
    };
    
    Item items[100]; // Maximum 100 items
    int itemCount;

public:
    // Constructor to initialize item count
    ShoppingList() {
        itemCount = 0;
    }

    // Function to add an item
    void addItem() {
        if (itemCount < 100) {
            cout << "Enter Item Code and Price: ";
            cin >> items[itemCount].codeNo >> items[itemCount].price;
            itemCount++;
            cout << "Item Added Successfully!\n";
        } else {
            cout << "List is Full! Cannot add more items.\n";
        }
    }

    // Function to delete an item by CodeNo
    void deleteItem() {
        int code;
        cout << "Enter Item Code to Delete: ";
        cin >> code;

        int index = -1;
        for (int i = 0; i < itemCount; i++) {
            if (items[i].codeNo == code) {
                index = i;
                break;
            }
        }

        if (index != -1) {
            for (int i = index; i < itemCount - 1; i++) {
                items[i] = items[i + 1]; // Shift elements left
            }
            itemCount--;
            cout << "Item Deleted Successfully!\n";
        } else {
            cout << "Item Not Found!\n";
        }
    }

    // Function to print total order value
    void printTotalValue() {
        float total = 0;
        for (int i = 0; i < itemCount; i++) {
            total += items[i].price;
        }
        cout << "Total Order Value: " << total << "\n";
    }

    // Function to display shopping list
    void displayList() {
        if (itemCount == 0) {
            cout << "Shopping List is Empty!\n";
            return;
        }
        cout << "\nShopping List:\n";
        for (int i = 0; i < itemCount; i++) {
            cout << "Code: " << items[i].codeNo << ", Price: " << items[i].price << "\n";
        }
    }
};

int main() {
    ShoppingList shop;
    int choice;

    do {
        cout << "\n1. Add Item\n2. Delete Item\n3. Print Total Order Value\n4. Display Shopping List\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: shop.addItem(); break;
            case 2: shop.deleteItem(); break;
            case 3: shop.printTotalValue(); break;
            case 4: shop.displayList(); break;
            case 5: cout << "Exiting...\n"; break;
            default: cout << "Invalid Choice! Try again.\n";
        }
    } while (choice != 5);

    return 0;
}
