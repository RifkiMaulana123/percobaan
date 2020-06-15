#include <stdio.h>
#include <stdlib.h>

long saldo=100000,deposit, withdraw;
int pilihan, pin, keluar, counter;
char lanjut = 'y';
void ceksaldo ();
void penarikan_uang ();
void deposit_uang ();
void selesai ();

void ceksaldo (){
                printf("\n------------------\n");
				printf("Menu Cek Saldo\n");
				printf("------------------\n");
				printf ("Saldo Anda:%d\n",saldo);

}
void penarikan_uang (){
printf("\n------------------\n");
				printf("Menu Penarikan Uang\n");
				printf("------------------\n");
				printf("Masukkan nominal uang yang akan ditarik:");
				scanf("%d",&withdraw);

				if(withdraw % 100 != 0){
					printf("Harus dalamm pecahan 100\n");
				}
				else if (withdraw > saldo){
					printf("saldo tidak mencukupi\n");
				}
				else if(withdraw<saldo){
                    saldo=saldo - withdraw;
                    printf("Sisa saldo anda:%d\n",saldo);
				}
}

void deposit_uang(){
                printf("\n------------------\n");
				printf("Menu Deposit Uang\n");
				printf("------------------\n");
				printf ("Masukkan jumlah uang yang akan dideposit :");
				scanf("%d",&deposit);
				saldo=saldo + deposit;
				printf("Jumlah uang Anda tersisa:%d\n",saldo);
}

void selesai(){
printf("Anda telah keluar dari layanan.\n");
}

int main() {
	counter=0;
	while (pin!=1234) {
		printf ("Masukkan PIN :");
		scanf("%d",&pin);

		if (pin!=1234) {
			printf("PIN yang adan masukkan salah\n");
			counter++;

			if (counter==3) {
			printf("Kartu ATM Anda terblokir");
			exit(0);
			}
		}

	}

	do {
		printf("\n*****Selamat Datang di Layanan ATM*****\n");
		printf("-----------------------------------------\n");
		printf("1. Cek Saldo\n");
		printf("2. Penarikan Uang\n");
		printf("3. Deposit Uang\n");
		printf("4. Keluar\n");
		printf("-----------------------------------------\n");
		printf("Masukkan pilihan Anda :");
		scanf("%d",&pilihan);

		switch (pilihan) {
			case 1:
			    ceksaldo();
				break;

			case 2:
			    penarikan_uang();
				break;

			case 3:
			    deposit_uang ();
				break;

			case 4:
				selesai();
				break;

			default:
				printf("Pilihan Anda salah!\n");
		}

		printf("Apakah Anda ingin melanjutkan transaksi? (y/n) ");
		fflush(stdin);
		scanf("%c",&lanjut);
		if (lanjut=='n' || lanjut=='N'){
			keluar=1;
		}

	} while (!keluar);

	printf("Terima kasih sudah menggunakan layanan kami");

	return 0;
}
