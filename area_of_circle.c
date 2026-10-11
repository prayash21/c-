#include <stdio.h> 
#include <math.h>
const float pi = 3.14;
int main(){
    // to make a program to calculate the area of circle ,surface area and volume of sphere 


    float  area = 0 ,  radius = 0 , volume = 0 , surf_area = 0 ;

    printf("whats your radius?:   ");
    scanf("%f",&radius);

    area = pi * pow(radius,2  );
    surf_area = 4.0 * pi * pow(radius , 2);
    volume = (4.0/3.0) * pi * pow(radius,  3);

    printf("The area of the circle is: %.2f\n ", area );
     printf("The surface area of the sphere  is: %.2f\n ", surf_area );
    printf("The volume  of the  sphere  is: %.2f", volume );

    return 0;


    
}
