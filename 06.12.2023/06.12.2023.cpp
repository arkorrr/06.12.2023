#include<iostream>
using namespace std;

class Student
{
    char* name;
    char* lastname;
    char* surname;
    char* phoneNumber;
public:
    Student() // construct by default
    {
        cout << "Constructor by default\n";
        name = nullptr;
        lastname = nullptr;
        surname = nullptr;
        phoneNumber = 0;
    }
    Student(const char* Name, const char* LastName, const char* Surname,const char* HomeNumber) // construct by 2 param
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
    ~Student()
    {
        cout << "Destructor." << endl;
    }
};

void printStudents(Student* students, int size) 
{
    for (int i = 0; i < size; i++) 
    {
        students[i].Output();
    }
}

int main()
{
    int size = 1;
    
    Student* students = new Student[size];

    students[0] = Student("Oleg", "Anat","Oleksandrovich", "0916084933");


    
  
 
    printStudents(students, size);

    delete[] students;
    return 0;

}