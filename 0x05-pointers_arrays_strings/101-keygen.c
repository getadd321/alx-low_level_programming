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
	char password[p_len + 1];
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789@#$%^&*()_+{}[]<>?,./";
	int chaset_size = sizeof(charset) - 1;
	srand(time(NULL));
	for (i = 0; i < _plen; i++)
	{
		password[i] = charset[rand() % charset_size];
	}
	password[p_len] = '\0';
	printf("%s", password);
	return (0);
}
