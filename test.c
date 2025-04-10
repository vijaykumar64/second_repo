#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   int n=10;
    int t=4;
    int sum=n;
    while(n!=1){
     int test=n/t;
     int mul=n-(test*t);
     sum=sum+test;
     n=test+mul;

    }
    printf("%d",sum);
   
}
