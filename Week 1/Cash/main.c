#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main(void)
{
 float f;
 int count = 0;
  
 do {
   
 f = get_float("Change owed: ");
   
 }while(f<=0.00);

int cents = round(f * 100);

count += cents / 25;
cents = cents %25;
count += cents / 10;
cents = cents %10;
count += cents / 5;
cents = cents %5;
count += cents / 1;
cents = cents %1;

printf("%i\n",count);
}
