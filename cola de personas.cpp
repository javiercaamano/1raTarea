// Ejercicio Nro1

/* Realizar un algoritmo en C que permita ingresar las edades de 50 personas que aspiran a ingresar a un determinado trabajo.
   Se pide mostrar el total de personas cuyas edades superen el promedio de edades de los aspirantes.
   a pastir de los datos ingresados se pide generar un sub arreglo con las edades de los aspirantes mayores de 55 años
   y mostrar las edades de los mismo */


#include <stdio.h>
#include <conio.h>

#define N 5

int main (void)
{
    // Variables
    int edad[N],subarreglo[N];
    int sum=0,i=0,CantidadMayorQuePromedio=0,k=0,
    float prom;

    // Carga de edades y promedio de edades de Aspirantes
    for (i=0; i<N; i++)
    {
        printf("Ingrese edad %d\n", i+1);
        scanf("%d", &edad[i]);
        //fflush(stdin);
        sum=sum+edad[i];
    }
    prom=(float)sum/N;
    printf("El promedio es %f", prom);


    // Contar Mayores que promedio; Contar edades de +50
    for (i=0; i<N; i++)
    {
        if (edad[i]>prom)
            CantidadMayorQuePromedio++;
        if (edad[i]>55)
        {
            ContadorDeMas55=ContadorDeMas55+1; //cuento cada mayor de 55 años
            subarreglo[k]=edad[i]; //Guardo la edad en el nuevo arreglo
            k++; //muevo el indice del sub arreglo

    }
    printf("La cantidad de aspirantes que superan el promedio es de: %f", CantidadMayorQuePromedio);

}
