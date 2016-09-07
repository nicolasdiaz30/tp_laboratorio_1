#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
/** \brief solicita 2 numeros al usuario,los calcula y devuelve el resultado
 *
 * \param opcion Es el calculo a elegir por el usuario
 * \param n1 primer numero a calcular
 * \param n2 segundo numero a calcular
 * \return resultado del calculo
 *
 */


int main()
{
    int opcion=0;
    float n1=0, n2=0, resultado;

    while(opcion!=9)
    {
        system("cls");
        printf("1- Ingresar 1er operando (A=%.2f)\n", n1);
        printf("2- Ingresar 2do operando (B=%.2f)\n", n2);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("ingrese num1:\n");
                    scanf("%f",&n1);

                break;

            case 2:
                printf("ingrese num2:\n");
                    scanf("%f",&n2);
                break;

            case 3:
                resultado=sumar(n1, n2);
                printf("la Suma da: %.2f\n", resultado);
                system("pause");
                break;
            case 4:
                resultado=restar(n1, n2);
                printf("la resta da: %.2f\n", resultado);
                system("pause");
                break;
            case 5:
                resultado=division(n1, n2);
                printf("la division da: %.2f\n", resultado);
                system("pause");
                break;
            case 6:
                resultado=multiplicacion(n1, n2);
                printf("la multiplicacion da: %.2f\n", resultado);
                system("pause");
                break;
            case 7:
                resultado=factorial(n1);
                printf("el factorial da: %.2f\n", resultado);
                system("pause");
                break;
            case 8:
                resultado=sumar(n1, n2);
                printf("la Suma da: %.2f\n", resultado);

                resultado=restar(n1, n2);
                printf("la resta da: %.2f\n", resultado);

                resultado=division(n1, n2);
                printf("la division da: %.2f\n", resultado);

                resultado=multiplicacion(n1, n2);
                printf("la multiplicacion da: %.2f\n", resultado);

                resultado=factorial(n1);
                printf("el factorial da: %f\n", resultado);
                system("pause");
                break;
            case 9:
                break;
        }


}

    return 0;
}
