#include <iostream>
#include <string>
using namespace std;

class Package
{
    string sender_name;
    string sender_address;
    string sender_city;
    string sender_state;
    string sender_zip;
    string r_name;
    string r_address, r_city, r_state, r_zip;
    double weight;
    double cost;

public:
    Package(string &name, string &sender_address, string &sender_city, string &sender_state, string &sender_zip, string &r_name, string &r_address, string &r_city, string &r_state, string &r_zip, double weight, double cost)
    {
        this->sender_name = name;
        this->sender_address = sender_address;
        this->sender_city = sender_city;
        this->sender_state = sender_state;
        this->sender_zip = sender_zip;
        this->r_address = r_address;
        this->r_name = r_name;
        this->r_city = r_city;
        this->r_state = r_state;
        this->r_zip = r_zip;
        this->weight = weight;
        this->cost = cost;
    }

    double calculateCost()
    {
        return weight * cost;
    }

    double getWeight() const
    {
        return weight;
    }

    virtual void display()
    {
        cout << "Name: " << sender_name << endl;
        cout << "sender_address: " << sender_address << endl;
        cout << "sender_city: " << sender_city << endl;
        cout << "sender_state: " << sender_state << endl;
        cout << "sender_zip: " << sender_zip << endl;
        cout << "Receiver_Name: " << r_name << endl;
        cout << "Receiver_address: " << r_address << endl;
        cout << "receiver_city: " << r_city << endl;
        cout << "receiver_state: " << r_state << endl;
        cout << "receiver_zip: " << r_zip << endl;
        cout << "Weight: " << weight << endl;
        cout << "Cost: " << cost << endl;
    }
};

class TwoDayPackage : public Package
{
    double flatFee;

public:
    TwoDayPackage(string name, string sender_address, string sender_city, string sender_state, string sender_zip, string r_name, string r_address, string r_city, string r_state, string r_zip, double weight, double cost,
                  double f)
        : Package(name, sender_address, sender_city, sender_state, sender_zip, r_name, r_address, r_city, r_state, r_zip, weight, cost)
    {
        flatFee = f;
    }

    double calculateCost()
    {
        return Package::calculateCost() + flatFee;
    }

    void display() override
    {
        Package::display();
        cout << "Flat Fee: " << flatFee << endl;
    }
};

class OvernightPackage : public Package
{
    double extraCost;

public:
    OvernightPackage(string name, string sender_address, string sender_city, string sender_state, string sender_zip, string r_name, string r_address, string r_city, string r_state, string r_zip, double weight, double cost,
                     double e)
        : Package(name, sender_address, sender_city, sender_state, sender_zip, r_name, r_address, r_city, r_state, r_zip, weight, cost)
    {
        extraCost = e;
    }

    double calculateCost()
    {
        return Package::calculateCost() + (extraCost * Package::getWeight());
    }

    void display()
    {
        Package::display();
        cout << "Extra Cost: " << extraCost << endl;
    }
};

int main()
{
    string name, sender_address, sender_city, sender_state, sender_zip;
    string r_name, r_address, r_city, r_state, r_zip;
    double weight, cost;

    cout << "Enter the name of the sender: ";
    getline(cin, name);
    cout << "Enter the sender_address of the sender: ";
    getline(cin, sender_address);
    cout << "Enter the sender_city of the sender: ";
    getline(cin, sender_city);
    cout << "Enter the sender_state of the sender: ";
    getline(cin, sender_state);
    cout << "Enter the sender_zip of the sender: ";
    getline(cin, sender_zip);
    cout << "Enter the name of the receiver: ";
    getline(cin, r_name);
    cout << "Enter the address of the receiver: ";
    getline(cin, r_address);
    cout << "Enter the city of the receiver: ";
    getline(cin, r_city);
    cout << "Enter the state of the receiver: ";
    getline(cin, r_state);
    cout << "Enter the zip of the receiver: ";
    getline(cin, r_zip);
    cout << "Enter the weight of the package: ";
    cin >> weight;
    cout << "Enter the cost per ounce: ";
    cin >> cost;

    Package p1(name, sender_address, sender_city, sender_state, sender_zip, r_name, r_address, r_city, r_state, r_zip, weight, cost);

    double flatFee;
    cout << "Enter the flat fee for two day package: ";
    cin >> flatFee;
    TwoDayPackage p2(name, sender_address, sender_city, sender_state, sender_zip, r_name, r_address, r_city, r_state, r_zip, weight, cost, flatFee);

    double extraCost;
    cout << "Enter the extra cost per ounce for overnight package: ";
    cin >> extraCost;
    OvernightPackage p3(name, sender_address, sender_city, sender_state, sender_zip, r_name, r_address, r_city, r_state, r_zip, weight, cost, extraCost);

    cout << endl
         << endl;
    cout << "Package 1 :-" << endl
         << endl;
    p1.display();
    cout << "Total Cost: " << p1.calculateCost() << endl
         << endl
         << endl;

    cout << "Package 2 :-" << endl
         << endl;
    p2.display();
    cout << "Total Cost: " << p2.calculateCost() << endl
         << endl
         << endl;

    cout << "Package 3 :-" << endl
         << endl;
    p3.display();
    cout << "Total Cost: " << p3.calculateCost() << endl
         << endl
         << endl;

    return 0;
}