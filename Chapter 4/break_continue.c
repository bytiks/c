#include<stdio.h>

int main() {
    for(int i = 0; i<15; i++){
        if(i==5){
            continue;
        }
        printf(" %d ", i);
        
    }
    return 0;
}