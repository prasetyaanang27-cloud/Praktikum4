#include <iostream>
#include <iomanip>   
#include <string>
using namespace std;

const int UKURAN = 4;


void tampilkanMatriks(int matriks[UKURAN][UKURAN], const string& nama) {
    cout << "Matriks " << nama << ":" << endl;

    for (int i = 0; i < UKURAN; i++) {
        for (int j = 0; j < UKURAN; j++) {
            cout << setw(4) << matriks[i][j];
        }
        cout << endl;
    }
    cout << endl;
}

int main() {

    cout << "Nama : Anang Prasetya" << endl;
    cout << "NIM  : 25104410010" << endl;
    cout << "Prodi: Teknik Informatika 1A" << endl;
    cout << "Tugas Praktikum 4" << endl << endl;

    cout << "---- Program Perkalian Matriks 4x4 ----" << endl;

    
    int A[UKURAN][UKURAN] = {
        {1, 0, 2, 0},
        {0, 1, 0, 1},
        {2, 0, 1, 0},
        {0, 2, 0, 1}
    };

   
    int B[UKURAN][UKURAN] = {
        {1, 1, 1, 1},
        {1, 1, 1, 1},
        {2, 2, 2, 2},
        {2, 2, 2, 2}
    };

    int C[UKURAN][UKURAN] = { 0 };

    
    for (int i = 0; i < UKURAN; i++) {
        for (int j = 0; j < UKURAN; j++) {
            for (int k = 0; k < UKURAN; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    tampilkanMatriks(A, "A");
    tampilkanMatriks(B, "B");

    cout << "Matriks Hasil Perkalian (A x B):" << endl;
    tampilkanMatriks(C, "A x B");

    cout << "TEKKNIKKK INNFORRMATIIKKAAA" << endl;
    cout << "SOOLIDDDD SOOOLIIIDDDD SOLLIDDDD" << endl;

    return 0;
}
