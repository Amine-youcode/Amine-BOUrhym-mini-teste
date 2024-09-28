#include <stdio.h>

int main() {
    float a;
    printf("entre la temperature: ");
    scanf("%f",&a);
   if (a >= 38){
       printf("vous avez de la fievre");
   }
   else 
   printf("votre temperature est normale");
    
}