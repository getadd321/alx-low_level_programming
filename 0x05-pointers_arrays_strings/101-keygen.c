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
	int p_len = 8;
	int i;
	char password[p_len + 1];
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789@#$%^&*()_+{}[]<>?,./";
	int charset_size = sizeof(charset);
	
	srand(time(NULL));
	
	for (i = 0; i < p_len; i++)
	{
		password[i] = charset[rand() % charset_size];
	}
	password[p_len] = '\0';
	printf("%s", password);
	return (0);
}
