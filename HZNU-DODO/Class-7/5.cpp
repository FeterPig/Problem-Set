#include <iostream>
#include <cmath>
using namespace std;

class Loan
{
private:
    double loanAmount_;
    double annualInterestRate_;
    int numberOfYears_;

public:
    Loan(double loanAmount, double annualInterestRate, int numberOfYears)
        : loanAmount_(loanAmount), annualInterestRate_(annualInterestRate), numberOfYears_(numberOfYears) {}

    void setLoanAmount(double loanAmount) { loanAmount_ = loanAmount; }
    void setAnnualInterestRate(double annualInterestRate) { annualInterestRate_ = annualInterestRate; }
    void setNumberOfYears(int numberOfYears) { numberOfYears_ = numberOfYears; }

    double getLoanAmount() { return loanAmount_; }
    double getAnnualInterestRate() { return annualInterestRate_; }
    int getNumberOfYears() { return numberOfYears_; }

    double getMonthlyPayment()
    {
        double monthly = annualInterestRate_ / 100.0 / 12.0;
        double fenmu = 1 - 1 / pow(1 + monthly, numberOfYears_ * 12);

        return (loanAmount_ * monthly) / fenmu;
    }

    double getTotalPayment() { return getMonthlyPayment() * numberOfYears_ * 12; }
};

int main()
{
    double loanAmount, annualInterestRate;
    int numberOfYears;
    cin >> loanAmount;
    cin >> annualInterestRate;
    cin >> numberOfYears;
    Loan loan(loanAmount, annualInterestRate, numberOfYears);
    cout << loan.getMonthlyPayment() << endl;
    cout << loan.getTotalPayment() << endl;
    return 0;
}