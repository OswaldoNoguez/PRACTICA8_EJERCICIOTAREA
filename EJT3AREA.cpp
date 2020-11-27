#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "");
	char letra;
	enum booleano{FALSE,TRUE};
	enum booleano valorBooleano;
	printf("\t\t\t\t\t\tELIJA EL PORGRAMA QUE DESEE EJECUTAR\n");
	printf ("a) Teclee la letra 'a' si quiere elegir el programa que ejecuta una condición que siempre es verdadera e imprime 'Fundamentos de programación'\n");
	printf ("b) Teclee la letra 'b' si quiere elegir el programa que ejecuta una condición compuesta que siempre es falsa e imprime en el else 'Error'\n");
	printf ("c) Teclee la letra 'c' si quiere elegir el programa del condicional anidado con condicional ternario que te dirá que número es mayor entre tres números dados\n");
	scanf("%c",&letra);
	switch(letra){
		case 'a':
			valorBooleano=TRUE;
			if (valorBooleano){
				printf("Fundamentos de programación");
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
			printf ("Ingrese 3 números separados por espacios:\n"); 
			scanf ("%d %d %d", &uno, &dos, &tres); 
			(uno > dos)?/*PRIMER IF se cumple*/(dos > tres)?/*SEGUNDO IF se cumple y se imprime...*/printf("%d es mayor a %d que es mayor a %d\n", uno, dos, tres):/*Estos dos 
			puntos representan el ELSE DEL SEGUNDO IF*/(uno > tres)?/*TERCER IF; en este punto ya sabemos que uno>dos y tres>dos, por lo que este if nos ayuda a saber quién 
			es mas grande entre uno y tres, si uno es mas grande que tres se entra aquí y se imprime...*/printf("%d es mayor a %d que es mayor a %d\n", uno, tres, dos)
			:/*ELSE DEL TERCER IF. A este else se entra si uno no es mayor a tres, por lo tanto, tres sería el mayor y el orden quedaría tres>uno>dos y se imprime...*/
			printf("%d es mayor a %d que es mayor a %d\n", tres, uno, dos):/*ELSE DEL PRIMER IF; aquí se entra si uno no es mayor a dos por lo que sabemos entonces que dos>uno*/
			(dos > tres)?/*CUARTO IF, se válida que dos mayor a tres, por lo tanto, dos ya sería el mayor de los tres*/(tres > uno)?/*QUINTO IF, aquí sabemos que dos es el mayor 
			solo nos falta saber quién es más gande entre tres y uno, por lo que, en este if se válida que tres mayor a uno, si eso es verdad se imprime...*/
			printf("%d es mayor a %d que es mayor a %d\n", dos, tres, uno):/*ELSE DEL QUINTO IF, a este else se entra si tres no es mayor a uno, como sabemos que dos ya es el 
			mayor de todos, entonces el orden es dos>uno>tres y se imprime...*/printf("%d es mayor a %d que es mayor a %d\n", dos, uno, tres):/*ELSE DEL CUARTO IF; aquí se entra 
			si dos no es mayor a tres, en este punto ya sebemos que dos es mayor a uno, por lo tanto, tres es el mayor, seguido de dos y uno es el menor y se imprime...*/
			printf("%d es mayor a %d que es mayor a %d\n", tres, dos, uno);
		break;
		default:
			printf("Opción inválida, por favor selecione una letra válida\n");
	}
	
	return 0;
}
