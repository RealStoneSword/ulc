#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int usage() {
    printf("Usage: ulc [Base Unit] [Base Number] [What unit to convert to]\n");
    printf("Converts many various units to other units\n\n");
    printf("Base Units:\nTemprature:\n-f, --fahrenheit - Sets the base unit as fahrenheit\n-c, --celsius - Sets the base unit as Celsius\nLength:\n-ft, --feet - Sets the base unit as feet\n-in, --inches - Sets the base unit as inches");
}

int main(int argc, char *argv[]) {
        
    if (strcasecmp(argv[1], "--help") == 0) {
        usage();
    }
    
    return 0;
}


int FahrenheitCelsius () {

    FahrenheitCelsius
    

}

