#include <iostream>
using namespace std;

string addEmployeeName()
{
    // adding string
    string fname, mname, lname;
    cout << "Enter the employee name (3) : " << endl;
    cin >> fname >> mname >> lname;
    string fullName = fname + " " + mname + " " + lname;
    arrName->append(fullName);
    cout << endl;

    // adding salary
    int salary;
    cout << "Enter the employee salary : " << endl;
    cin >> salary;
    arrSalary->append(salary);
}

string showEmployee()
{
    for (int i = 0; i < len(arrName))
    {
        for (int j = 0; j < len(arrSalary))
        {
            cout << "Employee name : " arrName[i] << endl;
            cout << "His salary : " << arrSalary[string j] << endl;
        }
    }
}

void checkUser()
{
    int password;
    string userName;
    cout < "Please enter your username : ";
    cin >> userName;
    if (userName == "youcef")
    {
        cout << "Welcome youcef..!" << endl;
        cout << "Please..Enter your password : ";
        cin >> password;
        if (password == 2486)
        {
            cout << "Welcome to your database./n";
            menu();
        }
        else
            cout << "A nice try keep going ...";
    }
    else
        cout << "Don't Cheat on me ...";
}

void menu(int choice)
{
    cout << "Choose your process :" << endl;
    cout << "  1. add new employee" << endl;
    cout << "  2. show employees" << endl;
    if (choice == 1)
    {
        addEmployeeName();
    }
    else if (choice == 2)
    {
        showEmployee();
    }
}
int main()
{
    string arrName[10000];
    int arrSalary[10000];
    checkUser();
    return 0;
}