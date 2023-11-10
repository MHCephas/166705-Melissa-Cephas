#include <iostream>
using namespace std;

int main () 
{
    int choice;
    double totalBill = 0;
    string selectedItems;

// Displaying the restaurant menu
    cout<< " Welcome to the Menu! \n";
    cout<< " 1. Combo 1: Rice + Stew - $10.50 \n ";
    cout<< "2. Combo 2: Burgers + Chips - $8.99 \n";
    cout<< " 3. Combo 3: Salad + Soda - $5.99 \n";
    cout<< " 4. Exit \n";

// Asking user to enter their choice
cout<< " Please enter your choice (1-4): ";
cin>> choice;

 // Switch case to determine selected items and calculate the total bill
switch (choice) {
    case 1:
    selectedItems = " Rice + Stew";
    totalBill = 10.50;
    break;

    case 2:
    selectedItems = " Burgers + Chips";
    totalBill = 8.99;
    break;

    case 3:
    selectedItems = " Salad + Soda";
    totalBill = 5.99;
    break;

    case 4:
    cout<< " Exitting the program. Thank you! \n";
    break;
    default:
    cout<< " Invalid choice. Please select a valid food combo. \n";
}
// Displaying the selected items and the total bill
if (choice !=4) {
cout<< " You have selected: " << selectedItems << endl;
cout<< " Total Bill: $" << totalBill << endl;
 }
return 0;
}