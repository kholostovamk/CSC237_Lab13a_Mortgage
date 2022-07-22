#include "Mortgage.h"
#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

double Mortgage::getLoanAmount() {
    return loanAmount;}
double Mortgage::getAnnualInterestRate() {
    return annualInterestRate;}
double Mortgage::getTotalYearsToRepay() {
    return totalYearsToRepay;
}

void Mortgage::setLoanAmount(double loanAmnt) { 
    loanAmount = loanAmnt; }

void Mortgage::setAnnualInterestRate(double interestRate) { 
    annualInterestRate = interestRate; }

void Mortgage::setTotalYearsToRepay(double years){
    totalYearsToRepay = years;}

 void outputPaymentSchedule(double numberOfPayments, double montlyPayment, double monthlyPaymentRate) {
     double interest, loanBalance, contrib_to_principle;
     //code here//
 };   
