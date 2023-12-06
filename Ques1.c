#include<stdio.h>
#include<stdbool.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    bool isprime = true;
    for(int i = 2 ; i <= n/2 ; i++){
        if( n % i == 0 ){
           isprime  = false;
        }
    }
    if(n == 0) printf("The number is neither prime nor composite\n");
    else if (isprime ) printf("The number is prime\n");
    else printf("The number is not prime\n");
    return 0;
}
