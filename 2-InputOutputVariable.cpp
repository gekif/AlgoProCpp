#include<stdio.h>


int main(){	
	
	//  Print 1 baris
//	printf("Hello World!");

	
	// Print 2 baris
//	printf("Hello World!\nasd");


	// Input
	
	// Kumpulan Variabel
//	int angkaBulat = 10;
	int angkaBulat;
	float angkaKoma =  1.5f;
	char karakter =  'a';
	char string[100] = "Hello";
	
	
//	printf("Umur kamu = %d", umur);


	// Terima input dan print
	scanf("%d", &angkaBulat);
	getchar();
	printf("Angka Bulat = %d\n", angkaBulat);

	scanf("%f", &angkaKoma);
	getchar();
	printf("Angka Koma = %.3f\n", angkaKoma);	
	
	scanf("%c", &karakter);
	getchar();
	printf("Karakter = %c\n", karakter);
	
	scanf("%[^\n]", string);
	getchar();
	printf("String = %s\n", string);		
	
	
	// Print Semua Tanpa Input
	/*
	printf("Angka Bulat = %d\n", angkaBulat);
	printf("Angka Koma = %.3f\n", angkaKoma);	
	printf("Karakter = %c\n", karakter);
	printf("String = %s\n", string);	
	*/	
		
//	scanf();
	
	return 0;
}
