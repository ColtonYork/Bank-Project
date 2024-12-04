#include <iostream>
#include "user.h"


//displays the options to either log in or sign up
void displayLoginOrSignUp();
//return true if user decides to sign up
bool checkIfUserSelectsSignUp();



int main(){
    //displays option to either login or sign up
    displayLoginOrSignUp();
    //gets input and returns true when user decides to sign up
    checkIfUserSelectsSignUp();


}
void displayLoginOrSignUp(){
    std::cout << "Login (type 1)" << std::endl;
    std::cout << "Sign Up (type 2)" << std::endl;
}
//checks if the user signs up when prompted
bool checkIfUserSelectsSignUp(){
    //RETURN VARIABLE. Returns true if user selects sign up
    bool signUp;
    int input;
    cin >> input;
    if (input != 1 || input != 2)
    {
        std::cout << "Please enter either 1 or 2" << std::endl;
        cin >> input;

    }
    if(input == 2)
    {
        signUp = true;
    } else{
        signUp = false;
    }
    return signUp;
}
