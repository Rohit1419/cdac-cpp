#pragma once
#include <iostream>
#include<string>

using namespace std;


class Account{
    protected:
    string name; 
    string acc_no; 
    float balance; 
    static int  acc_counts; 
    static string acc_no_prefix ;

    public: 

    Account(string name, float balance){
        acc_counts += 1;
        this->name = name;
        this->acc_no = acc_no_prefix + to_string(acc_counts);
        this->balance = balance;
    }


    virtual void displayAccInfo(){
        cout << "Account Details: \n";
        cout << "name:" <<name;
        cout << "Acc_no:" <<acc_no;
        cout << "balance:" <<balance;

    }

    virtual float caluculate_returns() = 0;


};

string Account::acc_no_prefix = "413512";
int Account::acc_counts = 0;
    