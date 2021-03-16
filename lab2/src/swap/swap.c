#include "swap.h"

void Swap(char *left, char *right)
{
	char k;
    k = *left;
    *left=*right;
    *right=k;
}
