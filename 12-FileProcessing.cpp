#include<stdio.h>


int main () {
	
	// File Based
	
	// Read, Write, Append
	
	// Buka, Operasi, Tutup (Open, Process, Close)
	
	// Mode Text File:
	/*
		r: read
		w: write
		a: append
		r+: read and write (harus sudah ada file, Ganti Karakter)
		w+: read and write (otomatis buat file jika tidak ada file, Write dari awal) ->  Overwrite
		a+: append and read
	*/
	
	char txt[200];
	
	FILE *fp;
	
//	fp = fopen("data.txt", "w");

	fp = fopen("data.txt", "a+");
	
	fprintf(fp, "123");
	rewind(fp);
	
	fscanf(fp, "%[^\n]", txt);
	printf("%s", txt);
	
	fclose(fp);
	getchar();
	
	return 0;

}
