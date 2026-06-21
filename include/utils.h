#include <stdio.h>
#include <string>
#include <passwords.h>

using std::string;

bool login(string name, string password){
    if (password == getPassword(name)){
        return true;
    }
    else{
        return false;
    }
}