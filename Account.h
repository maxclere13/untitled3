//Account.h 

#include <iostream>
#include <string>

// using the standard namespace to simplify the code
using namespace std;

// class definition for Account
class Account {
private:
    // member variable to store the account name
    string accountName;
    // member variable to store the account age
    int accountAge;
    // member variable to store the account major
    string accountMajor;

public:
    // constructor to initialize the account with name, age, and major
    Account(string name, int age, string major);
    // function to set the account name
    void SetName(string name);
    // function to set the account age
    void SetAge(int age);
    // function to set the account major
    void SetMajor(string major);
    // function to get the account name
    string GetName();
    // function to get the account age
    int GetAge();
    // function to get the account major
    string GetMajor();
}
