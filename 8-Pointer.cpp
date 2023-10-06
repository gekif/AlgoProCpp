#include<stdio.h>

int main () {
	int a = 0;
	int *p;
	p = &a; // & -> Alamat A
	
	int **p2;
	p2 = &p;
	
//	printf("%d\n", a);
//	printf("%d\n", p);
	
	// &a itu reference dari p
//	printf("%d\n", &a);
	
	// menunjuk bahwa pointer p ke A
//	printf("%d\n", *p);

	// print 0
//	printf("%d\n", **p2);
	
	// print alamat a, jika &a nunjukin alamat
//	printf("%d\n", *p2);

	
	
	return 0;
}
