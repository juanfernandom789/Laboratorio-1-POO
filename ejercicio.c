#include<stdio.h>
int main(){
    float num_1;
    float num_2;
    float promedio = 0;

do{
    printf ("Ingrese la primera nota");
    scanf ("%f", &num_1);
}while (num_1<0 || num_1>20);

do {
    printf ("Ingrese la segunda nota");
    scanf ("%f", &num_2);
}while (num_2<0|| num_2>20);
    promedio= (num_1+num_2)/2;

    printf ("Promedio: %.2f", promedio);




    if (promedio >=14){
        printf ("Aprobado");
    }else {
    printf ("Reprobado");
    }
    return 0;


}
