#include<iostream>
#include<utils.h>
#include<string>

using namespace std;

int main(){
    string name,password;

    cout<<"Name: ";
    cin>>name;
    cout<<"Password: ";
    cin>>password;

    if(login(name,password)){
        cout<<"Success! \n";
    }
    else{
        cout<<"Login Failed :( \n";
    }
}