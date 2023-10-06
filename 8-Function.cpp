#include<stdio.h>


// Void: Function tanpa return

void printHelloWorld() {
	printf("Hello World");
}


int getNumber() {
	return 5;
}


/**
- Passing By Value: Kasih Value
- Passing By Reference: Kasih Alamat
*/

// PBV
/*
int sum(int first, int second) {
	int total = first + second;
	return total;
}
*/

//PBR
int sum(int *first, int *second) {
	// int total = first + second;
	
	// printf("Alamat: %d\n",  first);
	
	*first = 4;
	int total = *first + *second;
	return total;
}

int main () {
	
//	printHelloWorld();

//	int a = getNumber();
//	printf("%d", a);

//	printf("%d", getNumber());
	
//	printf("%d", sum(5,3));

int first = 3;
int second =  5;

// int hasilSum = sum(first, second);
int hasilSum = sum(&first, &second);

printf("%d\n", first);
//printf("%d", hasilSum);
	
	
	return 0;
}
