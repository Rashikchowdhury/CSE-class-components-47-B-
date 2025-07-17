#include <stdio.h>

int main(){
 float ssc, hsc;
 printf("SSC gpa: ");
 scanf("%f", &ssc);

 printf("HSC gpa: ");
 scanf("%f", &hsc);

 if(ssc < 2.5 || hsc < 2.5){
    printf("Not Eligible");
 }
 else if ((ssc + hsc) < 6.0){
    printf("Not eligible");
 }
 else{
    printf("Eligible");
 }

 return 0;
}
