/*#include <stdio.h>
void main(void)
{
	float base;
	float altura;
	float area;
	const int div = 2;

	printf("Base: ");
	scanf_s("%f", &base);
	printf("Altura: ");
	scanf_s("%f", &altura);

	area = (base * altura) / div;
	printf("\n\t\t  ===========================  ");
	printf("\n\t\tArea de un Triangulo es (%4.2f x %4.2f) / %i : %4.2f ", base, altura, div, area);
}
*/

/*
#include <stdio.h>

void main(void)
{
	int cont;
	int contren;
	int limite;

	printf("\t\tNumero de Asteriscos: ");
	scanf_s("%i", &limite);

	contren = 0;
	while (contren < limite) {
	
		cont = 0;

		while (cont < limite) {
			printf("*");
			cont++;
		}
		printf("\n");
		contren++;
	}
}
*/

/*

#include <stdio.h>

void main(void)
{
	float calif;

	printf("Tu Calificacion es: ");
	scanf_s("%f", &calif);


	

	if (calif > 0 && calif < 10) {

		if (calif > 0 && calif < 6) {
			printf("Reprobado");
		}
		if (calif >= 6 && calif < 8); {
				printf("Regular");
		}
		if (calif >= 8 && calif < 9) {
				printf("Uno de los Mejores");
		}
		if (calif == 10) {
				printf("El Mejor");
		}
		

	}
	else {
		printf("Esa Calificacion no es Valida");
	}
}

*/

/*

#include <stdio.h>

void main(void)
{
	int num;

	printf("\t\t\tEl Numero es par o impar: ");
	scanf_s("%i", &num);

	if (num % 2 == 0) {
		printf("El Numero es Par");
	}
	else{
		printf("El numero es Impar");
	}
}

*/

/* //Variables

#include <stdio.h> _//Libreria
#define Pi 3.1415 //Macro 
int y = 10; //Variable Global
//Preparacion para Proyecto de Programacion

int main()
{
	int x = 5; //Variable Local

	float suma = 0; // Variable local

	suma = Pi + y;

	printf("La suma es: %.4f", suma);
	
	
	
	return 0;
}

*/


//Tipos de Datos


/*  //Tipos de Datos

#include <stdio.h>

int main()
{

	char f = 'o'; //%c
	short z = -13; //%i
	int l = 157; //%i
	unsigned int h = 124953; //%i
	long t = 12934292; //%li
	float u = 19342.49291; //%f
	double r = 953.198034235; //%lf

	printf("El Elemento char es: %c\n", f);
	printf("El Elemento short es: %i\n ", z);
	printf("El Elemento short es: %i\n ", l);
	printf("El Elemento short es: %i\n ", h);
	printf("El Elemento short es: %li\n ", t);
	printf("El Elemento short es: %f\n ", u);
	printf("El Elemento short es: %.9lf\n ", r);





	return 0;
}

*/

//Entradas y Salidas

/*
#include <stdio.h>

int main() 
{
	char h = 'y';
	int t = 56;
	float u = 19.54;

	printf("%c, %i, %.2f", h, t ,u); //Se deben colocar en el orden desado de impresion


	return 0;
}

*/


/*
#include <stdio.h>

int main() {

	int k;
	float z;
	char w;

	printf("El valor de tu Variable int es: ");
	scanf_s("%i", &k);
	printf("EL valor de tu Variable float es: ");
	scanf_s("%f", &z);
	printf("EL valor de tu Variable char es: ");
	scanf_s("%c", &w);
	//Usar gets_s en char

	printf("EL Valor de int es: %i\n", k);
	printf("EL Valor de float es: %.5f\n", z);
	printf("EL Valor de char es: %c\n", w);
	

	return 0;
}

*/

//scanf_s solo te guarda los caracteres hasta que detecte un espacio
//gets_s te guarda caracteres aun cuando usas espacios, y solo necesita el nombre de la variable
#include <stdio.h>
//Para guarda una palabra en char se usa %c para un caracter, para una palabra se usa %s.
// % s
int main()
{
	char x[100];


	printf("Digite su Nombre: ");
	gets_s(x); //Para pedir caracteres ya no se utiliza el (&)
	
	printf("Su nombre es: %s", x);
	
	
	
	return 0;

}