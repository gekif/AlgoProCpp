#include<stdio.h>

int main(){
	
	// SELECTION
	/*
		1. If, Else If, Else
		2. Switch Case 
		3. Ternary If
	*/
	
//	int angka = 2;
	
	// Kalau angka 0 print "nol"
	// Kalau angka ganjil print genap
	// Kalau angka genap print genap
	
	/*
	if (angka == 0)  {
		printf("Nol\n");
	}
	else if (angka % 2 == 1) {
		printf("Ganjil\n");
	} 
	else {
		printf("Genap\n");
	}
	*/
	
	/*
	int angka = 3;
	
	switch (angka) {
		case 0:
			printf("nol");
			break;
		case 1:
			printf("satu");
			break;
		case 5:
			printf("lima");
			break;
		default:
			printf("Selain 0 1 5");
   }
   */
   
   int angka = 3;
   
   //kondisi ? benar : salah
//   printf("%s", (angka % 2 == 0 ? "genap" : "ganjil" ));
     printf("%s", (angka < 2 ? "lebih kecil dari 2" : 
	               angka > 2 ? "lebih besar dari 2" : "2"));
	
	
	return 0;
}
