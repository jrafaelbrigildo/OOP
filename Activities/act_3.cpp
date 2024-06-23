#include <iostream>
using namespace std;

class BankAccount{
private:
    string acc_num;
    double balance;
public:
    BankAccount (string Acc_num, double init_balance = 1000) : acc_num(Acc_num), balance(init_balance){}

    double withdraw(double amount){
        if (balance >= amount){
            balance -= amount;
            return balance;
        }
        else {
            cout << "Not enough balance" << endl;
            return balance;
        }
    }

    double deposit(double amount){
        balance += amount;
        return balance;
    }
    string getAccNum(){
        return acc_num;
    }
    double getBal(){
        return balance;
    }
    void user_choice(){
        int choice;
        double amount;
        cout << "Enter 1-Deposit | 2-Withdraw" << endl;
        cin >> choice;

        if(choice == 1){
            cout << "Enter Deposit Amount: ";
            cin >> amount;
            deposit(amount);
            cout << "Deposit Successful! Current Balance: " << balance << endl;
        }
        else if (choice == 2){
            cout << "Enter Withdraw Amount: ";
            cin >> amount;
            if(balance >= amount){
                withdraw(amount);
                cout << "Withdrawal Successful! Current Balance: " << balance << endl;
            }
            else{
                cout << "Not enough Balance!";
            }
        }
        else{
            cout << "Invalid Input!" << endl;
        }
    }
};

int main(){
    char log_out_choice;
    BankAccount bank_acc("SB-123");
    do{
        cout << "A/c. No." << bank_acc.getAccNum() << " Balance: " << bank_acc.getBal() << endl;
        bank_acc.user_choice();
        
        cout << "You want to exit? [y/n]" << endl;
        cin >> log_out_choice;
    } while (log_out_choice != 'y');

    return 0;
};