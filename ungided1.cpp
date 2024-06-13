#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
int jumlah_simpul;
cout << "Silahkan masukkan jumlah simpul : ";
cin >> jumlah_simpul;
// Membuat vektor untuk menyimpan nama simpul
vector<string> mohammadharitstantowi_2311102016(jumlah_simpul);
// Membuat matriks untuk menyimpan bobot antar simpul
vector<vector<int>> bobot(jumlah_simpul, vector<int>(jumlah_simpul));
// Meminta pengguna memasukkan nama-nama simpul
for (int i = 0; i < jumlah_simpul; ++i) {
cout << "Silahkan masukkan nama simpul " << i + 1 << " : ";
cin >> mohammadharitstantowi_2311102016[i];
}
cout << "Silahkan masukkan bobot antar simpul\n";
// Meminta pengguna memasukkan bobot untuk setiap pasangan simpul
for (int i = 0; i < jumlah_simpul; ++i) {
for (int j = 0; j < jumlah_simpul; ++j) {
cout << mohammadharitstantowi_2311102016[i] << "-->" <<
mohammadharitstantowi_2311102016[j] << " : ";
cin >> bobot[i][j];
}
}
// Menampilkan matriks bobot antar simpul
cout << "\n\t";
for (int i = 0; i < jumlah_simpul; ++i) {
cout << mohammadharitstantowi_2311102016[i] << "\t";
}
cout << "\n";
for (int i = 0; i < jumlah_simpul; ++i) {
cout << mohammadharitstantowi_2311102016[i] << "\t";
for (int j = 0; j < jumlah_simpul; ++j) {
cout << bobot[i][j] << "\t";
}
cout << "\n";
}
return 0;
}
