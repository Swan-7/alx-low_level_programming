#include "main.h"
char _toupper(char letter);
/**
 * string_toupper - A function that changes all lowercase letters of a
 * string to uppercase
 * @str: String parameter
 * Return: Return the string
 */
char *string_toupper(char *str)
{
	int count;
	int len = 0;

	for (count = 0; str[count] != '\0'; count++)
	{
		len++;
	}

	for (count = 0; count < len; count++)
		str[count] = _toupper(str[count]);
	return (str);
}
/**
 * _toupper - A function that will return the uppercase of a letter
 * @letter: The letter parameter
 * Return: Return the uppercase
 */

char _toupper(char letter)
{
	switch (letter)

	{
		case 'a':
			letter = 'A';
			break;
		case 'b':
			letter = 'B';
			break;
		case 'c':
			letter = 'C';
			break;
		case 'd':
			letter = 'D';
			break;
		case 'e':
			letter = 'E';
			break;
		case 'f':
			letter = 'F';
			break;
		case 'g':
			letter = 'G';
			break;
		case 'h':
			letter = 'H';
			break;
		case 'i':
			letter = 'I';
			break;
		case 'j':
			letter = 'J';
			break;
		case 'k':
			letter = 'K';
			break;
		case 'l':
			letter = 'L';
			break;
		case 'm':
			letter = 'M';
			break;
		case 'n':
			letter = 'N';
			break;
		case 'o':
			letter = 'O';
			break;
		case 'p':
			letter  = 'P';
			break;
		case 'q':
			letter = 'Q';
			break;
		case 'r':
			letter = 'R';
			break;
		case 's':
			letter = 'S';
			break;
		case 't':
			letter = 'T';
			break;
		case 'u':
			letter = 'U';
			break;
		case 'v':
			letter = 'V';
			break;
		case 'w':
			letter = 'W';
			break;
		case 'x':
			letter = 'X';
			break;
		case 'y':
			letter = 'Y';
			break;
		case 'z':
			letter = 'Z';
			break;
		default:
			letter = letter;
	}
	return (letter);
}
