# Loan Calculator (C++)

This project is a simple loan calculation program written in C++.
It takes the **loan amount**, **interest rate**, and **number of years** as input and calculates:

* Total amount to be paid
* Total interest
* Monthly payment

The project is split into multiple files for clarity and testing support:

* `loan.h`
* `loan.cpp`
* `loan_test.cpp` (Google Test)
* `Doxyfile` (for documentation)
* `.gitignore`

---

## 🚀 Features

* Calculates **total amount** including interest
* Calculates **monthly installment**
* Structured using **header + source** files
* Includes **Google Test** for functions
* Includes **Doxygen** support to auto-generate documentation

---

## 📁 Folder Structure

```
project/
│
├── loan.h
├── loan.cpp
├── loan_test.cpp
├── Doxyfile
├── .gitignore
└── README.md
```

---

## 🧮 Functions

### `double calculateTotalAmount(double loan_amount, double interest_rate, double number_of_years)`

Calculates the total payable amount based on simple interest.

### `double calculateMonthlyAmount(double total_amount, double number_of_years)`

Returns the monthly payment.

---

## 🧪 Running Google Tests

Make sure Google Test is installed.

### Compile:

```
g++ loan.cpp loan_test.cpp -o test_run -lgtest -lgtest_main -pthread
```

### Run:

```
./test_run
```

---

## 📘 Generate Documentation (Doxygen)

After placing the provided `Doxyfile`:

```
doxygen Doxyfile
```

Output will be inside:

```
docs/html/index.html
```

---

## 🛠️ Compile & Run Main Program

```
g++ loan.cpp -o loan
./loan
```

---

## 📝 License

This project is free to use for educational and learning purposes.

---

If you want, I can also make **badges**, **screenshots**, or a **fancier GitHub-style README**.
Just tell me! 💙
