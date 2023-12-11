#include<iostream>
using namespace std;

class Contact
{
    char* name;
    char* lastname;
    char* surname;
    char* phoneNumber;
public:
    Contact() // construct by default
    {
        cout << "Constructor by default\n";
        name = nullptr;
        lastname = nullptr;
        surname = nullptr;
        phoneNumber = 0;
    }
    Contact(const char* Name, const char* LastName, const char* Surname,const char* HomeNumber) // construct by 2 param
    {
        cout << "Constructor with parameters\n";
        name = new char[strlen(Name) + 1];
        strcpy_s(name, strlen(Name) + 1, Name);
        lastname = new char[(strlen(LastName) + 1)];
        strcpy_s(lastname, strlen(LastName) + 1, LastName);
        surname = new char[(strlen(Surname) + 1)];
        strcpy_s(surname, strlen(Surname) + 1, Surname);
        phoneNumber = new char[(strlen(HomeNumber) + 1)];
        strcpy_s(phoneNumber, strlen(HomeNumber) + 1, HomeNumber);
        

    }
    
    void Output()
    {
        if (name == nullptr || lastname == nullptr || surname == nullptr)
        {
            cout << "Not full contact." << endl;
            return;
        }
        cout << "Name: " << name << endl;
        cout << "LastName: " << lastname << endl;
        cout << "Surname: " << surname << endl;
        cout << "Phonenumber: " << phoneNumber << endl;
    }
    ~Contact()
    {
        cout << "Destructor." << endl;
    }
};

void printStudents(Contact* students, int size) 
{
    for (int i = 0; i < size; i++) 
    {
        students[i].Output();
    }
}

int main()
{
    int size = 1;
    
    Contact* contact = new Contact[size];

    contact[0] = Contact("Oleg", "Anat","Oleksandrovich", "0916084933");


    
  
 
    printStudents(contact, size);

    delete[] contact;
    return 0;

}
