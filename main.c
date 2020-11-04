#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int FahrenheitCelsius();
int usage() {
	puts("Usage: ulc [Base Unit] [Base Number] [Unit to Output]\n"
		 "ULC is a tool that can convert many units to other units\n\n"
		 "Base Units:\n"
		 "Temprature:\n"
		 "-f, --fahrenheit - Sets the base unit as fahrenheit\n"
		 "-c, --celsius - Sets the base unit as Celsius\n"
		 "Length:\n"
		 "-ft, --feet - Sets the base unit as feet\n"
		 "-in, --inches - Sets the base unit as inches\n");
	return 0;
}

int main(int argc, char *argv[]) {
    long converted = strtol(argv[2], NULL, 10);
	if (strcasecmp(argv[1], "--help") == 0) {
		usage();
	} 
	else if (strcmp(argv[1], "-f") == 0 || strcmp(argv[1], "--fahrenheit") == 0) {
		if (strcmp(argv[3], "-c") == 0 || strcmp(argv[3], "--celsius") == 0) {
			FahrenheitCelsius(converted, 1);
		}
	}
	else if (strcmp(argv[1], "-f") == 0 || strcmp(argv[1], "--fahrenheit") == 0) {
	    
	}
	return 0;
}

/* The toggle variable can toggle
 * between converting fahrenheit
 * to celsius and celsius to fahrenheit.
 * 0 = celsius to fahrenheit
 * 1 = fahrenheit to celsius */

int FahrenheitCelsius(int input, int toggle) {
	int output;
	switch (toggle) {
	case 0:
		output = (input * 1.8) + 32;
		break;
	case 1:
		output = (input - 32) / 1.8;
		break;
	}
	printf("Output: %i\n", output);
	return 0;
}
