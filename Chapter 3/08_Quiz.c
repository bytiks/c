#include<stdio.h>

int main() {
    
   char Grade; 
   int m;
        printf(" Enter marks \n");
        scanf("%d", &m);
        if(m<=100 && m>=90){
            Grade = 'A';
            printf(" Grade %c", Grade);
        }
        else if(m<=90 && m>=80){
            Grade = 'B';
            printf(" Grade %c", Grade);
        }
        else if(m<=80 && m>=70){
            Grade = 'C';
            printf(" Grade %c", Grade);
        }
        else if(m<=70 && m>=60){
            Grade = 'D';
            printf(" Grade %c", Grade);
        }
        else if(m<=60 && m>=50){
            Grade = 'E';
            printf(" Grade %c", Grade);
        }
        else{
            Grade = 'F';
            printf(" Grade %c", Grade);
        }
          return 0;

}
