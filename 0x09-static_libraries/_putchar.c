#include <unistd.h>
/**
*_putchar - prints single charcter
*
*@c: input char
*
*return: int
**/
int _putchar(char c) {
    return write(STDOUT_FILENO, &c, 1);
}

