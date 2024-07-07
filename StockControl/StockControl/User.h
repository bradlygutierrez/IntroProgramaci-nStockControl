#pragma once
#include <string>
using namespace System;

public ref class User
{
private:
    int id;
    String^ username;
    String^ useremail;
    String^ userpassword;

public:
    User(int id, String^ username, String^ useremail, String^ userpassword) : id(id), username(username), useremail(useremail), userpassword(userpassword)
    {
        // Additional initialization if needed
    };

    // Getter methods
    int getUserId() {
        return 0;
    };
    String^ getUsername()
    {
        return username;
    };
    String^ getUseremail() {
        return useremail;
    };
    String^ getUserPassword() {
        return userpassword;
    };

    // Setter methods
    
    void setUsername(String^ us) {
        username = us;
    };

    void setUseremail(String^ useremail) {
        this->useremail = useremail;
    };

    void setUserpassword(String^ userpassword) {
        this->userpassword = userpassword;
    };
};
