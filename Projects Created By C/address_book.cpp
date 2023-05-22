#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Contact {
    string name;
    string phoneNumber;
    string email;
};
int main() {
    Contact newContact;
vector<Contact> addressBook;

cout << "Enter name: ";
getline(cin, newContact.name);

cout << "Enter phone number: ";
getline(cin, newContact.phoneNumber);

cout << "Enter email: ";
getline(cin, newContact.email);

addressBook.push_back(newContact);

cout << "Contact added successfully!" << endl;

string searchName;

cout << "Enter name to search: ";
getline(cin, searchName);

bool found = false;

for (const auto& contact : addressBook) {
  if (contact.name == searchName) {
    cout << "Contact found!" << endl;
    cout << "Name: " << contact.name << endl;
    cout << "Phone Number: " << contact.phoneNumber << endl;
    cout << "Email: " << contact.email << endl;
    found = true;
    break;
  }
}

if (!found) {
  cout << "Contact not found!" << endl;
}

string updateName;

cout << "Enter"<<endl;


  return 0;
}
