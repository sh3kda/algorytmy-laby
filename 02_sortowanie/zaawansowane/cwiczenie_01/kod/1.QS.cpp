#include <iostream>
#include <cstdlib>
#include <ctime>
#include <utility>

using namespace std;

int QuickSort(int T[], int l, int p) {
    int i, j;
    int x, z;

    i = l;
    j = p;
    x = T[(l + p) / 2];

    do {
        while (T[i] < x)
            i = i + 1;

        while (T[j] > x)
            j = j - 1;

        if (i <= j) {
            swap(T[i], T[j]);
            i = i + 1;
            j = j - 1;
        }
    } while (i < j);

    if (l < j) QuickSort(T, l, j);
    if (i < p) QuickSort(T, i, p);

    return 0;
}

void Print(int A[], int n) {
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main() {
    srand(time(nullptr));

    const int N = 100;
    int T[N];

    for (int i = 0; i < N; i++) {
        T[i] = rand() % 100;
    }

    cout << "Tablica na wejściu:" << endl;
    Print(T, N);
    cout << endl;

    QuickSort(T, 0, N - 1);

    cout << "Tablica posortowana:" << endl;
    Print(T, N);

    return 0;
}