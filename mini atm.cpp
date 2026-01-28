#include <iostream>
using namespace std;

int main()
{
    double balance = 0 ,amount;
  int choice;
    do
    {
        cout << "ATM " << endl;
        cout << "1. Balance: " << endl;
        cout << "2.Deposit: " << endl;
        cout << "3.Withdrew: " << endl;
        cout << "4.exit: " << endl;
        cout << "choice: " << endl;
        cin >> choice;
        switch(choice){
            case 1:
            cout << " Balance is: " << balance <<endl;
            break;
            case 2:
            cout << "Deposit Amount: ";
            cin >> amount;
            if(amount > 0)
            {
                cout << "Deposit successfull" << endl;
                balance +=amount;
                cout << " successfull! New balance " << balance << endl;
            }
            else
            cout << "Invaild amount";
            break;
            case 3:
            cout << "Withdrew Amount:";
            cin >> amount;
            if(amount == balance){
                balance -= amount;
                cout << "successfull" << balance;
            }
            else
            cout << " insuficent funds\n";
            break;
            case 4:
            cout << "Exit " << endl;
            break;
            default:
            cout << "Invaild choice";
        }

    }while(choice != 4);
    return 0;

}