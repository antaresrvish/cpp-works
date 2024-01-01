#include <iostream>

using namespace std;;
int main()
{
    string toplama = "toplama : ";
    string cikarma = "cikarma : ";
    string carpma = "carpma : ";
    string bolme = "bolme : ";
    string modu = "modu : ";
    int toplam = 100 + 50;
    int cikan = 100 - 50;
    int carpim = 100 * 50;
    int bolum = 100 / 50;
    int mod = 100 % 50;
    cout << toplama << toplam << endl;
    cout << cikarma << cikan << endl;
    cout << carpma << carpim << endl;
    cout << bolme << bolum << endl;
    cout << modu << mod << endl;
    return 0;
}
