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
        double getLoanAmount(); // to get the variable from private
        double getAnnualInterestRate(); // to get the variable from private
        double getTotalYearsToRepay(); // to get the variable from private

        void setLoanAmount(double loanAmnt);
        void setAnnualInterestRate(double interestRate);
        void setTotalYearsToRepay(double years);

        void outputPaymentSchedule(double numberOfPayments, double montlyPayment, double monthlyPaymentRate);
};
