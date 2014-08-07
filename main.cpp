//
//  main.cpp
//  Test
//
//  Created by Sem on 07-08-14.
//  Copyright (c) 2014 Sem Voigtländer. All rights reserved.
//
#include <stdio.h>
#include <iostream>
using namespace std;
void ClearScreen()
{
    int n;
    for (n = 0; n < 10; n++)
        printf( "\n\n\n\n\n\n\n\n\n\n" );
}
int login(string username, string password){// insert code here...
    cout << "Username: ";
    cin >> username;
    cout << "Password: ";
    cin >> password;
    if(password=="password" && username=="frank"){
        cout << "Welcome Frank, you are now logged in! \n";
        
    } else if(password=="roberto"  &&  username=="robert"){
        cout << "Welcome Robert, you are now logged in! \n";
    } else {
        cout << "Incorrect Username or Password! \n";
        return login("","");
        
    }
    return 0;
}
int commandsys(string sesid){
    string command="";
    cout << "ESFRD>";
    cin >> command;
    if (command=="help"){
        cout << "You can use this commands:\nhelp\nlogin\nexit\n\n";
        commandsys("new");
    }else if(command=="login"){
        return login("","");
    } else if(command=="exit"){
        return 0;
    } else {
        cout << "Command not found!\n";
        ClearScreen();
        return commandsys("new");
    }
    return 0;
}
int main(int argc, const char * argv[])
{
    commandsys("new");
          return 0;
    }
