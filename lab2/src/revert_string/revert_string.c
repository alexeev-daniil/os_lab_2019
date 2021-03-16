#include "revert_string.h"

void RevertString(char *str)
{
    char temp;
    int length = strlen(str);
	for(int i = 0; i<length/2;++i)
    {
        temp = str[i];
        str[i]=str[length-i-1];
        str[length-i-1]=temp;
    }
}

