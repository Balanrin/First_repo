#include <stdio.h>
#include <math.h>

int main (void) {

   int enter = 101000 ;

   int rest=enter;
   int exponent = 0;
   int total =0;

   while (rest !=0 ) {
        int add = pow(2,exponent);
        printf("rest have a modulus = to %d\n", rest%10);
        if (rest%10==1) {
                total = total + add;
                printf("We add %d to total %d\n", add, total);
        }

        rest = rest/10;
        exponent ++;
   }

   printf("\nFinal result is %d\n", total);

   return 0;
}
