#include “main.h” 
  
 /** 
  * print_last_digit – Prints the last digit of a number. 
  * @n: The number in question. 
  * 
  * Return: Value of the last digit. 
  */ 
 Int print_last_digit(int n) 
 { 
         Int last_digit = n % 10; 
  
         If (last_digit < 0) 
                 Last_digit *= -1; 
  
         _putchar(last_digit + ‘0’); 
  
         Return (last_digit); 
 }
