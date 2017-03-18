#include<stdio.h>
int main(){
  float suma,aproximacion;
  int numero,i,j;
  printf("Proporcione un numero para aproximarte a PI: ");
  scanf("%d",&numero);
  suma=0;
  j=1;
  for(i=0;i<numero;i++){
    if(i==1||i%2!=0){
      suma-=(1.0/(i+j));
    }
    else{
      suma+=(1.0/(i+j));
    }
    j++;
  }
  aproximacion=4*suma;
  printf("Aproximacion = %f",aproximacion);
}
