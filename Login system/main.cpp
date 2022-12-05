#include <iostream>
#include <string>
using namespace std;
int main() {
    string user_name;
    string password;
    int login_attempts = 0;
    while(login_attempts < 5){
        cout << "Enter user name: ";
        cin >> user_name;
        cout << "Enter password: ";
        cin >> password;
        if(user_name == "danijels840" and password == "asdfghjkl"){
            cout << "Welcome";
            return 0;
        }
        else{
            cout << "Wrong password or user name \n";
        }
        login_attempts++;
    }
    cout << "Too many login attempts, program will be terminate";
    return 0;
}