#include <iostream>
#include <cstdlib>
#include <ctime>
#include <utility>

using namespace std;

int BubbleSort(int T[], int n) {
    int i, j;
    int counter = 0;
    bool swapped;

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

void Print(int A[], int n) {
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

void RandomArray(int A[], int n) {
    for (int i = 0; i < n; i++) {
        A[i] = rand() % 100;
    }
}

void AscArray(int A[], int n) {
    for (int i = 0; i < n; i++) {
        A[i] = i;
    }
}

void DescArray(int A[], int n) {
    for (int i = 0; i < n; i++) {
        A[i] = n - i;
    }
}

int main() {
    srand(time(nullptr));

    const int N = 100;
    int A[N];

    cout << "TABLICA LOSOWA" << endl;
    RandomArray(A, N);
    cout << "Tablica na wejściu: " << endl;
    Print(A, N);
    cout << endl;
    BubbleSort(A, N);
    cout << "Tablica posortowana: " << endl;
    Print(A, N);
    cout << endl;

    cout << "TABLICA ROSNĄCA" << endl;
    AscArray(A, N);
    cout << "Tablica na wejściu: " << endl;
    Print(A, N);
    cout << endl;
    BubbleSort(A, N);
    cout << "Tablica posortowana: " << endl;
    Print(A, N);
    cout << endl;

    cout << "TABLICA MALEJĄCA" << endl;
    DescArray(A, N);
    cout << "Tablica na wejściu: " << endl;
    Print(A, N);
    cout << endl;
    BubbleSort(A, N);
    cout << "Tablica posortowana: " << endl;
    Print(A, N);
    cout << endl;

    return 0;
}