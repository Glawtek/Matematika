#include <iostream>
#include <math.h>
#include <string>

using namespace std;
//biar simple aja sih :V
void Clear()
{
	system("cls");
}

void Pause() {
	cout << "Tekan Enter untuk Kembali ke menu yang awal . . .";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
}
void credit() {
	cout << "Penyelesaian Matematika dibuat oleh: GuckTube YT\n" << endl;
}

int main() {
	int a;
	Clear();
	credit();
	cout << "1. Kubus & Balok" << endl;
	cout << "2. Perkalian" << endl;
	cout << "3. Bangun Segi Empat" << endl;
	cout << "4. Keluar\n" << endl;
	cout << "Pilih Nomor: ";
	
	cin >> a;
	if (a == 1)
	{
		Clear();
		credit();
		cout << "Anda telah memilih Kubus & Balok\n" << endl;
		cout << "1. Kubus" << endl;
		cout << "2. Balok" << endl;
		cout << "3. Kembali\n" << endl;
		cout << "Pilih Nomor: ";
		cin >> a;
		if (a == 1)
		{
			Clear();
			credit();
			cout << "Anda telah memilih Kubus\n" << endl;
			cout << "Panjang Kubus = ";
			cin >> a;
			cout << endl;
			cout << "Rumus Volume Kubus = V = S x S x S" << endl;
			cout << "                     V = " << a << " x " << a << " x " << a << endl;
			int result1 = a * a * a;
			cout << "                     V = " << result1 << endl;
			cout << endl;
			cout << "Rumus Luas Permukaan Kubus Kubus = L = 6 x S x S" << endl;
			cout << "                                 = L = 6 x " << a << " x " << a << endl;
			int results2 = 6 * a * a;
			cout << "                                 = L = " << results2 << endl;
			cout << endl;
			Pause();
			Clear();
			main();
		}
		if (a == 2)
		{
			Clear();
			credit();
			cout << "Anda telah memilih Balok\n" << endl;
			int tinggi;
			int lebar;
			int panjang;
			cout << "Tinggi Balok = ";
			cin >> tinggi;
			cout << "Lebar Balok = ";
			cin >> lebar;
			cout << "Panjang Balok = ";
			cin >> panjang;
			cout << endl;
			cout << "Rumus Volume Balok = V = P x L x T" << endl;
			cout << "                   = V = " << panjang << " x " << lebar << " x " << tinggi << endl;
			int result1 = panjang * lebar * tinggi;
			cout << "                   = V = " << result1 << endl;
			cout << endl;
			cout << "Rumus Luas Permukaan Balok = L = 2 x ((P x L) + (P x T) + (L x T))" << endl;
			cout << "                             L = 2 x ((" << panjang << " x " << lebar << ") + (" << panjang << " x " << tinggi << ") + (" << lebar << " x " << tinggi << "))" << endl;
			int pkl = panjang * lebar;
			int pkt = panjang * tinggi;
			int lkt = lebar * tinggi;
			cout << "                             L = 2 x (" << pkl << " + " << pkt << " + " << lkt << ")" << endl;
			int totaldikurung = pkl + pkt + lkt;
			cout << "                             L = 2 x " << totaldikurung << endl;
			int totalnya = 2 * totaldikurung;
			cout << "                             L = " << totalnya << endl;
			Pause();
			Clear();
			main();
		}
		if (a == 3)
		{
			Clear();
			main();
		}
	}
	if (a == 2)
	{
		int num1;
		int num2;
		Clear();
		credit();
		cout << "Anda telah memilih Perkalian\n" << endl;
		cout << "Nomor perkalian = ";
		cin >> num1;
		cout << "Sampai perkalian = ";
		cin >> num2;
		cout << endl;
		for (int i = 1; i < num2; i++)
		{
			int result1 = num1 * i;
			cout << num1 << " x " << i << " = " << result1 << endl;
		}
		int result2 = num1 * num2;
		cout << num1 << " x " << num2 << " = " << result2 << endl;
		cout << endl;
		Pause();
		Clear();
		main();
	}
	if (a == 3)
	{
		Clear();
		credit();
		cout << "1. Persegi" << endl;
		cout << "2. Jajargenjang" << endl;
		cout << "3. Trapesium" << endl;
		cout << "4. Belah Ketupat" << endl;
		cout << "5. Kembali" << endl;
		cout << endl;
		cout << "Pilih Nomor: ";
		cin >> a;
		if (a == 1)
		{
			Clear();
			credit();
			int sisi;
			cout << "Berapa Angka Sisi = ";
			cin >> sisi;
			cout << endl;
			cout << "Luas = L = S x S" << endl;
			cout << "       L = " << sisi << " x " << sisi << endl;
			int results = sisi * sisi;
			
			cout << "       L = " << results << endl;
			cout << endl;
			cout << "Keliling = K = 4 x S" << endl;
			cout << "           K = 4 x " << results << endl;
			int results2 = 4 * results;
			cout << "           K = " << results2 << endl;
			cout << endl;
			Pause();
			Clear();
			main();
		}
		if (a == 2)
		{
			Clear();
			credit();
			int alas;
			int tinggi;
			int ab;
			int ad;
			cout << "Alas Jajargenjang = ";
			cin >> alas;
			cout << "Tinggi Jajargenjang = ";
			cin >> tinggi;
			cout << "Sisi Jajargenjang Pertama (AB) = ";
			cin >> ab;
			cout << "Sisi Jajargenjang Kedua (AD) = ";
			cin >> ad;
			cout << endl;
			cout << "Luas = L = A (Alas) x T (Tinggi)" << endl;
			cout << "       L = " << alas << " x " << tinggi << endl;
			int results = alas * tinggi;
			cout << "       L = " << results << endl;
			cout << endl;
			cout << "Keliling = K = 2 x (AB + AD)" << endl;
			cout << "           K = 2 x (" << ab << " + " << ad << ")" << endl;
			int tambahtandakurung = ab + ad;
			cout << "           K = 2 x " << tambahtandakurung << endl;
			int results2 = 2 * tambahtandakurung;
			cout << "           K = " << results2 << endl;
			cout << endl;
			Pause();
			Clear();
			main();
		}
		if (a == 3)
		{
			//Trapesium belum tersedia
			Clear();
			main();
		}
		if (a == 4)
		{
			//belah ketupat belum tersedia
			Clear();
			main();
		}
		if (a == 5)
		{
			//layang layang belum tersedia
			Clear();
			main();
		}
		if (a == 6)
		{
			Clear();
			main();
		}
	}
	if (a == 4)
	{
		exit(0);
		return 0;
	}
	if (a > 4)
	{
		Clear();
		main();
	}
}
