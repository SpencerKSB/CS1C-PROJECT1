//Register class used to model and hold transactions. Will also handle saving and loading transactions from a file.
#ifndef REGISTER_H
#define REGISTER_H

#include "Disk.h"
#include "Customer.h"
class Register
{
    public:
        Register();
        Register(vector<Transaction_Info *> Transactions, vector<Customer *> Customers);
        ~Register();
        
        vector<Transaction_Info*> findTransaction(const string& aPhoneNumber, const string& key);
        
        void outputTransactionHistory(const string &aPhoneNumber);
        void populateTransactions();
        void populateCustomers();
        void dumpTransactions();
        void newTransaction(const string& diskName, const string& diskType, const double& price, Customer &customer);
        //overload newTransaction to take in a disk object
        void newTransaction(const Disk* disk, const string& diskType, Customer& customer);
        void displayTransactionsforCustomer(const string& phoneNumber);
        void addCustomer(Customer& customer);
        bool validateFile(string line, int lineCount, string file);
        
        
    private:
        void clearTransactions();
        vector<Transaction_Info *> allTransactions;
        vector<Customer *> allCustomers;  
};
#endif // REGISTER_H