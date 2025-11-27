#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 3) {
        printf("Usage: <temperature_value> <C/F>\n");
        return 0;
    }

    float temp = atof(argv[1]);   // string → float
    char unit = argv[2][0];       // C or F
    float result;

    if (unit == 'C' || unit == 'c') {
        result = (temp * 9/5) + 32;
        printf("%.2f Celsius = %.2f Fahrenheit\n", temp, result);
    }
    else if (unit == 'F' || unit == 'f') {
        result = (temp - 32) * 5/9;
        printf("%.2f Fahrenheit = %.2f Celsius\n", temp, result);
    }
    else {
        printf("Invalid unit! Use C or F\n");
    }

    return 0;
}