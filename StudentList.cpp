/*
 *Create a list of students with different properties
 *Date: September 27, 2017
 *Created by: Ethan Reese
 */
#include <iostream>
#include<cstdlib>
#include <cstring>
#include <vector>

using namespace std;
//Make a struct that stores the information about the student
struct Student{
    char firstName[20];
    char lastName[20];
    int id;
    double gpa;
};

void addStudent(vector &students<*Student>);


int main(){
    //Make an infinite loop that continues until the user quits
    while(true){
        cout << "Please enter one of the command words: Add, Print, Delete, or Quit";
      char input[7];
        //Define character arrays with the command words
        char add[7] = "add";
        char print[7] = "print";
        char del[7] = "delete";
        char quit[7] = "quit";
        
        //Create the vector to store the students in 
        vector<*Student> students;
      
        cin >> input;
        //If the input is an add then it needs to run that function
        if(strcmp(tolower(input), add) == 0){
            addStudent(students);
        }
        else if(strcmp(tolower(input), print) == 0){

        }
        else if(strcmp(tolower(input), del) == 0){

        }
        else if((strcmp)(tolower(input), quit) == 0){
            return 0;
        }
        else{
            cout << "Invalid input, please pick one of the proper command terms";
        }
    }
}
//Method to add a student to the full set
void addStudent(vector  &students<*Student>){
    cout << "Enter first name: ";
    Student student = new Student();
    cin >> student.firstName;
    cout << endl << "Enter the last name: ";
    cin >> student.lastName;
    cout << endl << "Enter the student's id number";
    cin >> student.id;
    cout << endl << "Enter the student's gpa ";
    cin << student.gpa;

    students->pushBack(&student);

}
