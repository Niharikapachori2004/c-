// #include <iostream>
// #include <vector>
// #include <string>

// using namespace std;

// // Item details
// struct Item {
//     int id;
//     string name;
// //     int quantity;
// // };

// // class Inventory {
// // private:
// //     vector<Item> items;

// // public:
// //     // add a new item
// //     void addItem(int id, const string& name, int quantity) {
// //         Item newItem = { id, name, quantity };
// //         items.push_back(newItem);
// //     }

//     // Display all items
//     void displayItems() const {
//         if (items.empty()) {
//             cout << "Inventory is empty." << endl;
//             return;
//         }
//         cout << "Inventory List:" << endl;
//         for (const auto& item : items) {
//             cout << "ID: " << item.id << ", Name: " << item.name << ", Quantity: " << item.quantity << endl;
//         }
//     }

//     // search  item by ID
//     void searchByID(int id) const {
//         for (const auto& item : items) {
//             if (item.id == id) {
//                 cout << "Item found - ID: " << item.id << ", Name: " << item.name << ", Quantity: " << item.quantity << endl;
//                 return;
//             }
//         }
//         cout << "Item with ID " << id << " not found." << endl;
//     }

//     // search item by name
//     void searchByName(const string& name) const {
//         for (const auto& item : items) {
//             if (item.name == name) {
//                 cout << "Item found - ID: " << item.id << ", Name: " << item.name << ", Quantity: " << item.quantity << endl;
//                 return;
//             }
//         }
//         cout << "Item with name " << name << " not found." << endl;
//     }
// };

// int main() {
//     Inventory inventory;
//     int choice, id, quantity;
//     string name;

//     while (true) {
//         // Display ALL menu
//         cout << "\nInventory Management System" << endl;
//         cout << "1. Add Item" << endl;
//         cout << "2. Display Items" << endl;
//         cout << "3. Search Item by ID" << endl;
//         cout << "4. Search Item by Name" << endl;
//         cout << "5. Exit" << endl;
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice) {
//             case 1: // Add Item
//                 cout << "Enter item ID: ";
//                 cin >> id;
//                 cin.ignore(); // To ignore the newline character left by cin
//                 cout << "Enter item name: ";
//                 getline(cin, name);
//                 cout << "Enter item quantity: ";
//                 cin >> quantity;
//                 inventory.addItem(id, name, quantity);
//                 break;
//             case 2: // Display Items
//                 inventory.displayItems();
//                 break;
//             case 3: // Search by ID
//                 cout << "Enter item ID to search: ";
//                 cin >> id;
//                 inventory.searchByID(id);
//                 break;
//             case 4: // Search by Name
//                 cin.ignore(); // To ignore the newline character left by cin
//                 cout << "Enter item name to search: ";
//                 getline(cin, name);
//                 inventory.searchByName(name);
//                 break;
//             case 5: // Exit
//                 cout << "Exiting the system." << endl;
//                 return 0;
//             default:
//                 cout << "Invalid choice, please try again." << endl;
//         }
//     }

//     return 0;
// }

#include <iostream>
using namespace std;
int main (){
        
        char ch[10];
        cin>>ch;
        cout<<ch;
        
        
        
        return 0;
}