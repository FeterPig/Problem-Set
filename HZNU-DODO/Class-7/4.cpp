#include <iostream>
#include <string>
using namespace std;

class Account
{
private:
    string id_;
    string name_;
    double balance_;
    double annualInterestRate_;

public:
    Account(string id, string name, double balance, double annualInterestRate)
        : id_(id), name_(name), balance_(balance), annualInterestRate_(annualInterestRate) {}

    void setId(string id) { id_ = id; }
    void setName(string name) { name_ = name; }
    void setBalance(double balance) { balance_ = balance; }
    void setannualInterestRate(double annualInterestRate) { annualInterestRate_ = annualInterestRate; }

    string getId() { return id_; }
    string getName() { return name_; }
    double getBalance() { return balance_; }
    double getannualInterestRate() { return annualInterestRate_; }

    void withdraw(double digit) { balance_ -= digit; }
    void deposit(double digit) { balance_ += digit; }
    double computeMonthlyInterestRate() { return annualInterestRate_ / 12.0; }
    void print()
    {
        cout << this->getId() << endl
             << this->getName() << endl
             << this->getBalance() << endl
             << this->computeMonthlyInterestRate() << "%" << endl;
    }
};

int main()
{
    string id;
    string name;
    double balance;
    double annualInterestRate;
    cin >> id >> name >> balance >> annualInterestRate;
    Account account(id, name, balance, annualInterestRate);
    account.withdraw(2500);
    account.deposit(3000);
    account.print();
    return 0;
}