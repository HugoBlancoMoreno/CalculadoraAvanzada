#include <iostream>
#include <math.h>

main(){
	
	int opcion;
	int n1,n2;
	float numero,numero2,resultado;
	
	printf("\tElige una opcion:");
    
    printf("\n\n1. Sumar");
	printf("\n2. Restar");
	printf("\n3. Multiplicar");
	printf("\n4. Dividir");
	printf("\n5. Elevar al cuadrado");
	printf("\n6. Raiz cuadrada");
	
	printf("\n\nElige una opcion: ");
	scanf("%d", &opcion );

	
	switch(opcion){
		
		case 1: printf ("\nIngresa un numero: ");
		scanf("%d", &n1);
		
		printf("Ingresa otro numero: ");
		scanf("%d", &n2);
		
		 numero = (float) n1;
		 numero2 = (float) n2;
		 
		resultado = numero + numero2;
		
		printf("\nEl resultado de la suma es: %.2f", resultado);
		break;
	
		case 2: printf ("\nIngresa un numero: ");
		scanf("%d", &n1);
		
		printf("Ingresa otro numero: ");
		scanf("%d", &n2);
		
		 numero = (float) n1;
		 numero2 = (float) n2;
		 
		resultado = numero - numero2;
		
		printf("El resultado de la resta es: %.2f", resultado);
		break;
		
		case 3: printf ("\nIngresa un numero: ");
		scanf("%d", &n1);
		
		printf("Ingresa otro numero: ");
		scanf("%d", &n2);
		
		 numero = (float) n1;
		 numero2 = (float) n2;
		 
		resultado = numero * numero2;
		
		printf("El resultado de la multiplicacion es: %.2f", resultado);
		break;
		
		case 4: printf ("\nIngresa un numero: ");
		scanf("%d", &n1);
		
		printf("Ingresa otro numero: ");
		scanf("%d", &n2);
		
		 numero = (float) n1;
		 numero2 = (float) n2;
		 
		resultado = numero / numero2;
		
		printf("El resultado de la division es: %.2f", resultado);
		break;
		
		case 5: printf ("\nIngresa un numero: ");
		scanf("%d", &n1);
		
		resultado = pow(n1,2);
		
		printf("El resultado de la potencia es: %.2f", resultado);
		break;
		
		case 6: printf("Introduce un numero: ");
		scanf("%d", &n1);
		
		 numero = (float) n1;
		 
		resultado = sqrt(numero);
		
		printf("\nEl resultado de la raiz cuadrada es: %.2f", resultado);
		break;
	}
	system("pause");
}