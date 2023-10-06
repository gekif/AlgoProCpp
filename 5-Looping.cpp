#include<stdio.h>

int main()  {
	
	// Repetition (Looping)
	
	//For, While, Do While, (While)
	
	//For (inisialisasi, Batas Akhir, perintah looping
	
	// for pada i++ untuk nambah setiap  1
//	for (int i = 0; i <= 10; i++) {

//	for (int i = 0; i <= 10; i += 2) {
//		printf("Halo\n");
//		printf("%d Halo\n", i);

//		printf("%d\n", i);
//	}

/*
	// Menggunakan break
	for (int i = 1;  i <= 10; i += 2) {
//		if (i == 5) break;

		// Continue itu di skip untuk angka 5
		if (i == 5) continue;
		
		printf("%d\n", i);
	}
*/

	// While
	
/*
	int j = 1;
	
	while (j <= 10) {
//		printf("%d\n", j);
//		j++;
		
		printf("%d\n", j++);
		
	}
*/

	// do ... while
/*
	int k = 1;
	
	do {
	
		printf("%d\n", k++);	
	
	} while(k <= 10);
*/
	
	// Nested Loop
/*	
	int size = 10;
	
	for (int i = 0; i < size; i++) {
//		printf("*");
		
//		printf("*****\n");
		for (int j = 0; j < size; j++){
			printf("*");
		}
		
		printf("\n");
	}
*/

	// Nested Loop menggunakan input
	int size = 10;
	
	scanf("%d", &size);
	
	for (int i = 0;  i < size; i++) {
		
		for (int j = 0; j < size;  j++) {
		
			if (i == 0 || i ==  size-1 || j == 0 || j == size-1) {
				printf("*");
			} else {
				printf(" ");
			}	
		}
		
		printf("\n");
	}
	
	return 0;
}
