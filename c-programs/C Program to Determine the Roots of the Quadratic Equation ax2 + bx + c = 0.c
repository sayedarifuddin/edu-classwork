#include<stdio.h>

int main(){
  float a,b,c;
  float d,r1,r2;

  printf("\n QUADRATIC EQUATION: ax^2+bx+c\n");

  printf("\n a: ");
  scanf("%f",&a);

  printf("\n b: ");
  scanf("%f",&b);

  printf("\n c: ");
  scanf("%f",&c);

  d = b * b - 4 * a * c;

 if(d < 0){
    printf("\n Roots are COMPLEX NUMBER.\n");

    printf("\n Roots of QUADRATIC EQUATION are: ");
    printf("%.3f%+.3fi",-b/(2*a),sqrt(-d)/(2*a));
    printf(", %.3f%+.3fi",-b/(2*a),-sqrt(-d)/(2*a));

    return 0;
  }
  else if(d==0){
   printf("\n Both roots are EQUAL.\n");

   r1 = -b /(2* a);
   printf("\n Root of QUADRATIC EQUATION is: %.3f ",r1);

   return 0;
  }
  else{
   printf("\n Roots are REAL NUMBERS.\n");

   r1 = ( -b + sqrt(d)) / (2* a);
   r2 = ( -b - sqrt(d)) / (2* a);
   printf("\n Roots of QUADRATIC EQUATION are: %.3f , %.3f \n",r1,r2);
  }

  return 0;
}
