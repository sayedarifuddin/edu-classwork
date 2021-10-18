#include <stdio.h>

struct person
{
 char name[20];
 char doj[10];
 float salary;
}

p[3];

int main(void)
{
 int i=0;

 for(i=0;i<3;i++)
 {
  printf("ENTER PERSON NAME : ");
  scanf("%s",p[i].name);
  printf("DATE of JOINING (DDMMYYYY): ");
  scanf("%s",p[i].doj);
  printf("SALARY: ");
  scanf("%f",&p[i].salary);
 }

 for(i=0;i<3;i++)
 {
  printf("\n PERSON %d DETAIL",i+1);
  printf("\n NAME   : %s",p[i].name);
  printf("\n DoJ    : %s",p[i].doj);
  printf("\n SALARY : %.2f",p[i].salary);
 }
 return 0;
}
