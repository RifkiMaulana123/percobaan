/**
Nama: Kurnia Ramadhan Putra
Tanggal: 19-02-2020
Nama Program: menu_program.c
*/
#include <stdio.h>

double tambah(double a, double b) {
	return a + b;
}

int main() {
	int pilihan;
	double angka1, angka2;

	printf("Menu Program\n");
	printf("----------------------\n");
	printf("1. Tambah\n");

	printf("Masukkan pilihan Anda : ");
	scanf("%d", &pilihan);

	printf("Masukkan Angka I : ");
	scanf("%lf",&angka1);
	printf("Masukkan Angka II : ");
	scanf("%lf",&angka2);

	switch (pilihan) 
	{
		case 1:
			printf("Hasil penjumlahan : ");
			printf("%.1f\n", tambah(angka1, angka2));
		break;
	}
	return 0;
}
