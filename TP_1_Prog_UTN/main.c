#include <stdio.h>
#include <stdlib.h>
#include "UTN_Math.h"

int result;

int main()
{
	int num0 = 0; //Operando A
    int num1 = 0; //Operando B	
	int opt; //Variable correspondiente a las opciones ingresadas en el menu (1-4)
	int calc_sum; //Variables para guardar los resultados de las operaciones
	int calc_substract;
	int calc_multiply;
	int calc_divide;
	int calc_factorial_0;
	int calc_factorial_1;
	
 
    void menu()
	{
		system("clear"); //Se limpia la pantalla siempre que se llame la funcion menu() 	
		printf("\n\nOption #0 - Enter First Integer  | Operand A: %d", num0);		
		printf("\nOption #1 - Enter Second Integer | Operand B: %d", num1);
		printf("\nOption #2 - Make Calculations");
		printf("\nOption #3 - Show Results");
		printf("\nOption #4 - Exit");
		printf("\nEnter an option: "); 
		scanf("%d",&opt); //El programa espera el ingreso de una opcion valida, del 1 al 4
		while (opt < 0 || opt > 4) //Mientras la opcion ingresada sea menor a 0 o mayor a 4,
		{			               //el programa va a continuar esperando el ingreso de una opcion valida.
			printf("\nPlease select a valid option");            
            menu();            			
		}		
		
		switch (opt) //Segun la opcion ingresada previamente, se accede a diferentes partes del switch
		{
			case 0:			
			system("clear"); 
			printf("\nEnter First Integer (Operand A): ");
			scanf("%d",&num0);				
			while (num0 < -99999 || num0 > 99999) //Mientras el valor ingresado sea inferior a -99999 o superior a 99999
			{                                     //el programa va a continuar esperando un valor valido
				system("clear");                    				                    			
				printf("\nPlease enter a valid integer between -99999 and 99999");
				printf("\n\nEnter First Integer (Operand A): "); 
				scanf("%d",&num0); 				
			}			
			menu();   			    
			break;
			case 1:
			system("clear"); 
			printf("\nEnter Second Integer (Operand B): ");
			scanf("%d",&num1);				
			while (num1 < -99999 || num1 > 99999) //Mientras el valor ingresado sea inferior a -99999 o superior a 99999
			{                                     //el programa va a continuar esperando un valor valido
				system("clear");                    				                    			
				printf("\nPlease enter a valid integer between -99999 and 99999");
				printf("\n\nEnter First Integer (Operand A): "); 
				scanf("%d",&num1); 				
			}
			menu();   			
			break;
			case 2:
			system("clear");
			calc_sum = sum(num0,num1); //Se asigna el resultado de la suma a una variable
			calc_substract = substract(num0,num1); //Se asigna el resultado de la resta a una variable
			calc_multiply = multiply(num0,num1); //Se asigna el producto de la multiplicacion a una variable
			calc_divide = divide(num0,num1); //Se asigna el cociente de la division a una variable
			if (num0 >= 0)
			{
				calc_factorial_0 = find_factorial(num0); //Si num0 es igual o superior a 0, se calcula su factorial
			} 
			if (num1 >= 0)
			{
				calc_factorial_1 = find_factorial(num1); //Si num1 es igual o superior a 0, se calcula su factorial
			}			
			printf("\nAll the operations have been performed");
			//     
			printf("\n\nPress ENTER to continue");        
			while (getchar()!='\n'); //El programa espera hasta que el usuario apriete ENTER para volver al menu	
			getchar(); 														
			menu();
			break;
			case 3:
			system("clear"); //Se limpia la pantalla y se muestran los resultados de las operaciones matematicas
			printf("\nOperand A: %d               Operand B: %d", num0, num1); 
			printf("\n\nThe Sum of %d + %d (A + B) is: %d", num0, num1, calc_sum); 
			printf("\nThe Substraction of %d - %d (A - B) is: %d", num0, num1, calc_substract); 
			printf("\nThe Multiplication of %d * %d (A * B) is: %d", num0, num1, calc_multiply);
			if (num1 != 0)
			{
				printf("\nThe Quotient of %d / %d (A / B) is: %d", num0, num1, calc_divide); //Si el divisor no es igual a 0, se muestra el cociente
			}
			else
			{
				printf("\nIt is not possible to divide %d by %d (A / B)", num0, num1); //Si el divisor es igual a 0, se informa que no es posible dividir por 0
			}			 
			if (num0 >= 0 && num1 >= 0) //En los siguientes if, se chequea si uno o ambos valores (num0, num1) es negativo, y segun la condicion, se muestran diferentes mensajes
			{
				printf("\nThe Factorial of %d (A!) is: %d, and the Factorial of %d (B!) is: %d", num0, calc_factorial_0, num1, calc_factorial_1); 
			}
			else if (num0 < 0 && num1 >= 0)
			{
				printf("\nUnable to calculate Factorial of Negative Integer %d (A!). The Factorial of %d (B!) is: %d", num0, num1, calc_factorial_1);
			}
			else if (num0 >= 0 && num1 < 0)
			{ 
				printf("\nThe Factorial of %d (A!) is: %d. Unable to calculate Factorial of Negative Integer %d (B!)", num0, calc_factorial_0, num1);
			}
			else if (num0 < 0 && num1 < 0)
			{
				printf("\nUnable to calculate Factorial of Negative Integers %d (A!) and %d (B!)", num0, num1); 
			}
						
			   
			printf("\n\nPress ENTER to continue");          
			while (getchar()!='\n'); //El programa espera hasta que el usuario apriete ENTER para volver al menu		 
			getchar();														
			menu();		    
			break;
			case 4:
			printf("\n"); //Genera un espacio entre la ultima opcion del menu y el texto "Hit any key to continue..."     
			exit(0); //El programa se cierra
	        }
		
			
		}
	
	menu();		

   return 0;
}