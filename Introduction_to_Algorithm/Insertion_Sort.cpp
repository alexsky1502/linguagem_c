#include <iostream>
#include <string>
using namespace std;

void Print_List(int* A);
void InsertionSort(int *A, int size);

void InsertionSort(int *A, int size) {
    int chave, i;
    cout << "\n";
    for (int j = 1; j < size; j++) {
        chave = A[j];
        i = j - 1;
        while (i >= 0 && A[i] >= chave) {
            A[i+1] = A[i];
            i = i - 1;
        }
        A[i+1] = chave;
    }
    Print_List(A);
}

void Print_List(int* A) {
    for (int i = 0; i < 6 ; i++) {
        cout << A[i] << " ";
    }
}

int main(void) {
    int A[] = {5,2,4,6,1,3};
    int size = sizeof(A)/sizeof(A[0]);
    Print_List(A);
    InsertionSort(A, 6);
}