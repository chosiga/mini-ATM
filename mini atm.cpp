#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

int main()
{
    double balance = 0.0, amount;
    int choice = 0;
    cout << fixed << setprecision(2);
    do
    {
        cout << "ATM\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Exit\n";
        cout << "Choice: ";
        if(!(cin >> choice)){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a number." << "\n\n";
            continue;
        }
        switch(choice){
            case 1:
                cout << "Balance: " << balance << "\n\n";
                break;
            case 2:
                cout << "Deposit Amount: ";
                if(!(cin >> amount)){
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Invalid amount input." << "\n\n";
                    break;
                }
                if(amount > 0)
                {
                    balance += amount;
                    cout << "Deposit successful. New balance: " << balance << "\n\n";
                }
                else
                    cout << "Invalid amount. Must be positive." << "\n\n";
                break;
            case 3:
                cout << "Withdraw Amount: ";
                if(!(cin >> amount)){
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Invalid amount input." << "\n\n";
                    break;
                }
                if(amount > 0 && amount <= balance){
                    balance -= amount;
                    cout << "Withdrawal successful. New balance: " << balance << "\n\n";
                }
                else if(amount > balance){
                    cout << "Insufficient funds." << "\n\n";
                }
                else{
                    cout << "Invalid amount. Must be positive." << "\n\n";
                }
                break;
            case 4:
                cout << "Exiting. Goodbye." << "\n";
                break;
            default:
                cout << "Invalid choice. Please enter 1-4." << "\n\n";
        }

    }while(choice != 4);
    return 0;

}