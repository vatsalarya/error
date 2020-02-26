#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

int main(){
    Account frank_account;
    frank_account.set_balance(100000.0);
    frank_account.set_name("Frank");
    cout<<frank_account.get_balance();
    return 0;
}