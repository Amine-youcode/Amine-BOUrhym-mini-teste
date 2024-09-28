#include <stdio.h>

int main() {
  int haut;
  int basse;
  int a;
  int T[5];
  printf("entrer les TABLEAU \n");
  
  for (a=0;a<5;a++){
      
      printf("T[%d]= ",a);
      scanf("%d",&T[a]);
  }
  haut=T[0];
  for(a=0;a<5;a++){
      if(haut<T[a]){
          haut=T[a];
      }
      
  }
   printf("le plus haut temperature: %i \n",haut);
  basse=T[0];
  for(a=0;a<5;a++){
      if(basse>T[a]){
          basse=T[a];
      }
     
  }
   printf("le plus basse: %i \n",basse);
   
   
    
}