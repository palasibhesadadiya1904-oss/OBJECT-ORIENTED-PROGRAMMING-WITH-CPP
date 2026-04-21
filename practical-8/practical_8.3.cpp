#include <iostream>

using namespace std;


const char* logs[50];
int logCount = 0;


void addLog(const char* message) {
    logs[logCount] = message;
    logCount++;
}

class BankAccount {
private:
    double balance;

public:
    BankAccount(double b) {
        balance = b;
    }

    void deposit(double amount) {
        addLog("  [ENTER] deposit()");
        if (amount <= 0) {
            throw "Error: Deposit must be positive!";
        }
        balance += amount;
        addLog("  [EXIT] deposit() successful");
    }

    void withdraw(double amount) {
        addLog("  [ENTER] withdraw()");
        if (amount > balance) {
            throw "Error: Not enough money!";
        }
        balance -= amount;
        addLog("  [EXIT] withdraw() successful");
    }
};


void doTransaction(BankAccount& acc, double amount) {
    addLog("[ENTER] doTransaction()");

    acc.withdraw(amount);
    addLog("[EXIT] doTransaction() successful");
}


int main() {
    BankAccount acc(500);

    cout << "Processing transactions...\n";


    try {
        addLog("\n--- Valid $200 Withdrawal ---");
        doTransaction(acc, 200);
    } catch (const char* e) {
        addLog(e);
    }

    try {
        addLog("\n--- Invalid $1000 Withdrawal ---");
        doTransaction(acc, 1000);
    } catch (const char* e) {
        addLog(e);
    }


    cout << "\n--- Final Transaction Logs ---\n";
    for (int i = 0; i < logCount; i++) {
        cout << logs[i] << "\n";
    }

    cout<<"\n palasi bhesdadiya-25CE008\n";

    return 0;
}
