#include <iostream>
#include <windows.h>

using namespace std;

int tablica[20];
int n = sizeof(tablica) / sizeof(tablica[0]);


void bubbleSort(int tablica[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (tablica[j] > tablica[j + 1]) {
                swap(tablica[j], tablica[j + 1]);
            }
        }
    }

       cout <<
}

int main()
{
    srand(time(NULL));

    for (int i = 0; i <= 19; i++) {
        tablica[i] = rand() % 101;
    }
    
    bubbleSort(tablica, n);

    cout << tablica[19] << endl;

    for (int j = 0; j <= 19; j++) {
        cout << tablica[j] << endl;
    }

    return 0;
}