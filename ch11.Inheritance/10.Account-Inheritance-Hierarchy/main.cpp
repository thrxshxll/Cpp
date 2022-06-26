/*

11.10 (Account Inheritance Hierarchy) Create an inheritance hierarchy that a bank might use to
represent customers’ bank accounts. All customers at this bank can deposit (i.e., credit) money into
their accounts and withdraw (i.e., debit) money from their accounts. More specific types of accounts570
Chapter 11 Object-Oriented Programming: Inheritance
also exist. Savings accounts, for instance, earn interest on the money they hold. Checking accounts,
on the other hand, charge a fee per transaction (i.e., credit or debit).
Create an inheritance hierarchy containing base-class Account and derived classes Savings-
Account and CheckingAccount that inherit from class Account. Base-class Account should include
one data member of type double to represent the account balance. The class should provide a con-
structor that receives an initial balance and uses it to initialize the data member. The constructor
should validate the initial balance to ensure that it’s greater than or equal to 0.0. If not, the balance
should be set to 0.0 and the constructor should display an error message, indicating that the initial
balance was invalid. The class should provide three member functions. Member function credit
should add an amount to the current balance. Member function debit should withdraw money
from the Account and ensure that the debit amount does not exceed the Account’s balance. If it
does, the balance should be left unchanged and the function should print the message "Debit
amount exceeded account balance." Member function getBalance should return the current
balance.
Derived-class SavingsAccount should inherit the functionality of an Account, but also include
a data member of type double indicating the interest rate (percentage) assigned to the Account.
SavingsAccount’s constructor should receive the initial balance, as well as an initial value for the
SavingsAccount’s interest rate. SavingsAccount should provide a public member function
calculateInterest that returns a double indicating the amount of interest earned by an account.
Member function calculateInterest should determine this amount by multiplying the interest
rate by the account balance. [Note: SavingsAccount should inherit member functions credit and
debit as is without redefining them.]
Derived-class CheckingAccount should inherit from base-class Account and include an addi-
tional data member of type double that represents the fee charged per transaction. Checking-
Account’s constructor should receive the initial balance, as well as a parameter indicating a fee
amount. Class CheckingAccount should redefine member functions credit and debit so that they
subtract the fee from the account balance whenever either transaction is performed successfully.
CheckingAccount’s versions of these functions should invoke the base-class Account version to per-
form the updates to an account balance. CheckingAccount’s debit function should charge a fee
only if money is actually withdrawn (i.e., the debit amount does not exceed the account balance).
[Hint: Define Account’s debit function so that it returns a bool indicating whether money was
withdrawn. Then use the return value to determine whether a fee should be charged.]
After defining the classes in this hierarchy, write a program that creates objects of each class
and tests their member functions. Add interest to the SavingsAccount object by first invoking its
calculateInterest function, then passing the returned interest amount to the object’s credit
function.

*/

// Yuri, jun 2022


#include <iostream>
#include <iomanip>
// #include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
using namespace std;

int main(){
    SavingsAccount account0{1000000, 0.10};

    CheckingAccount account1{1000000, 0.03};

    cout << setprecision(10);
    cout << "SavingsAccount information:"
        << "\nBalance: " << account0.getBalance()
        << "\nInterest Percentage: " << account0.getInterestRate()
        << "\nInterest Rate: " << account0.calculateInterest() << endl;

    cout << "\n\nCheckingAccount information:"
        << "\nBalance: " << account1.getBalance()
        << "\nFee per transaction: " << account1.getFeePerTransaction() << endl;


    account1.debit(1000);
    account1.credit(100);

    cout << "\n\nCheckingAccount information:"
        << "\nBalance: " << account1.getBalance()
        << "\nFee per transaction: " << account1.getFeePerTransaction() << endl;
}