#include <iostream>
#include "loan.h"
using namespace std;

double calculateTotalAmount(double loan_amount, double interest_rate, double number_of_years) {
    return (number_of_years * loan_amount)
        + (number_of_years * loan_amount * (interest_rate / 100.0));
}

double calculateMonthlyAmount(double total_amount, double number_of_years) {
    return total_amount / (number_of_years * 12);
}

int main() {
    double loan_amount, interest_rate, number_of_years;

    cout << "Enter the loan amount: ";
    cin >> loan_amount;

    cout << "Enter the interest rate: ";
    cin >> interest_rate;

    cout << "Enter the number of years: ";
    cin >> number_of_years;

    double total_amount = calculateTotalAmount(loan_amount, interest_rate, number_of_years);
    double monthly_amount = calculateMonthlyAmount(total_amount, number_of_years);

    cout << "Total amount to be paid: " << total_amount << endl;
    cout << "Total interest: " << total_amount - (number_of_years * loan_amount) << endl;
    cout << "Monthly amount to be paid: " << monthly_amount << endl;

    return 0;
}
