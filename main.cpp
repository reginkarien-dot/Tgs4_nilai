#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel untuk menyimpan input nilai
    double nilai;

    // Meminta user untuk memasukkan nilai
    cout << "Masukkan nilai: ";
    cin >> nilai;

    // Logika percabangan (if-else) sesuai instruksi tugas
    if (nilai > 90) {
        cout << "Nilai Anda: A" << endl;
    } 
    else if (nilai > 80) {
        cout << "Nilai Anda: B" << endl;
    } 
    else if (nilai > 70) {
        cout << "Nilai Anda: C" << endl;
    } 
    else {
        // Kategori untuk nilai dibawah atau sama dengan 70
        cout << "Nilai Anda: D" << endl;
    }

    return 0;
}
