#include <iostream>
#include <account.h>
using namespace std;

account this_account(string N,account arr[]){
    for (int i=0;i<10000;i++)
    if (N==arr[i].name)
        return arr[i];
    else
        break;
    }

int main(){

return 0;
}
