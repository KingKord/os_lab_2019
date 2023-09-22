#include "revert_string.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void RevertString(char *str)
{
	// your code here
	char* res = malloc(sizeof(char) * (strlen(str) + 1));

	for (int i = strlen(str)-1, j = 0; i > -1 ; i--, j++){
		res[j] = str[i];
		if (i == 0) res[j + 1] = '\0';
	}
	for(int i = 0; i < strlen(str); i++) str[i] = res[i];
	
	free(res);
}

