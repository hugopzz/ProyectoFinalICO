#include <stdio.h>
#include <math.h> //Libreria Matematicas
void main(void)

/*
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

//Problema 3: Sacar hipotenusa de un triangulo pidiendo los dos catetos

/*
void main(void)
{
	float ca;
	float co;
	float hip;

	hip = 0;

	printf("Dame los valores del cateto opuesto: ");
	scanf_s("%f", &co);

	printf("Dame los valores del cateto adyacente: ");
	scanf_s("%f", &ca);

	hip = sqrt(pow(co, 2) + pow(ca, 2));
	//Formula para sacar la Hipotenusa de un triangulo

	printf("La hipotenusa es: %f", hip);




}

//Longitud de la Circunferencia
//Problema 3
*/
/*
void main (void)
#define Pi 3.14159265
{
	float dm;
	float p;

	printf("Inserte el Valor del Diametro del Circulo: ");
	scanf_s("%f", &dm);

	p = dm * Pi;

	printf("La longitud de la Circunferencia es: %.3f", p);

}
*/

//Programa que calcule areas de trapecios.
/*
void main (void)
{
	int BaseMa;
	int BaseMe;
	int H;
	int area;


	printf("Coloque el valor de la Base Mayor: "); scanf_s("%i", &BaseMa);
	printf("Coloque el valor de la Base Menor: "); scanf_s("%i", &BaseMe);
	printf("Coloque el valor de la Altura: "); scanf_s("%i", &H);

	area = ((BaseMa + BaseMe) * H) / 2;

	printf("El area del Trapecio es: %i", area);

}
*/

//Programa que calcule la media de 3 numeros

/*
{
	float media;
	float num1;
	float num2;
	float num3;


	printf("Ingresa 1 numero: ");
	scanf_s("%f", &num1 );
	printf("Ingresa 1 numero: ");
	scanf_s("%f", &num2 );
	printf("Ingresa 1 numero: ");
	scanf_s("%f", &num3);



	media = (num1 + num2 + num3) / 3;

	printf("La media de estos 3 numeros es: %.2f", media);
}
*/

//Una tienda ofrece un descuento del 15% sobre el total de la compra y un cliente desea saber cuánto deberá pagar finalmente por su compra.
/*
{
	float prod;
	float desc;
	float preciof;


	printf("Precio del Producto: ");
	scanf_s("%f", &prod);

	desc = 0.85;
	preciof = (desc * prod);

	printf("El precio final del producto es: $%.2f ", preciof);


}

*/
/*
{
	int HorasTra;
	float Pago_Hora;
	float Pago;


	HorasTra = 0;


	printf("Ingrese las Horas Trabajadas: ");
	scanf_s("%i", &HorasTra);


	Pago_Hora = 15.7;
	Pago = (HorasTra * Pago_Hora);


	printf("Tu pago del dia de hoy es: %.2f", Pago);
}

*/
// Calcular el nuevo salario de un obrero si obtuvo un incremento del 25% sobre su salario anterior.
/*
{

	float SueldoAct;
	float Aumento;
	float PagoFin;
	float SueldoFin;


	printf("Ingresa tu sueldo Actual: ");
	scanf_s("%f", &SueldoAct);

	Aumento = 0.25;
	PagoFin = (SueldoAct * Aumento);
	SueldoFin = (SueldoAct + PagoFin);

	printf("Tu sueldo mas el 25 por ciento es: $%.2f", SueldoFin);

}

*/


//Un alumno desea saber cuál será su calificación final en la materia de Algoritmos. Dicha calificación se compone de los siguientes porcentajes:

/*

{


	float Par1;
	float Par2;
	float Par3;
	float Prom;
	float Prom2;
	float ExaFin;
	float ExaFin2;
	float ProFin;
	float ProFin2;
	float CalifFin;


	printf("Ingrese la Calificacion de su primer Parcial: ");
	scanf_s("%f", &Par1);
	printf("Ingrese la Calificacion de su segundo Parcial: ");
	scanf_s("%f", &Par2);
	printf("Ingrese la Calificacion de su tercer Parcial: ");
	scanf_s("%f", &Par3);


	printf("Ingrese su Calificacion en el Examen Final: ");
	scanf_s("%f", &ExaFin);
	printf("Ingrese su Calificacion en el Trabajo Final: ");
	scanf_s("%f", &ProFin);



	Prom = (Par1 + Par2 + Par3) / 3;
	Prom2 = (Prom * 55) / 100;
	ExaFin2 = (ExaFin * 25) / 100;
	ProFin2 = (ProFin * 15) / 100;



	CalifFin = Prom2 + ExaFin2 + ProFin2;

	printf("Tu Calificacion Final es: %.2f", CalifFin);

}



*/


//Sentencia If

//Prueba de Divisibilidad
/*
{
	int n1, n2;

	printf("Digite un Numero: ");
	scanf_s("%i", &n1);
	printf("Digite un Segundo Numero: ");
	scanf_s("%i", &n2);

	if (n1 % n2 == 0) {
		printf("El Numero %i es divisible entre el numero %i", n1, n2);
	}
	else {
		printf("El Numero no es Divisible");
	}
}
*/

//Sentencia If
//Reprobado o Aprobado

/*
{
	float calif;

	printf("Digite la nota que saco en el Curso: "); scanf_s("%f", &calif);

	if (calif >= 6) {
		printf("Usted esta Aprobado");
	}






}

*/

//Ejercicio
/*
{
	float num;
	float neg;
	float pos;

	printf("Digite un numero: ");
	scanf_s("%f", &num);


	if (num < 0) {
		printf("El numero es Negativo: ");
	}
	else {
		printf("El numero es Positivo");
	}



}

*/

//Ejercicio 3: Visualizar la tarifa de la luz según el gasto de corriente eléctrica. 
//Para un gasto menor de 1.000Kwxh la tarifa es 1.2, entre 1.OOOy 1.850Kwxh es 1.0 y mayor de 1.85OKwxh 0.9.

/*

#define Tarifa1 1.2
#define Tarifa2 1.0
#define Tarifa3 0.9

{
	float gasto, tasa;

	printf("Gasto de Energia en kwxk: ");
	scanf_s("%f", &gasto);

	if (gasto < 1000) {
		tasa = Tarifa1;
	}
	if (gasto > 1000 && gasto < 1850) {
		tasa = Tarifa2;
	}
	if (gasto > 1850) {
		tasa = Tarifa3;
	}

	printf("La tarifa sera tomada como: %.1f", tasa);
}


//else - if

*/

/*

{
	float calif;

	printf("Digita tu calificacion: ");
	scanf_s("%f", &calif);

	if (calif < 6) {
		printf("Estas Reprobado");
	}
	else{
		printf("Estas Aprobado");
	}

}

*/

//Calcular el mayor de dos números leídos del teclado y visualizarlo en pantalla.

{
	float num1;
	float num2;

	printf("Digita tu primer numero: ");
	scanf_s("%f", &num1);
	printf("Digita tu segundo numero: ");
	scanf_s("%f", &num2);

	if (num1 > num2) {
		printf("El Primer numero es el mayor: %.2f", num1);
	}
	else if (num2 > num1) {
			printf("El Segundo numero es el mayor: %.2f", num2);
		}
		else {
		printf("Ambos Numeros son Iguales %.2f, %.2f", num1, num2);
		}


}