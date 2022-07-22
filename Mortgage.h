#include <iostream>
using namespace std;
#pragma once


class Mortgage {
    private:
        int loanAmount;
        int monthlyInterestRate;
        int annualInterestRate;
        int totalYearsToRepay;
        int numberOfPayments;
    public:
        double getLoanAmount();
        double getAnnualInterestRate();
        double getTotalYearsToRepay();

        void setLoanAmount(double loanAmount);
        void setAnnualInterestRate(double interestRate);
        void setTotalYearsToRepay(double years);

        void outputPaymentSchedule(double numberOfPayments, double montlyPayment, double monthlyPaymentRate);
};
