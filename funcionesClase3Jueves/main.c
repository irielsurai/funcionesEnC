#include <stdio.h>
#include <stdlib.h>

void calcular(int numUno, int numDos, int operacion);
int sumar(int numero1,int numero2);
int restar(int numero1,int numero2);
int multiplicar(int numero1,int numero2);
int dividir(int numero1,int numero2);


int main()
{
    calcular(3,7,1);
    calcular(10,2,4);
    calcular (2,3,3);
    calcular (1,1,2);
    return 0;
}



void calcular (int numUno, int numDos, int operacion)
{
    float resultado;
    switch (operacion)
    {
        case 1:
            resultado = sumar (numUno, numDos);
            break;
        case 2:
            resultado = restar (numUno, numDos);
            break;
        case 3:
            resultado = multiplicar (numUno, numDos);
            break;
        case 4:
            resultado = dividir (numUno, numDos);
            break;
    }
    printf("La cuenta da: %f \n", resultado);
}

int sumar(int numero1, int numero2)
{
    int suma;
    suma = numero1 + numero2;
    return suma;
}
int restar(int numero1, int numero2)
{
    int resta;
    resta = numero1 - numero2;
    return resta;
}
int multiplicar(int numero1, int numero2)
{
    int producto;
    producto = numero1 * numero2;
    return producto;
}
int dividir(int numero1, int numero2)
{
    int cociente;
    cociente = numero1 / numero2;
    return cociente;
}





/*
int sumar(int numero1,int numero2);
void saludar();  // no retorna nada -- acà estoy haciendo el PROTOTIPO
void calcular(int numUno, int numDos, int operacion);



int main()  // retorna un cero
{
    calcular(3,7,1);
    calcular(10,2,4);
    calcular (2,3,3);
    calcular (1,1,2);

    int valor;
    saludar();
    valor = sumar(77, 33);
    printf("La suma da: %d", valor);
    return 0;
}

int sumar(int numero1, int numero2) //variable linkeada como parámetro.
{
    int suma;
    suma = numero1 + numero2;
    return suma;
}

void calcular (int numUno, int numDos, int operacion)
{
    if ()
}

void saludar()  //haciendo la función
{
    printf("Hello world!\n");
}

*/
