#include <iostream>
#include <unordered_map>
using namespace std;

// Define a structure for representing database records
struct Record {
    string name;
    int age;
    string email;
    string address;
    string phone;
};

class LookupTable {
private:
    unordered_map<string, Record> table;

public:
    void insert(string key, Record record) {
        table[key] = record;
    }

    Record search(string key) {
        if (table.find(key) != table.end()) {
            return table[key];
        } else {
            return {"", 0, "", "", ""};
        }
    }
};

int main() {
    // Create a lookup table instance
    LookupTable database;

    database.insert("jiyapalrecha", {"Jiya Palrecha", 28, "jiya@example.com", "123 Main St", "123-456-7890"});
    database.insert("ram", {"Ram Kumar", 35, "ram@example.com", "456 Oak St", "987-654-3210"});
    database.insert("ramesh", {"Ramesh Patel", 40, "ramesh@example.com", "789 Elm St", "456-789-0123"});
    database.insert("sita", {"Sita Sharma", 30, "sita@example.com", "321 Elm St", "987-654-3210"});
    database.insert("geeta", {"Geeta Singh", 32, "geeta@example.com", "654 Oak St", "123-456-7890"});
    database.insert("radha", {"Radha Gupta", 28, "radha@example.com", "456 Pine St", "456-789-0123"});

    Record jiyapalrechaRecord = database.search("jiyapalrecha");
    Record ramRecord = database.search("ram");
    Record rameshRecord = database.search("ramesh");
    Record sitaRecord = database.search("sita");
    Record geetaRecord = database.search("geeta");
    Record radhaRecord = database.search("radha");

    cout << "Jiyapalrecha's Record: " << jiyapalrechaRecord.name << ", " << jiyapalrechaRecord.age << ", " << jiyapalrechaRecord.email << ", " << jiyapalrechaRecord.address << ", " << jiyapalrechaRecord.phone << endl;
    cout << "Ram's Record: " << ramRecord.name << ", " << ramRecord.age << ", " << ramRecord.email << ", " << ramRecord.address << ", " << ramRecord.phone << endl;
    cout << "Ramesh's Record: " << rameshRecord.name << ", " << rameshRecord.age << ", " << rameshRecord.email << ", " << rameshRecord.address << ", " << rameshRecord.phone << endl;
    cout << "Sita's Record: " << sitaRecord.name << ", " << sitaRecord.age << ", " << sitaRecord.email << ", " << sitaRecord.address << ", " << sitaRecord.phone << endl;
    cout << "Geeta's Record: " << geetaRecord.name << ", " << geetaRecord.age << ", " << geetaRecord.email << ", " << geetaRecord.address << ", " << geetaRecord.phone << endl;
    cout << "Radha's Record: " << radhaRecord.name << ", " << radhaRecord.age << ", " << radhaRecord.email << ", " << radhaRecord.address << ", " << radhaRecord.phone << endl;

    return 0;
}
