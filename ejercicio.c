#include<stdio.h>
int main(){
    float n_1;
    float n_2;
    float promedio = 0;
    float suma;

do{
    printf ("Ingrese la primera nota: ");
    scanf ("%f", &n_1);
}while (n_1<0 || n_1>20);

do {
    printf ("Ingrese la segunda nota: ");
    scanf ("%f", &n_2);
}while (n_2<0|| n_2>20);
    suma= n_1+n_2;
    promedio= suma/2;


    printf ("\nPromedio: %.2f", promedio);
    printf("\nSuma: %.2f", suma);



    if (promedio < 11){
        printf ("\nReprobado");
    }else if (promedio > 11 && promedio <=13.99){
    printf ("\nSupletorio");
    }else {
    printf("\nAprobado");
    }
    return 0;


}
