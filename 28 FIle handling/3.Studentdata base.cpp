#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

struct Student {
    int id;
    string name;
    int age;
    float grade;
};

// Function prototypes
void addStudent();
void displayAllStudents();
void searchStudent();
void updateStudent();
void deleteStudent();

int main() {
    int choice;

    do {
        cout << "1. Add a new student" << endl;
        cout << "2. Display all students" << endl;
        cout << "3. Search for a student" << endl;
        cout << "4. Update student information" << endl;
        cout << "5. Delete a student" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayAllStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                updateStudent();
                break;
            case 5:
                deleteStudent();
                break;
            case 6:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 6." << endl;
        }
    } while (choice != 6);

    return 0;
}

void addStudent() {
    ofstream outFile("student_database.txt", ios::app);
    if (!outFile) {
        cout << "Error opening file." << endl;
        return;
    }

    Student newStudent;
    cout << "Enter Student ID: ";
    cin >> newStudent.id;
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, newStudent.name);
    cout << "Enter Age: ";
    cin >> newStudent.age;
    cout << "Enter Grade: ";
    cin >> newStudent.grade;

    outFile << newStudent.id << " " << newStudent.name << " " << newStudent.age << " " << newStudent.grade << endl;

    cout << "Student added successfully." << endl;

    outFile.close();
}

void displayAllStudents() {
    ifstream inFile("student_database.txt");
    if (!inFile) {
        cout << "Error opening file." << endl;
        return;
    }

    Student student;
    cout << "ID\tName\tAge\tGrade" << endl;
    while (inFile >> student.id >> student.name >> student.age >> student.grade) {
        cout << student.id << "\t" << student.name << "\t" << student.age << "\t" << fixed << setprecision(2) << student.grade << endl;
    }

    inFile.close();
}

void searchStudent() {
    ifstream inFile("student_database.txt");
    if (!inFile) {
        cout << "Error opening file." << endl;
        return;
    }

    int searchID;
    cout << "Enter Student ID to search: ";
    cin >> searchID;

    Student student;
    bool found = false;
    while (inFile >> student.id >> student.name >> student.age >> student.grade) {
        if (student.id == searchID) {
            found = true;
            cout << "Student found:" << endl;
            cout << "ID: " << student.id << endl;
            cout << "Name: " << student.name << endl;
            cout << "Age: " << student.age << endl;
            cout << "Grade: " << fixed << setprecision(2) << student.grade << endl;
            break;
        }
    }

    if (!found) {
        cout << "Student with ID " << searchID << " not found." << endl;
    }

    inFile.close();
}

void updateStudent() {
    fstream file("student_database.txt");
    if (!file) {
        cout << "Error opening file." << endl;
        return;
    }

    int updateID;
    cout << "Enter Student ID to update: ";
    cin >> updateID;

    Student student;
    bool found = false;
    while (file >> student.id >> student.name >> student.age >> student.grade) {
        if (student.id == updateID) {
            found = true;
            cout << "Enter new Name: ";
            cin.ignore();
            getline(cin, student.name);
            cout << "Enter new Age: ";
            cin >> student.age;
            cout << "Enter new Grade: ";
            cin >> student.grade;

            file.seekp(-1 * sizeof(student), ios::cur);
            file << student.id << " " << student.name << " " << student.age << " " << student.grade << endl;
            cout << "Student information updated successfully." << endl;
            break;
        }
    }

    if (!found) {
        cout << "Student with ID " << updateID << " not found." << endl;
    }

    file.close();
}

void deleteStudent() {
    ifstream inFile("student_database.txt");
    if (!inFile) {
        cout << "Error opening file." << endl;
        return;
    }

    int deleteID;
    cout << "Enter Student ID to delete: ";
    cin >> deleteID;

    ofstream tempFile("temp.txt");
    if (!tempFile) {
        cout << "Error creating temporary file." << endl;
        return;
    }

    Student student;
    bool found = false;
    while (inFile >> student.id >> student.name >> student.age >> student.grade) {
        if (student.id == deleteID) {
            found = true;
            cout << "Student with ID " << deleteID << " has been deleted." << endl;
        } else {
            tempFile << student.id << " " << student.name << " " << student.age << " " << student.grade << endl;
        }
    }

    if (!found) {
        cout << "Student with ID " << deleteID << " not found." << endl;
    }

    inFile.close();
    tempFile.close();

    remove("student_database.txt");
    rename("temp.txt", "student_database.txt");
}

