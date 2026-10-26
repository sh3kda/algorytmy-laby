#include <iostream>
#include <cstdlib>
#include <ctime>
#include <utility>

using namespace std;

void BubbleSort(int T[], int n) {
    for (int j = 0; j < n - 1; j++) {
        for (int i = 0; i < n - 1 - j; i++) {
            if (T[i] > T[i + 1]) {
                swap(T[i], T[i + 1]);
            }
        }
    }
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

    cout << "Tablica na wejściu:" << endl;
    druknijLiczbe(tablica, n);

    BubbleSort(tablica, n);

    cout << endl << "Tablica posortowana:" << endl;
    druknijLiczbe(tablica, n);

    return 0;
}