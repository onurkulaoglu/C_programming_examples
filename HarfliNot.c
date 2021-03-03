#include <stdio.h>
int main(int argc, const char** argv[]){
	float not = 0;
	printf("100 uzerinden aldiginiz notu giriniz: \n");
	scanf("%f", &not);
	
	if(not > 100 || not < 0){
		printf("Girdiginiz deger [0,100] olmali !");
	}
	else if (not >=92) printf("Notunuzun harfli not karsiligi:AA ");
	else if (not >=85) printf("Notunuzu harfli not karsiligi:BA");
	else if (not >=80) printf("Notunuzun harfli not karsiligi:BB");
	else if (not >=75) printf("Notunuzun harfli not karsiligi:CB");
	else if (not >=67) printf("Notunuzun harfli not karsiligi:CC");
	else if (not >=58) printf("Notunuzun harfli not karsiligi:DC");
	else if (not >=50) printf("Notunuzun harfli not karsilgi:DD");
	else printf ("Notunuzun harfli not karsiligi: Cetvelini al bute GEL ABI");
	return 0;
	
	
	
	
}
