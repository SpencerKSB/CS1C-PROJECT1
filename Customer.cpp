#include "Customer.h"

Customer::Customer()
{
    firstName = "";
    lastName = "";
    phoneNumber = "";
    budget = 0.0;
}

Customer::Customer(string firstName, string lastName, string phoneNumber, double budget)
{
    this->firstName = firstName;
    this->lastName = lastName;
    this->phoneNumber = phoneNumber;
    this->budget = budget;
}

Customer::~Customer() { }

string Customer::getFirstName() const
{
    return firstName;
}

string Customer::getLastName() const
{
    return lastName;
}

string Customer::getPhoneNumber() const
{
    return phoneNumber;
}

double Customer::getBudget() const
{
    return budget;
}

void Customer::setFirstName(string firstName)
{
    this->firstName = firstName;
}

void Customer::setLastName(string lastName)
{
    this->lastName = lastName;
}

void Customer::setPhoneNumber(string phoneNumber)
{
    this->phoneNumber = phoneNumber;
}

void Customer::setBudget(double budget)
{
    this->budget = budget;
}

void Customer::displayTransactionHistory()
{
    for (int i = 0; i < transactions.size(); i++)
    {
        cout << "Transaction " << i + 1 << endl;
        //cout << "Order ID: " << transactions[i].getDate() << endl;
        cout << "Disk Name: " << transactions[i].getDiskName() << endl;
        cout << "Disk Type: " << transactions[i].getDiskType() << endl;
        cout << "Total: " << transactions[i].getTotal() << endl;
        cout << endl;
    }
}

void Customer::addTransaction(const Transaction &item)
{
    transactions.push_back(item);
}