#include "loan.h"
#include <gtest/gtest.h>

// Test: Total Amount Calculation
TEST(LoanTest, TotalAmountCalculation) {
    double loan_amount = 10000;
    double interest_rate = 10;
    double years = 2;

    double expected_total =
        (years * loan_amount) + (years * loan_amount * (interest_rate / 100.0));
    double actual_total =
        calculateTotalAmount(loan_amount, interest_rate, years);

    ASSERT_DOUBLE_EQ(expected_total, actual_total);
}

// Test: Monthly Amount Calculation
TEST(LoanTest, MonthlyAmountCalculation) {
    double total_amount = 24000;
    double years = 2;

    double expected_monthly = total_amount / (years * 12);
    double actual_monthly = calculateMonthlyAmount(total_amount, years);

    ASSERT_DOUBLE_EQ(expected_monthly, actual_monthly);
}

// Test: Zero Interest Rate
TEST(LoanTest, ZeroInterestRate) {
    double loan_amount = 15000;
    double interest_rate = 0;
    double years = 3;

    double expected_total = years * loan_amount;
    double actual_total =
        calculateTotalAmount(loan_amount, interest_rate, years);

    ASSERT_DOUBLE_EQ(expected_total, actual_total);
}

// Test: Very Small Interest
TEST(LoanTest, SmallInterest) {
    double loan_amount = 20000;
    double interest_rate = 0.5;
    double years = 1;

    double expected_total =
        loan_amount * years + (loan_amount * years * 0.5 / 100.0);

    ASSERT_DOUBLE_EQ(expected_total,
                     calculateTotalAmount(loan_amount, interest_rate, years));
}
