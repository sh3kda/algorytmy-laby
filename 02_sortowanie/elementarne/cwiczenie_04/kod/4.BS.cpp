#include <iostream>
#include <cstdlib>
#include <ctime>
#include <utility>

using namespace std;

int BubbleSort(int T[], int n) {
    int i, j;
    int counter = 0;
    bool swapped; // czy byla zamiana w ostatnim

    for (j = n - 1; j > 0; j--) {
        swapped = false;
        for (i = 0; i < j; i++) {
            counter++;
            if (T[i] > T[i + 1]) {
                swap(T[i], T[i + 1]);
                swapped = true;
            }
        }
        if (swapped == false) {
            cout << "wersja 3, liczba porównań: " << counter << endl;
            return 0;
        }
    }
    cout << "wersja 3, liczba porównań: " << counter << endl;
    return 0;
}

void druknijLiczbe(int tablica[], int n) {
    for (int i = 0; i < n; i++) {
        cout << tablica[i] << " ";
    }
    cout << endl;
}

int main() {
    srand(time(nullptr));

    int tablica[100];
    int n = sizeof(tablica) / sizeof(tablica[0]);

    for (int i = 0; i < n; i++) {
        tablica[i] = rand() % 100;
    }

    cout << "TABLICA LOSOWA" << endl;
    cout << "Tablica na wejściu:" << endl;
    druknijLiczbe(tablica, n);

    BubbleSort(tablica, n);

    cout << "Tablica posortowana:" << endl;
    druknijLiczbe(tablica, n);

    return 0;
}