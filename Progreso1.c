#include <stdio.h>
int main(){

int num;
float aux;
int i=0;
// Variables que se van a utilizar en el ejercicio

printf("Coloque un numero entero\n");
scanf("%d",&num);
// If para evitar la entrada de numeros negativos
if (num>0)
{
    //printf para que sea una interfas mas amigable
    printf("Numero entero positivo correcto\n");
    // Se incluyo un for el cual nos va a servir como contador
for (int i = 0; i < num; i++)
{
 aux=3.141632/i;

 printf("la respuesta es %f\n", aux );
}
}
else {
    printf("Debe colocar un numero positivo");
}
//else para que muestre el mensaje que solo son numero positivos 





}
