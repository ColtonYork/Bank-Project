#include <iomanip>
using namespace std;


class User {
    private:
    string userName;
    string password;
    string accountType; //checking or saving 
    double balance;
    double initialDeposit;
    int accountNumber;
    int userPin;
    public:
    //constructors
    User();
    User(string c_userName, string c_password, string c_accountType, int c_initialDeposit, int c_userPin);
    //getters
    string getUsername();
    string getPassword();
    string getAccountType();
    double getBalance();
    int getAccountNumber();
    int getUserPin();

    //setters
    void setUsername(string newFirstName);
    void setPassword(string newPassword);
    void setPin(int newPin);
    
    //helpers
    string encryptPassword(string password);
    void outputDataToFile(ofstream &outFile);



        // IN MAIN
        //have a make new account or sign in (1 for login 2 for new account)
        //make new account asks user for a pin, username, and password
        //login needs the persons username and pin
        //once logged in display the data of user
        //accounts go into a new file called database
        //logins will only work if the credentials match a credential of a user in the databse file
        //Make alg where the encryption method can run multiple times but can be reverted when the first character is equal to something
};