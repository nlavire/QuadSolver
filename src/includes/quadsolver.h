#include <ctype.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "qsstruct.h"

/*
* Struct that holds the inputs
**/
typedef struct digits {
	int a;
	int b;
	int c;
	int errorCode;
} qInputs;

/*
 takeInputs function is called in main. It gains input from 
 the command line utilizing a char array and fgets. This is 
 how we get A, B, and C. These floats will then be validated 
 by an outside function. Once validated the float will be 
 send to qsolv.
 */
qInputs takeInputs(char* readin);

//int runFile(char * fname);
char *remove_newline(char *s);

/*
* Validate each digit of a string, to make 
* sure a number is being supplied
* char* strDigits--String containing a number
**/
int validateDigits(char* strDigits);

/*
* Validate that the input is actually a float. 
* @param numAsString -- the char* that is being
* converted to a double
**/
int validateInput(char* numAsString);

/*
* This function is called from main.
* It takes the answer struct and formats it for output,
* and then calls the output function, passing the formatted string along
* It returns a 0 if everything works properly, a -1 otherwise.
*/
int formatAnswer(qsStruct * ans);
