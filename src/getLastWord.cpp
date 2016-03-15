/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	if (str==NULL)
		return NULL;
	else{
		char *s;
		int k,i, j;
		for (i = 0, j = 0; *(str + j) != '\0'; j++)
		{
			if (str[j] == ' ')
				i = j + 1;
		}
		s = (char *)malloc(j - i);
		for (i,k=0; i < j; i++)
			s[k] = str[i];
		s[k] = '\0';
		return s;
	}
}
