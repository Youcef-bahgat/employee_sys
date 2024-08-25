#include <iostream>
#include <fstream> // Include file stream library for file operations
#include <string>
using namespace std;

string arrName[10000];
int arrSalary[10000];
int employeeCount = 0;

void addEmployeeName()
{
    // adding string
    string fname, mname, lname;
    cout << "Enter the employee name (first middle last): ";
    cin >> fname >> mname >> lname;
    string fullName = fname + " " + mname + " " + lname;

    // adding salary
    int salary;
    cout << "Enter the employee salary: ";
    cin >> salary;

    // Open the file in append mode and write the employee data
    ofstream outFile("employee_data.txt", ios::app);
    if (outFile.is_open())
    {
        outFile << "Employee name : " << fullName << " "
                << "Salary : " << salary << endl;
        outFile.close();
        cout << endl
             << "Employee data has been successfully added." << endl
             << endl;
        employeeCount++;
    }
    else
    {
        cout << "Unable to open file for writing!" << endl;
    }
}

void showEmployees()
{
    // cout << "Employees added through the program:" << endl;
    // for (int i = 0; i < employeeCount; i++)
    // {
    //     cout << "Employee name: " << arrName[employeeCount] << endl;
    //     cout << "Salary: " << arrSalary[employeeCount] << endl;
    //     cout << endl;
    // }

    ifstream inFile("employee_data.txt");
    if (inFile.is_open())
    {
        cout << "Employees stored in file:" << endl;
        string fullName;
        int salary;
        while (inFile >> fullName >> salary)
        {
            cout << "Employee name: " << fullName << endl;
            cout << "Salary: " << salary << endl;
            cout << endl;
        }
        inFile.close();
    }
    else
    {
        cout << "Unable to open file for reading!" << endl;
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
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 3);

    return 0;
}
