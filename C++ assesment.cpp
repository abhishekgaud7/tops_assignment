#include <iostream>
#include <ctime> 
using namespace std;
class ATM {
    int pin;
    double balance;
   double Balance = 12000;
public:
   
    ATM() {
        pin = 7999;
        balance = Balance;
    }

    void displayWelcomeScreen() {
        time_t now = time(0);
        char* dt = ctime(&now);
        cout << "-------------Welcome to American  Bank ATM---------------" << endl;
        cout<<"\t\t-------------------------"<<endl;
        cout<<endl;
        cout << "\tCurrent Date and Time: " << dt;
        cout<<endl;
        cout<<"\t\t-------------------------"<<endl;
        cout << "Enter 1 to Enter ATM Pin" << endl;
        cout << "Enter 2 for Help" << endl;
    }

    bool enterPIN() {
        int attempt = 0;
        int inputPIN;
        do {
            cout << "Enter PIN: ";
            cin >> inputPIN;
            if (inputPIN == pin)
                return true;
            else {
                attempt++;
                cout << "Incorrect PIN. Attempt " << attempt << "/1" << endl;
            }
        } while (attempt < 1);
        cout << "Too many attempts. Exiting..." << endl;
        return false;
    }

    void displayHelpScreen() {
        cout << "Help: Contact Customer Support at 91-71-214043" << endl;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposit successful. Current Balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if (amount > balance)
            cout << "Insufficient funds. Withdrawal failed." << endl;
        else {
            balance -= amount;
            cout << "Withdrawal successful. Current Balance: " << balance << endl;
        }
    }

    void checkBalance() {
        cout << "Current Balance: " << balance << endl;
    }
};
main() {
    ATM atm;
    int choice;

    atm.displayWelcomeScreen();
    cin >> choice;

    switch (choice) {
        case 1:
            if (atm.enterPIN()) {
                cout << "PIN Accepted. Welcome!" << endl;
                cout << "Enter 1 to Deposit" << endl;
                cout << "Enter 2 to Withdraw" << endl;
                cout << "Enter 3 to Check Balance" << endl;
                cin >> choice;
                switch (choice) {
                    case 1:
                        double depositAmount;
                        cout << "Enter amount to deposit: ";
                        cin >> depositAmount;
                        atm.deposit(depositAmount);
                        break;
                    case 2:
                        double withdrawAmount;
                        cout << "Enter amount to withdraw: ";
                        cin >> withdrawAmount;
                        atm.withdraw(withdrawAmount);
                        break;
                    case 3:
                        atm.checkBalance();
                        break;
                    default:
                        cout << "Invalid choice" << endl;
                        break;
                }
            }
            break;
        case 2:
            atm.displayHelpScreen();
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
    }
}

