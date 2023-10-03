#include <stdio.h>
int main(void){
 int cel;
 int fahr;

for(fahr=0; fahr<=300; fahr=fahr+1)
      {
    cel=5 *(fahr-32)/9;
     printf("%d\t%d\n" ,fahr,cel);
       }
return(0);
