#include <stdio.h>
int main(void){
 float cel; //float is a datatype while cel is the varable name, float over int to avoid truncation.
 float fahr;  //float is a datatype while fahr is the variable name

for(fahr=0; fahr<=300; fahr=fahr+1)
      {
    cel = (5.0/9.0) * (fahr-32.0);
    printf("%3.0f %6.1f\n", fahr, cel);//Prints fahr to no decimal place and cel to one decimal place.
       }
return(0);
}
