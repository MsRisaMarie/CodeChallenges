#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 1
#define FALSE 0


int main(int argc, char **argv)
{
	// make sure there's exactly 2 arguments
	if(argc != 2)
	{
		fprintf(stderr, "incorrect number of arguments. expected 2\n");
		return 1;
	}
	
	// attempt to open the file
	FILE *fp = fopen(argv[1], "r");
	if(!fp)
	{
		fprintf(stderr, "unable to load file: %s\n", argv[1]);
		return 1;
	}
	
	char buffer[512];
	
	// get each line from the
	while(fgets(buffer, 512, fp))
	{
		char palindrome = TRUE;
		int length = (int)strlen(buffer) - 1;
		int halfLength = length / 2;
		int numValidChars = 0;
		int codeCounts[94] = { 0 }; // counts per ASCII character type
		
		// check if the string is a palidrome
		for(int i=0;i<halfLength;++i)
		{
			if(buffer[i] != buffer[length-i-1])
			{
				palindrome = FALSE;
				break;
			}
		}
		
		// count number of chars in the string that aren't spaces or newlines
		for(int i=0;i<length;++i)
		{
			char c = buffer[i];
			if(c > 32)
			{
				++codeCounts[c - 32];
				++numValidChars;
			}
		}
		
		// generate and populate the sorted string
		int index = 0;
		char *sortedStr = (char*)malloc(numValidChars+1);
		sortedStr[numValidChars] = '\0'; // terminate the end of the string
		
		// populate the string
		for(int i=93;i>=0;--i)
		{
			// process if the character code
			if(codeCounts[i] > 0)
			{
				// add a character for each count
				for(int e=0;e<codeCounts[i];++e)
				{
					sortedStr[index] = (char)(i + 32);
					++index;
				}
			}
		}
		
		// display the output string, and release the sorted string
		if(palindrome)
			printf("YES | %s\n", sortedStr);
		else
			printf("NO | %s\n", sortedStr);
		free(sortedStr);
	}
    return 0;
}
