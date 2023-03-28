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
	const int PASSWORD_LENGTH = 100;
	const int PASSWORD_SUM_CONSTRAINT = 2772;
	const char CHARSET[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()-_=+{}[]|;:<>,.?/";
	const int CHARSET_SIZE = sizeof(CHARSET) - 1; 
	int pass[PASSWORD_LENGTH];
	int i, sum = 0, n;
	srand(time(NULL));
	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		pass[i] = rand() % CHARSET_SIZE;
		sum += (pass[i] + '0');
		putchar(CHARSET[pass[i]]);
		if ((PASSWORD_SUM_CONSTRAINT - sum) - '0' < CHARSET_SIZE)
		{
			n = PASSWORD_SUM_CONSTRAINT - sum - '0';
			sum += n;
			putchar(CHARSET[n]);
			break;
		}
	}
	return 0;
}

