#include "user.h"
#include <string>
#include <iostream>

//Default constructor
User::User(){
    userName = "N/A";
    password = "N/A";
    accountType = "N/A";
    balance = 0;
    accountNumber = -1;
    userPin = -1;
    initialDeposit = 0;
}
//Argument constructor
User::User(string c_userName, string c_password, string c_accountType, int c_initalDeposit, int c_userPin){
    //username constructor
    if (c_userName != "")
    {
        userName = c_userName;
    }
    //password constructor
    if (c_password != "")
    {
        password = c_password;
    }
    //accounttype constructor
    if (c_accountType == "saving")
    {
        accountType = "saving";
    } else if (c_accountType == "checking")
    {
        accountType = "checking";
    }
    //initial deposit constructor
    if (c_initalDeposit >= 0)
    {
        initialDeposit = c_initalDeposit;
    }
    //initial deposit constructor 
    if(to_string(c_userPin).length() == 4)
    {
        userPin = c_userPin;
    }
    }
