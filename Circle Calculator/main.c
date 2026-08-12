#include <stdio.h>
#include <math.h>

int main(){

    //Variables
    double radius = 0.0;
    const double PI = 3.1415926;
    

    //Input 
    printf("Enter the radius of Circle :");
    scanf("%lf", &radius);

    //Calculation
    double area = radius * PI * radius;
    double surface_area = radius * PI * radius * 4;
    double volume = (4.0 / 3.0) * radius * PI * radius * radius;


    //Output
    printf("Area of Circle : %.2lf sq.cm\n", area);
    printf("Surface Area of Circle : %.2lf sq.cm\n", surface_area);
    printf("Volume of Circle : %.2lf cubic.cm\n", volume);


    return 0;
}

