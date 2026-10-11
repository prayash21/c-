#include <stdio.h>

int main(){
    // if statements 
    float number = 0.0;
    printf("number: ");
    scanf("%f",&number);

    if(number > 12.0){
        puts("youre a good guy");
    }
    else if (number > 0 && number<12) {
        puts("youre a bad guy");
    }
    else if(number <= 0){ 
        puts("youre not a human");

    }
    else if(number == 12.0){ 
        puts("youre a decent guy");

    }
return 0;

}