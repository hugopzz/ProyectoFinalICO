#include <stdio.h>/*
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

/*
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

*/

/*
void main(void)
{
	int a, b, c;

	a = b = c = 10;
	a += 10;   // (a += 10) = (a = a + 10)
	a -= 5;  // (a -= 5) = (a = a - 5)
	a *= 2;  // (a *= 2) = (a = a * 2)
	a /= 2;  // (a /= 2) = (a = a / 2)


	printf("EL valor de a, b, c es igual a: %i, %i, %i\n", a, b, c);
	printf("El valor de a es: %i", a);


}

*/
 /*
void main(void)

{
	float num1, num2, suma = 0, resta = 0, multi = 0, div = 0; 
	//Siempre las variables que son para almacenar resultados se incializan en cero

	printf("Digite 2 numeros: ");
	scanf_s("%f %f", &num1, &num2);

	suma = num1 + num2;
	resta = num1 - num2;
	multi = num1 * num2;
	div = num1 / num2;

	printf("La suma de los 2 digitos es: %.2f\n", suma);
	printf("La resta de los 2 digitos es: %.2f\n", resta);
	printf("La multiplicacion de los 2 digitos es: %.2f\n", multi);
	printf("La division de los 2 digitos es: %.2f\n", div);

}
*/

//Problema 2
/*
float far = 33.8;

void main(void)

{
	float cel, cam;
	cam = 0;

	printf("Digite un numero en Grados Celsius: ");
	scanf_s("%f", &cel);
	//Antes de colocar una variable que almacene un valor, se debe 
	solicitar primero el valor que se quiere almacenar
	


	cam = cel * far; 



	printf("La temperatura en Farenheit es: %.4f", cam);

}

*/

void main(void)
{

}


