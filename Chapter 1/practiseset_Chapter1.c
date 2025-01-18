/* Q1. Write a C program to calculate area of a rectangle
a. Using hard coded inputs
b. USing user inputs*/


#include<stdio.h>

 int main() {
    int l = 6;
    int b = 4;
    printf("Area of rectangle is %d", l*b);

}

/*int main() {
    int l,b;
    printf("Enter length of rectangle \n");
    scanf("%d", &l); 

    printf("Enter breadth of rectangle \n");
    scanf("%d", &b);

    printf("Area of rectangle is %d", l*b);
}*/
/* Q2. Calculate area of circle and modify same program to calculate volume
 of cylinder givrn its radius and height*/


/*int main() {

    int pi = 3.14;
    int r = 7;
    printf("Area of circle is %d", pi*r*r);
    return 0;
}*/

/*int main() {
    
    float pi;
    int r;

    scanf("%f", &pi);
    scanf("%d", &r);

    printf("Area of circle is %f", pi*r*r);
    return 0;
}*/


/* Q3. Write a program to convert Celsius to Fahrenheit*/

//°F=(°C×9/5)+32

/*int main() {

    float c = 32;
    float convertoffahrenheit = c*9/5+32; 
    printf("%f", convertoffahrenheit);
}*/

/* q4. Write a program to calculate simple interest*/

// int main() {
//     float p = 34.1;
//     int r = 8;
//     int t = 5;

//     printf("The value of SI is %f" , (p*r*t)/100);
// }