#include<stdio.h>


/*
struct rectangle {
	int length;
	int width;
};
*/

// Ingin hilangkan tulisan struct di main
typedef struct {
	int length;
	int width;
} rectangle;

/*
// Struct khusus CPP 
struct rectangle {
	int length;
	int width;
};
*/

struct person {
	char name[200];
	int age;
};	

struct info {
	person pemilik;
	rectangle luasBangunan;
};


int main () {
	
	// Membingungkan
//	int length[20];
//	int width[20]; 

	// Panggil Struct 
//	struct rectangle kotak1;
//	kotak1.length = 10;

/*
	//  Inisiasi struct
	struct rectangle kotak1 = {
		10, // length
		5 // width
	};
*/

	// Tanpa kata struct
	rectangle kotak1 = {
		10, // length
		5 // width
	};
	
//	printf("%d", kotak1.length * kotak1.width);

	person orang1 = {"Player 1", 20};

//	printf("%s", orang1.name);
	
	
	// Gabungin Person dan Rectangle
	
	info infoBangunan = {{"Adi", 25}, {20, 10}};
	
	printf("%s berumur %d tahun memiliki luas bangunan = %d meter persegi\n", 
		infoBangunan.pemilik.name, infoBangunan.pemilik.age, 
		infoBangunan.luasBangunan.length * infoBangunan.luasBangunan.width
	);
	
	return 0;
}
