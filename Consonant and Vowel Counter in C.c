#include <stdio.h>

int getLength(char string[]);
int isAlphabetical(char c);
int isVowel(char c);
int countVowels(char string[]);
int countConsonants(char string[]);


int main()
{
	char string[81];
	int numVowels, numConsonants;

	puts("Enter string:");
	gets(string);

	numVowels = countVowels(string);
	printf("Number of vowels = %d \n\n", numVowels);

	numConsonants = countConsonants(string);
	printf("Number of consonants = %d \n\n", numConsonants);
	return 0;
}

int getLength(char s[])
{
	int counter = 0;
	for (int i=0; i <= 81; i++)
	{
		if (s[i] == '\0') break;
		counter++;
	}
	return counter;
}

int isAlphabetical(char c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isVowel(char v)
{
	if (isAlphabetical(v))
	{
		if ((v == 65) || (v == 65 + 32) || (v == 69) || (v == 69 + 32) || (v == 73) || (v == 73 + 32) || (v == 79) || (v == 79 + 32) || (v == 85) || (v == 85 + 32))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}

int countVowels(char cV[])
{
	int counter = 0;

	for (int i=0; i <= getLength(cV); i++)
	{
		if (isVowel(cV[i]))
		{
			counter++;
		}
	}
	return counter;
}

int countConsonants(char cC[])
{
	int counter = 0;

	for (int i=0; i <= getLength(cC); i++)
	{
		if ((!isVowel(cC[i])) && isAlphabetical(cC[i]))
		{
			counter++;
		}
	}
	return counter;
}
