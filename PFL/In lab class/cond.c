#include <stdio.h>
int main(){
    float marks;
    scanf("%f", &marks);
    if(marks >= 40){
        printf("Pass");
    };
    if(marks < 40){
        printf("Fail");
    };

    return 0;
}
