#include "swap.h"

void Swap(char *left, char *right)
{
	// ваш код здесь
	char temp = 's';

	temp = *left;
	*left = *right;
	*right = temp;
}
