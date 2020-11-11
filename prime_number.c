#include <stdio.h>

int is_prime(unsigned long n){
    if(n > 1){
        for (int i = 2; i < n; i++){
            if (n % i == 0) return 0;
        }
        return 1;
    } else {
        return 0;
    }
}

int main(){
    unsigned long n;
    puts("Print a number: ");
    scanf("%lu", &n);
    int test = is_prime(n);
    if (test == 0){
        puts("no");
    } else{
        puts("yes");
    }
}
