#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int stringNum(char* arr)
{
	int i = 0;
	int c = 0;
	while (arr[i] != '\0')
	{
		if(arr[i]>= '0'&& arr[i] <= '9')
			c++;

		i++;
	}
	return c;
}
int strinCh(char* arr)
{
	int i = 0;
	int c = 0;
	while (arr[i] != '\0')
	{
		if (arr[i] >= 'A' && arr[i] <= 'Z'|| arr[i] >= 'a' && arr[i] <= 'z')
			c++;

		i++;
	}
	return c;
}
int stringVowel(char* arr)
{
	int i = 0;
	int c = 0;
	while (arr[i] != '\0')
	{
		if(arr[i] == 'a'|| arr[i] == 'e'|| arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' || arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U')
		c++;

		i++;
	}
	return c;
}
int main()
{
	char arr[10000];
	scanf("%[^\n]", arr);
	printf("Alphabet = %d \n", strinCh(arr) - stringVowel(arr));
	printf("Vowel = %d \n", stringVowel(arr));
	printf("Number = %d \n", stringNum(arr));
	return 0;
}