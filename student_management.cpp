#include <iostream>
#include <string>
using namespace std;

// Defining a structure to represent a student
struct Student {
    int rollNo;
    string name;
    int age;
};

// Function to add a student record
void addStudent(Student students[], int &count) {
    cout << "Enter Roll Number: ";
    cin >> students[count].rollNo;
    cout << "Enter Name: ";
    cin.ignore();  // To ignore the leftover newline character in the buffer
    getline(cin, students[count].name);
    cout << "Enter Age: ";
    cin >> students[count].age;
    
    // Increment the student count
    count++;
    cout << "Student added successfully!\n";
}

// Function to view all student records
void viewStudents(Student students[], int count) {
    if (count == 0) {
        cout << "No students to display.\n";
        return;
    }
    
    cout << "\nStudent Records:\n";
    for (int i = 0; i < count; i++) {
        cout << "Roll Number: " << students[i].rollNo << "\n";
        cout << "Name: " << students[i].name << "\n";
        cout << "Age: " << students[i].age << "\n\n";
    }
}

// Function to delete a student record by roll number
void deleteStudent(Student students[], int &count, int rollNo) {
    bool found = false;
    for (int i = 0; i < count; i++) {
        if (students[i].rollNo == rollNo) {
            // Shift the remaining students to fill the gap
            for (int j = i; j < count - 1; j++) {
                students[j] = students[j + 1];
            }
            count--;  // Decrease the total count of students
            cout << "Student with roll number " << rollNo << " deleted successfully.\n";
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Student with roll number " << rollNo << " not found.\n";
    }
}

int main() {
    const int MAX_STUDENTS = 10;  // Maximum number of students we can handle
    Student students[MAX_STUDENTS];  // Array to store student records
    int count = 0;  // Number of students in the system
    
    int choice;
    do {
        // Display menu options
        cout << "\nStudent Management System\n";
        cout << "1. Add Student\n";
        cout << "2. View All Students\n";
        cout << "3. Delete Student\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1: {
                if (count < MAX_STUDENTS) {
                    addStudent(students, count);  // Add student
                } else {
                    cout << "Student limit reached. Cannot add more students.\n";
                }
                break;
            }
            case 2: {
                viewStudents(students, count);  // View all students
                break;
            }
            case 3: {
                int rollNo;
                cout << "Enter Roll Number to delete: ";
                cin >> rollNo;
                deleteStudent(students, count, rollNo);  // Delete student by roll number
                break;
            }
            case 4:
                cout << "Exiting the system.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);  // Keep running the menu until the user chooses to exit
    
    return 0;
}
