#include <iostream>
#include <windows.h>
#include <time.h>
#include <cstring>
#include <ctype.h>

using namespace std;

int ml(string slowo) {
    int ilosc = 0;
    string litery;
    int pos = 0;

    /*for (int j = 0; j < slowo.size(); j++) {
        if (isalpha(slowo[j])) {
            litery[pos] = slowo[j];
            pos++;
        }
    }*/
    for (int i = 0; i < slowo.size(); i++) {
        if (!isupper(slowo[i])) {
            ilosc++;
        }
    }

    return ilosc;
}

int lacina(string slowo) {

    int ilosc = 0;
    for (int i = 0; i < slowo.size(); i++){
        if (!isalpha(slowo[i])) {
            ilosc++;
        }
    }

    return ilosc;
}

int main()
{
    string slowo;

    cout << "Podaj jakies slowo:";
    cin >> slowo;

    cout << "\nSlowo zawiera " << ml(slowo) << " malych liter\n";
    cout << "Slowo zawiera " << lacina(slowo) << " liter spoza laciny";

    return 0;
}