 /*Temperature Converter
Write a C program that converts a temperature in Celsius to Fahrenheit. The Celsius temperature should be stored in a float variable celsius, and the Fahrenheit equivalent should be printed using a single printf statement. The relation between the two scales is given as

fahrenheit = (celsius * 9/5) + 32;
Take the celsius temperature to be 20.5.*/

#include <stdio.h>

int main() {
	float celsius = 20.5;
	printf("%f",(celsius * 9/5) + 32);// temperature converter

}

