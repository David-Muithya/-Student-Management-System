# -Student-Management-System
The system allows the user to add student information, view all students, and delete a student record. The student record includes details like name, roll number, and age. We will store the records in an array of structs.

# Explanation of the Code:
Student Structure:
We define a structure Student to represent a student, containing rollNo, name, and age.

addStudent Function:
Prompts the user to enter the student details (roll number, name, and age).
The student's information is stored in the students array, and the count is incremented.

viewStudents Function:
Displays the records of all students stored in the array.
If there are no students, it informs the user that no records are available.

deleteStudent Function:
Takes the roll number of the student to delete.
Searches for the student with the specified roll number and deletes their record by shifting all subsequent students one position up in the array.
The student count is decremented.

Main Function:
Displays a simple menu with options to add, view, delete, or exit.
Depending on the user's choice, it calls the appropriate function.

# Features of the Program:
Add Student: Users can add up to 10 student records (the array size is fixed to MAX_STUDENTS = 10).

View Students: Displays all student details (roll number, name, age).

Delete Student: Deletes a student based on the roll number and shifts the remaining students to fill the gap.

Exit: Exits the program.

# Future Improvements:
Dynamic Memory Allocation: Instead of using a fixed array, you could use a dynamically allocated array or a vector to store students, which would allow for a flexible number of student records.

Search Functionality: Add a function to search for a student by roll number or name.

File Handling: Implement file handling to save and load student records to/from a file.

Input Validation: Improve input validation to handle edge cases (e.g., entering non-numeric values for age or roll number).

This simple project demonstrates basic C++ concepts like structures, arrays, functions, and user interaction. It can be a great starting point for building more complex projects as you learn more advanced C++ features!
