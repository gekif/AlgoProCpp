#include<stdio.h>
#include<string.h>

int main () {
	
	char str[30];
	
	scanf("%[^\n]", str);
	getchar();
	
	int panjang = strlen(str);
	
	// Function untuk buat huruf besar
	/*
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] >=  'a' && str[i <= 'z']) {
			str[i] -= 32;
		}
	}
	*/
	
	// strupr -> string ubah besar
	// strlwr -> string ubah kecil
	printf("%s", strupr(str));
	
	return 0;
	
}
