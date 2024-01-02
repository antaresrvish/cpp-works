#include <iostream>

using namespace std;;

int main(){
    int i = 0;

    while(i <= 40)
    {
        if(i%2==0)
        {
            cout << i << " sayı çift." << endl;
        }
        else
        {
            cout << i << " sayı tek." << endl;
        }
        i++;
    }
}