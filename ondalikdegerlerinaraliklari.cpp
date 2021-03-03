#include<stdio.h>
#include<float.h>
int main(int argc,char**argv){
	printf("float veri tipinin min degeri:%.5g \n",FLT_MIN);
	printf("float veri tipinin max degeri:%.5g \n",FLT_MAX);
	printf("float veri tipnini kesinlik degeri: %d\n",FLT_DIG);
	printf("double veri tipinin min degeri:%.5g \n",DBL_MIN);
	printf("double veri tipinin max degeri: %.5g \n",DBL_MAX);
	printf("double veri tipinin kesinlik degeri: %d \n",DBL_DIG);
	printf("long double veri tipnin min degeri: %.5g \n",LDBL_MIN);
	printf("long double veri tipinin max degeri: %.5g \n",LDBL_MAX);
	printf("long double veri tipinin kesinlik degeri: %d \n",LDBL_DIG);
	return 0 ;
	
	
	
	
}
