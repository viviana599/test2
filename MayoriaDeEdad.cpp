/*0.Inicio 
1.	Declaracion de variables
1.1.1.	Entero      eContadorAlumnos=26
1.1.2.	Booleano bMayorEdad= VERDADERO
2.	MIENTRAS (eContador Alumnos >0 AND bMayorEdad ==VERDADERO)
2.1.	Escribir "dame tu edad"
2.2.	Leer eEdadAlumno
2.3.	eContadorAlumnos
2.4.	SI (eEdadAlumno<18)
2.4.1.	 bMayorEdad=FALSO
2.5.	FIN SI
3.	FIN MIENTRAS
4.	SI (bMayor Edad ==TRUE)
4.1.	Escribir "Todos mis alumnos son mayores de edad
5.	SINO
5.1.	5.1 Escribir "no todos los alumnos no son mayores de edad"
6.	FIN SI
7.	FIN */
#include <stdio.h>
#define booleano int
#define VERDADERO 1
#define FALSO 0

int main(){

 int eEdadAlumno
 int eContadorAlumnos= 26;
 booleano bMayorEdad= VERDADERO;

 while (eContadorAlumnos >0 && bMayorEdad == VERDADERO){

    printf ("dame tu edad");
    scanf("%d", &eEdadAlumno);
    eContadorAlumnos--;
    if(eEdadAlumno<18){
	 bMayorEdad=FALSO;
	}
    }
 if(bMayor Edad ==VERDADERO){
	
	 printf("Todos mis alumnos son mayores de edad");
	
	}else{
	 printf("no todos los alumnos son mayores de edad");
	}

}

