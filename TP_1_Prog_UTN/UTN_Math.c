//Se define el cuerpo de cada funcion

int sum (int num0, int num1)
{
	return num0 + num1; //Al llamarse la funcion de suma, se devuelve el resultado con return
}

int substract (int num0, int num1)
{
	return num0 - num1; //Al llamarse la funcion de resta, se devuelve el resultado con return
}

int multiply (int num0, int num1)
{
	return num0 * num1; //Al llamarse la funcion de multiplicacion, se devuelve el resultado con return
}

double divide (int num0, int num1)
{	
	return num0 / (double)num1; //Al llamarse la funcion de division, se devuelve el resultado con return
}

double find_factorial (int num)
{
   
   if(num==0) //Si el valor ingresado es 0, se muestra el factorial 1 
   {
      return(1);
   }
   else //Si el valor ingresado es diferente a 0, se calcula el factorial usando recursion
   {   
   return(num*find_factorial(num-1)); //Al llamarse la funcion de encontrar el factorial,
   }                                  //se devuelve el resultado con return
}

