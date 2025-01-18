// 1. Write a program to print multiplication table of a given number n.

// #include<stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);
//     for(int i = 0 ; i <= 10 ; i++){
//         printf("%d x %d = %d \n", n , i , n*i);
//     }
//     return 0;
// }

// 2. Write a program to print multiplication table of 10 in reversed order.

// #include<stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);
//     for(int i = 10 ; i>=0 ; i--){
//         printf("%d x %d = %d \n", n , i , n*i);
//     }
//     return 0;
// }

// 5. Write a program to sum first ten natural numbers using while loop.

// #include<stdio.h>

// int main() {
//     int sum = 0;
//     int i =1;
//     while(i<=10){
//         sum+=i;
//         i++;
//     }

//     printf("%d\n", sum);

//     return 0;
// }

// 6. Write a program to implement program 5 using ‘for’ and ‘do-while’ loop.

// #include<stdio.h>

// int main() {
//     int s = 0;
//     for(int i = 1; i<=10 ; i++){
//         s+=i;
//     }
//     printf("%d\n", s);
//     return 0;
// }

// #include<stdio.h>

// int main() {
//     int i = 1;
//     int s = 0;
//     do{
//         s+=i;
//         i++;
//     } while(i<=10);
//         printf("%d\n", s);
//     return 0;
//}

// 7. Write a program to calculate the sum of the numbers occurring in the
// multiplication table of 8. (consider 8 x 1 to 8 x 10).

// #include<stdio.h>

// int main() {
//     int s = 0;
//     for(int i = 1; i<=10 ; i++){
//         s+=(8*i);
//     }
//     printf("%d", s);
//     return 0;
// }

// 8. Write a program to calculate the factorial of a given number using a for loop.

// #include<stdio.h>

// int main() {
//     int p = 1;
//     int n = 4;
//     for(int i = 1; i<=n ; i++){
//         p*= i;
//     }
//     printf("%d", p);
//     return 0;
// }

// 9. Repeat 8 using while loop.

// #include<stdio.h>

// int main() {
//     int n = 4;
//     int i = 1;
//     int p = 1;
//     while(i<=n){
//         p*= i;
//         i++;
//     }
//     printf("%d", p);
//     return 0;
// }

// 10. Write a program to check whether a given number is prime or not using loops.

// #include <stdio.h>

// int main()
// {
//     int n = 0;
//     int p = 0;
//     if (n == 0 || n == 1)
//     {
//         p = 1;
//     }
//     else
//     {
//         for (int i = 2; i < n; i++)
//         {
//             if (n % i == 0)
//             {
//                 p = 1;
//                 break;
//             }
//         }
//     }
//     if (p)
//     {
//         printf("%d is not prime", n);
//     }
//     else
//     {
//         printf("%d is prime", n);
//     }
//     return 0;
// }

// 11. Implement 10 using other types of loops.
