#include<stdio.h>
int main(){
    float n_1;
    float n_2;
    float promedio = 0;

do{
    printf ("Ingrese la primera nota: ");
    scanf ("%f", &n_1);
}while (n_1<0 || n_1>20);

do {
    printf ("Ingrese la segunda nota");
    scanf ("%f", &n_2);
}while (n_2<0|| n_2>20);
    promedio= (n_1+n_2)/2;

    printf ("/nPromedio: %.2f", promedio);




    if (promedio < 11){
        printf ("/nReprobado");
    }else if (promedio > 11 && promedio <=13.99){
    printf ("/nSupletorio");
    }else {
    printf("/nAprobado");
    }
    return 0;


}
