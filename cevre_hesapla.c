#include <stdio.h>
#define PI_SAYISI 3.14
int main(int argc, char *argv[])

{

int yaricap;
float cevre;
/*Kullanicidan yaricapi al*/
printf("\nYaricapi giriniz:");
scanf("%d", &yaricap);

cevre = 2 * PI_SAYISI * yaricap;
printf("Dairenin cevresi:%.2f\n", cevre);

return 0;
}
