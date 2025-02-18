#include "sysConv.h"
int binary_to_decimal(char* binary, ...)
{
    va_list arg;
    va_start(arg, binary);

    int decimal = 0;
    char buffer[32];

    if (binary == NULL)
    {
        int num = va_arg(arg, int);
        snprintf(buffer, sizeof(buffer), "%d", num);
        binary = buffer;
    }
    while (binary != NULL && binary != (char*)INT_MAX)
    {
        int len = 0;
        while (binary[len] != '\0')
        {
            len++;
        }

        int power = 0;
        for (int i = len - 1; i >= 0; i--)
        {
            if (binary[i] == '1')
            {
                decimal += (int)pow(2, power);
            }
            power++;
        }

        binary = va_arg(arg, char*);
    }
    va_end(arg);
    return decimal;
}
