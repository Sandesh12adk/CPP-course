#include <iostream>
#include <ctime>
#include <vector>
#include <iomanip>

using namespace std;

class Customer {
private:
    string name;
    int customerID;
    string contactNumber;

public:
    Customer(string _name, int _customerID, string _contactNumber) : name(_name), customerID(_customerID), contactNumber(_contactNumber) {}

    string getName() const {
        return name;
    }

    int getCustomerID() const {
        return customerID;
    }

    string getContactNumber() const {
        return contactNumber;
    }

    void displayCustomerInfo() const {
        cout << "Customer ID: " << customerID << endl;
        cout << "Name: " << name << endl;
        cout << "Contact Number: " << contactNumber << endl;
    }
};

class Transaction {
protected:
    int transactionID;
    time_t transactionTime;
    Customer customer;

public:
    Transaction(int _transactionID, const Customer& _customer) : transactionID(_transactionID), transactionTime(time(nullptr)), customer(_customer) {}

    virtual void displayTransactionDetails() const = 0;
};

class MilkTransaction : public Transaction {
private:
    float quantity;
    float fatPercentage;

public:
    MilkTransaction(int _transactionID, const Customer& _customer, float _quantity, float _fatPercentage) : Transaction(_transactionID, _customer), quantity(_quantity), fatPercentage(_fatPercentage) {}

    void displayTransactionDetails() const override {
        cout << "Transaction Type: Milk Purchase" << endl;
        cout << "Transaction ID: " << transactionID << endl;
        cout << "Transaction Time: " << ctime(&transactionTime);
        customer.displayCustomerInfo();
        cout << "Quantity: " << quantity << " litres" << endl;
        cout << "Fat Percentage: " << fatPercentage << "%" << endl;
    }
};

class DairyManagementSystem {
private:
    vector<Customer> customers;
    vector<Transaction*> transactions;
    int nextTransactionID;

public:
    DairyManagementSystem() : nextTransactionID(1) {}

    void addCustomer(const Customer& customer) {
        customers.push_back(customer);
    }

    void displayCustomers() const {
        cout << "----- Customers -----" << endl;
        for (const auto& customer : customers) {
            customer.displayCustomerInfo();
            cout << endl;
        }
    }

    void purchaseMilk(const Customer& customer, float quantity, float fatPercentage) {
        transactions.push_back(new MilkTransaction(nextTransactionID++, customer, quantity, fatPercentage));
    }

    void displayTransactions() const {
        cout << "----- Transactions -----" << endl;
        for (const auto& transaction : transactions) {
            transaction->displayTransactionDetails();
            cout << endl;
        }
    }

    ~DairyManagementSystem() {
        for (auto transaction : transactions) {
            delete transaction;
        }
    }
};

int main() {
    DairyManagementSystem dairy;

    // Adding customers
    Customer customer1("John Doe", 1001, "+1234567890");
    Customer customer2("Alice Smith", 1002, "+1987654321");
    dairy.addCustomer(customer1);
    dairy.addCustomer(customer2);

    // Displaying customers
    dairy.displayCustomers();

    // Making milk purchases
    dairy.purchaseMilk(customer1, 5.0, 4.5);
    dairy.purchaseMilk(customer2, 3.0, 3.8);

    // Displaying transactions
    dairy.displayTransactions();// 2081-01-10

    return 0;
}

