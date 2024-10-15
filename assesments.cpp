#include <iostream>
#include <iomanip>
using namespace std;

void displayMenu() {
    cout << "--------- Menu ---------\n";
    cout << "1. Pizza   price = 180rs/pcs\n";
    cout << "2. Burger  price = 100rs/pcs\n";
    cout << "3. Dosa    price = 120rs/pcs\n";
    cout << "4. Idli    price = 50rs/pcs\n";
    cout << "------------------------\n";
}

int main() {
    int choice, quantity, totalAmount = 0;
    char moreOrders;

    do {
        displayMenu();

        // Taking the customer's choice
        cout << "Please Enter your choice (1-4): ";
        cin >> choice;

        // Taking the quantity
        cout << "Enter the quantity: ";
        cin >> quantity;

        // Calculating the price based on the user's choice
        switch (choice) {
            case 1:
                totalAmount += 180 * quantity;
                cout << "You have selected Pizza.\n";
                break;
            case 2:
                totalAmount += 100 * quantity;
                cout << "You have selected Burger.\n";
                break;
            case 3:
                totalAmount += 120 * quantity;
                cout << "You have selected Dosa.\n";
                break;
            case 4:
                totalAmount += 50 * quantity;
                cout << "You have selected Idli.\n";
                break;
            default:
                cout << "Invalid choice! Please select again.\n";
                continue;
        }

        // Displaying the total amount after each selection
        cout << "Total Amount so far = " << totalAmount << " Rs\n";

        // Asking if the customer wants to place more orders
        cout << "Do you want to place more orders? (y/n): ";
        cin >> moreOrders;

    } while (moreOrders == 'y' || moreOrders == 'Y');

    // Final bill display
    cout << "Final Bill = " << totalAmount << " Rs\n";
    cout << "Thank you for your order!\n";

    return 0;
}

