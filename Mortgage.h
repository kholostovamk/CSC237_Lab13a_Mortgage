#include <iostream>
using namespace std;
#pragma once

class Mortgage {
    private:
        int loanAmount;
        int monthlyInterestRate;
        int annuakInterestRate;
        int totalYearsToRepay;
        int numberOfPayments;
    public:
        void setLoanAmount(int);
        void setInterestAmount(int);
        void setYearsToRepay(int);
        double getMontlyPayment() const;
        double getAnnualPayment() const; //not sure
        double getAmountPaid() const;
        
}