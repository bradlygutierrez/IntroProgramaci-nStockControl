#pragma once

using namespace System;

ref class User
{
public:
    User(int id, String^ username, String^ email, String^ password);

    property int Id {
        int get() { return id; }
        void set(int value) { id = value; }
    }

    property String^ Username {
        String^ get() { return username; }
        void set(String^ value) { username = value; }
    }

    property String^ Email {
        String^ get() { return email; }
        void set(String^ value) { email = value; }
    }

    property String^ Password {
        String^ get() { return password; }
        void set(String^ value) { password = value; }
    }

private:
    int id;
    String^ username;
    String^ email;
    String^ password;
};