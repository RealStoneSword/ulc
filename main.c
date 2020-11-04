#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int usage() {
    puts(
        "Usage: ulc [Base Unit] [Base Number] [Unit to Output]\n"
        "ULC is a tool that can convert many units to other units\n\n"
        "Base Units:\n"
        "Temprature:\n"
        "-f, --fahrenheit - Sets the base unit as fahrenheit\n"
        "-c, --celsius - Sets the base unit as Celsius\n"
        "Length:\n"
        "-ft, --feet - Sets the base unit as feet\n"
        "-in, --inches - Sets the base unit as inches\n"
}

int main(int argc, char *argv[]) {

    

    if (strcasecmp(argv[1], "--help") == 0) {
        usage();
    }
    else if(strcasecmp(argv[1], "-f") == 0 && strcasecmp(argv[3], "-c")) {
        FahrenheitCelsius(argv[2], 1);
    }
    else if(strcasecmp(argv[1], "-c") == 0 && strcasecmp(argv[3], "-f")) {
        FahrenheitCelsius(argv[2], 0);
    }


    return 0;
}


/* The toggle variable can toggle 
 * between converting fahrenheit 
 * to celsius and celsius to fahrenheit.
 * 0 = celsius to fahrenheit
 * 1 = fahrenheit to celsius */

int FahrenheitCelsius (int input, int toggle) {
    int output;
    switch(toggle) {
        case 0:    
            output = (input * 1.8) + 32;
        break;
        case 1:
            output = (input - 32) / 1.8;
        break;
    }
    printf("\nOutput: %i", output);
}

