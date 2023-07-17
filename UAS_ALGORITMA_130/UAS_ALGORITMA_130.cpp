#include <iostream>
#include <string>
using namespace std;
//isi disini
const int MAX_MAHASISWA = 100;
int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];
int jumlahMahasiswa = 0;
//isi disini
void tambahMahasiswa() {
	if (jumlahMahasiswa < MAX_MAHASISWA) {
		cout << "========== TAMBAH MAHASISWA ==========" << endl;
		cout << "NIM : ";
		cin >> NIM[jumlahMahasiswa];
		cin.ignore();
		cout << "Nama : ";
		getline(cin, nama[jumlahMahasiswa]);
		cout << "Tahun Masuk: ";
		cin >> tahunMasuk[jumlahMahasiswa];
		cin.ignore();
		jumlahMahasiswa++;
		cout << "Mahasiswa berhasil ditambahkan!" << endl;
	}
	else {
		cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
	}
}
//isi disini
void tampilkanSemuaMahasiswa() {
	cout << "========== SEMUA MAHASISWA ==========" << endl;
	if (jumlahMahasiswa == 0) {
		cout << "Tidak ada data mahasiswa." << endl;
	}
	else {
		for (int i = 0; i < jumlahMahasiswa; i++) {
			cout << "NIM       : " << NIM[i] << endl;
			cout << "Nama      : " << nama[i] << endl;
			cout << "Tahun Masuk: " << tahunMasuk[i] << endl;
			cout << endl;
		}
	}
}//isi disini
void algorithmacariMahasiswaByNIM() {
	int nimCari;

	cout << "========== CARI MAHASISWA ==========" << endl;
	cout << "Masukkan NIM yang dicari: ";
	cin >> nimCari;
}
//isi disini
void algorithmaSortByTahunMasuk();
int main() {
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1:
			tambahMahasiswa();
			break;
		case 2:
			tampilkanSemuaMahasiswa();
			break;
		case 3:

			break;
		case 4:
			//isi disini
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
}

//2. insertion sort, linear search
//3. algoritma stack adalah struktur data yang menggunakan LIFO yaitu elemen yang terakhir dimasukkan ke dalam tumpukan adalah item pertama yang akan keluar atau di hapus, sedangkan queue menggunakan FIFO yaitu elemen terakhir yang dimasukkan ke dalam tumpukkan adalah elemen pertama yang akan keluar.
//4. menggunakan stack yaitu pada saat kita ingin menghapus dan mengembalikan di dalam program
//5. a. 4
//   b. in = benar, preorder = salah, post = benar