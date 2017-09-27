/*
 *Create a list of students with different properties
 *Date: September 27, 2017
 *Created by: Ethan Reese
 */
#include <iostream>
#include<cstdlib>
#include <cstring>

using namespace std;



int main(){
    //Make an infinite loop that continues until the user quits
    while(true){
        cout << "Please enter one of the command words: Add, Print, Delete, or Quit";
      char[6] input;
        //Define character arrays with the command words
        char[6] add = "add";
        char[6] print = "print";
        char[6] del = "delete";
        char[6] quit = "quit";
      
        cin >> input;
        //If the input is an add then it needs to run that function
        if(strcmp(tolower(input), add) == 0){

        }
        else if(strcmp(tolower(input), print) == 0){

        }
        else if(strcmp(tolower(input), del) == 0){

        }
        else if(strcmp)(tolower(input), quit) == 0){
            return 0;
        }
        else{
            cout << "Invalid input, please pick one of the proper command terms";
        }
    }
}
