#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "");
	char letra;
	enum booleano{FALSE,TRUE};
	enum booleano valorBooleano;
	printf("\t\t\t\t\t\tELIJA EL PORGRAMA QUE DESEE EJECUTAR\n");
	printf ("a) Teclee la letra 'a' si quiere elegir el programa que ejecuta una condici�n que siempre es verdadera e imprime 'Fundamentos de programaci�n'\n");
	printf ("b) Teclee la letra 'b' si quiere elegir el programa que ejecuta una condici�n compuesta que siempre es falsa e imprime en el else 'Error'\n");
	printf ("c) Teclee la letra 'c' si quiere elegir el programa del condicional anidado con condicional ternario que te dir� que n�mero es mayor entre tres n�meros dados\n");
	scanf("%c",&letra);
	switch(letra){
		case 'a':
			valorBooleano=TRUE;
			if (valorBooleano){
				printf("Fundamentos de programaci�n");
			}
		break;
		case 'b':
			valorBooleano=FALSE;
			if(valorBooleano){
			}
			else 
			printf("Error");
		break;
		case 'c':
			int uno, dos, tres; 
			printf ("Ingrese 3 n�meros separados por espacios:\n"); 
			scanf ("%d %d %d", &uno, &dos, &tres); 
			(uno > dos)?/*PRIMER IF se cumple*/(dos > tres)?/*SEGUNDO IF se cumple y se imprime...*/printf("%d es mayor a %d que es mayor a %d\n", uno, dos, tres):/*Estos dos 
			puntos representan el ELSE DEL SEGUNDO IF*/(uno > tres)?/*TERCER IF; en este punto ya sabemos que uno>dos y tres>dos, por lo que este if nos ayuda a saber qui�n 
			es mas grande entre uno y tres, si uno es mas grande que tres se entra aqu� y se imprime...*/printf("%d es mayor a %d que es mayor a %d\n", uno, tres, dos)
			:/*ELSE DEL TERCER IF. A este else se entra si uno no es mayor a tres, por lo tanto, tres ser�a el mayor y el orden quedar�a tres>uno>dos y se imprime...*/
			printf("%d es mayor a %d que es mayor a %d\n", tres, uno, dos):/*ELSE DEL PRIMER IF; aqu� se entra si uno no es mayor a dos por lo que sabemos entonces que dos>uno*/
			(dos > tres)?/*CUARTO IF, se v�lida que dos mayor a tres, por lo tanto, dos ya ser�a el mayor de los tres*/(tres > uno)?/*QUINTO IF, aqu� sabemos que dos es el mayor 
			solo nos falta saber qui�n es m�s gande entre tres y uno, por lo que, en este if se v�lida que tres mayor a uno, si eso es verdad se imprime...*/
			printf("%d es mayor a %d que es mayor a %d\n", dos, tres, uno):/*ELSE DEL QUINTO IF, a este else se entra si tres no es mayor a uno, como sabemos que dos ya es el 
			mayor de todos, entonces el orden es dos>uno>tres y se imprime...*/printf("%d es mayor a %d que es mayor a %d\n", dos, uno, tres):/*ELSE DEL CUARTO IF; aqu� se entra 
			si dos no es mayor a tres, en este punto ya sebemos que dos es mayor a uno, por lo tanto, tres es el mayor, seguido de dos y uno es el menor y se imprime...*/
			printf("%d es mayor a %d que es mayor a %d\n", tres, dos, uno);
		break;
		default:
			printf("Opci�n inv�lida, por favor selecione una letra v�lida\n");
	}
	
	return 0;
}
