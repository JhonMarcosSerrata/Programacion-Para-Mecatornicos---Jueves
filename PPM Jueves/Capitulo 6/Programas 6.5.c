#include <stdio.h>

/* Alumnos.
El programa, al recibir un arreglo bidimensional que contiene informacion
sobre calificaciones de alumnos en cuatro materias diferentes, obtiene resultados estadisticos. */

const int MAX = 50;
const int EXA = 4;

void Lectura(float [MAX][EXA], int); //Prototipos de funciones.
void F1(float [MAX][EXA], int);
void F2(float [MAX][EXA], int);

void main(void)
{
    int NAL;
    float ALU[MAX][EXA];
    do
    {
            printf("Ingrese el numero de alumnos del grupo: ");
            scanf("%d", &NAL);
    }   //Se verifica que el numero de alumnos del grupo sea valido.
    while (NAL>MAX || NAL<1);
    Lectura(ALU, NAL);
    F1(ALU, NAL);
    F2(ALU, NAL);
}

void Lectura(float A[][EXA], int N)
/* La funcion Lectura se utiliza para leer un arreglo bidimensional de tipo
real de N filas y EXA columnas. */
{
    int I, J;
    for (I=0; I<N; I++);
        for (J=0; J<EXA; J++);
        {
            printf("Ingrese la calificacion %d del alumno %d: ", J+1, I+1);
            scanf("%f", &A[I][J]);
        }
}

void F1(float A[][EXA], int T)
// Esta funcion se utiliza para obtener el promedio de cada estudiante.
{
    int I, J;
    float SUM, PRO;
    for (I=0; I<T; I++)
    {
        SUM=0;
        for (J=0; J<EXA; J++)
                SUM += A[I][J];
            PRO = SUM / EXA;
            printf("\nEl promedio del alumno %d es: %5.2f", I+1, PRO);
    }
}

void F2(float A[][EXA], int T)
/* Esta funcion se utiliza tanto para obtener el promedio de cada examen , asi
como tambien el examen que obtuvo el promedio mas alto. */
{
    int I, J, MAY;
    float SUM,PRO, MPRO = 0;
    printf("\n");
    for (J=0; J<EXA; J++)
    {
        SUM =0;
        for (I=0; I<T; I++)
            SUM += A[I][J];
        PRO = SUM / T;
        if (PRO > MPRO)
        {
            MPRO = PRO;
            MAY = J;
        }
            printf("\nEl promedio del examen %d es: %f", J+1, PRO);
    }
    printf("\n\nEl examen con mayor promedio es: %d \t Promedio: %5.2f", MAY+1, MPRO);

}
