#include <iostream>
#include <string>
using namespace std;

string arrName[10000];
int arrSalary[10000];
int employeeCount = 0;

void addEmployeeName()
{
    // Adding string
    string fname, mname, lname;
    cout << "Enter the employee name (first middle last): ";
    cin >> fname >> mname >> lname;
    string fullName = fname + " " + mname + " " + lname;
    arrName[employeeCount] = fullName;

    // Adding salary
    int salary;
    cout << "Enter the employee salary: ";
    cin >> salary;
    arrSalary[employeeCount] = salary;

    employeeCount++;
}

void showEmployees()
{
    cout << endl
         << "Employees List:" << endl;
    for (int i = 0; i < employeeCount; i++)
    {
        cout << endl
             << endl;
        cout << "Employee name: " << arrName[i] << endl;
        cout << "Salary: " << arrSalary[i] << endl;
        cout << endl
             << endl;
    }
}

void checkUser()
{
    string userName;
    cout << "Please enter your username: ";
    cin >> userName;

    if (userName == "youcef")
    {
        cout << "Welcome youcef..!" << endl;
        int password;
        cout << "Please enter your password: ";
        cin >> password;
        if (password == 2486)
        {
            cout << endl
                 << "Welcome to your database." << endl;
            return;
        }
        else
        {
            cout << "A nice try repeat it bro." << endl;
            checkUser();
        }
    }
    else
    {
        cout << "i saw yooou." << endl;
        checkUser();
    }
}

int main()
{
    checkUser();
    int choice;
    do
    {
        cout << endl;
        cout << "Choose your process:" << endl;
        cout << "1. Add new employee" << endl;
        cout << "2. Show employees" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addEmployeeName();
            break;
        case 2:
            showEmployees();
            break;
        case 3:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "chooooooooooose broooo. Please try again." << endl;
        }
    } while (choice != 3);

    return 0;
}
