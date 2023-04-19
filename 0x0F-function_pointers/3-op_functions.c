#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - adds two numbers
 * @a: num1 input
 * @b: num2 input
 * Return: the result
 **/
int op_add(int a, int b)
{
	return (a + b);
}
/**
* op_sub - gives the difference of two numbers
* @a: num1 input
* @b: num2 input
* Return: the result
**/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
* op_mul - multiplies two numbers
* @a: num1 input
* @b: num2 input
* Return: the result
**/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
* op_div - gives the quotient of num1 divided to num2
* @a: num1 input
* @b: num2 input
* Return: the result
**/
int op_div(int a, int b)
{
	return (a / b);
}
/**
* op_mod - give the reminder of dividing num1 by num2
* @a: num1 input
* @b: num2 input
* Return: the result
**/
int op_mod(int a, int b)
{
	return (a % b);
}
