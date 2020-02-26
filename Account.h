#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
class Account
{
    //Attributes
private:
    std::string name;
    double balance;

    //methods
public:
    double get_balance(){
        return balance;
    }
    void set_balance(double bal){
        balance=bal;
    }
    //methods declared outside the class decleration.
    void set_name(std::string s);
    std::string get_name();

    bool deposit(double amount);
    bool withdraw(double amount);
};
#endif