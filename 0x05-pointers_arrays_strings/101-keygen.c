#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Entry point
 *
 * progtram generates eandom password
 *
 * return: 0 Always (Success)
 **/
int main(void)
{
	int pass[100];
	int i, sum, n;
	const int PASSWORD_LENGTH = 100;
    	const int CHAR_SET_SIZE = 78;

    	sum = 0;
	srand(time(NULL));
    	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		pass[i] = rand() % CHAR_SET_SIZE;
        	sum += (pass[i] + '0');
        	putchar(pass[i] + '0');
        	if ((2772 - sum) - '0' < CHAR_SET_SIZE) {
            	n = 2772 - sum - '0';
            	sum += n;
           	putchar(n + '0');
            	break;
        }
    }
    putchar('\n');
    return (0);
}

