/*Program informs the sine value of the indicated degree.
 * João Bonifácio.
 * 15 de Junho, 2021.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h> //This library contains several constants and math functions. To use the library you need to compile your program with the -lm.

#define PI 3.14159265 //Defining the PI value

int main(void){
	double parameter, response, angle;//Variables

	printf("Enter the angle: "); //Enter the input angle you want to find the sine().
	scanf("%lf", &angle);

	parameter = angle; 
	response = sin(parameter*PI/180); //Using the sin function, comes from the math.h library which performs the calculation in sine.
	printf("The %.2lf degree sine is: %.2lf\n", parameter, response);
	return 0;
}
