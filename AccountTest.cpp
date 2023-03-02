// Fady Fahmy
// Csci 272 02(43123)
// modify the code from fig3.8 and fig3.9 (The .cpp and .h files
// AccountTest.cpp

#include <iostream>
#include <string>
#include "Account.h"
using namespace std;


// constructor implementation to initialize the account with name, age, and major
Account::Account(string name, int age, string major) {
    // initialize the account name
    accountName = name;
    // initialize the account age
    accountAge = age;
    // initialize the account major
    accountMajor = major;
}

// function to set the account name
void Account::SetName(string name) {
    // set the account name
    accountName = name;
}

// function to set the account age
void Account::SetAge(int age) {
    // set the account age
    accountAge = age;
}

// function to set the account major
void Account::SetMajor(string major) {
    // set the account major
    accountMajor = major;
}

// function to get the account name
string Account::GetName() {
    // return the account name
    return accountName;
}

// function to get the account age
int Account::GetAge() {
    // return the account age
    return accountAge;
}

// function to get the account major
string Account::GetMajor() {
    // return the account major
    return accountMajor;
}

int main() {
    // create two account objects
    Account Account1("Sue Smith", 20, "Physics");
    Account Account2("Abdul Rahman", 19, "Computer Science");

    // print the information of the two accounts
    cout << "Account1: " << Account1.GetName() << ", " << Account1.GetAge() << ", " << Account1.GetMajor() << endl;
    cout << "Account2: " << Account2.GetName() << ", " << Account2.GetAge() << ", " << Account2.GetMajor() << endl;

    // return 0 to indicate successful execution
    return 0;
}
