/*
    CODEFORWIN
        STRING EXERCISES

        TRIM LEADING WHITE SPACES FROM A STRING
    
    coded by Fatih Cinar
    on March 26th, 2020
*/

#include <stdio.h>

#define MAX_SIZE 350

enum CharacterInformation
{
    CHR_STRING_TERMINATION = '\0',
    JUST_SPACE = ' ',
    NEW_LINE = '\n',
    TAB = '\t'
};

int isWhiteSpace(char chr){
    /*
        this function figures out whether the given character 
        is a white space or not
    */

    enum Information
    {
        WHITE_SPACE = 1,
        NOT_WHITE_SPACE = 0
    };

    switch(chr){

        case TAB:
        case NEW_LINE:
        case JUST_SPACE:
            return WHITE_SPACE;
        default:
            return NOT_WHITE_SPACE;
    }

}

void trimLeadingWhiteSpaces(char* string){
    /*
        this function removes all the leading white space 
        characters from a character array
        only works with dynamically allocated memory
    */  

   

    if(!isWhiteSpace(string[0])){
            // if the first character is not a white space
            // do not waste resources doing array operations
            return;
    }
    else{
        // if there is white space for sure
        // now do the operations 
        
        int indexFirstNotWhiteSpace;
        // index of the first not white space character

        int itr = 0; // iterator to iterate on string

        // get the index of the first non-white-space character
        while(isWhiteSpace(string[itr])){
            itr++;
        }

        indexFirstNotWhiteSpace = itr;

        // and shift all the character till the end to the beginning of the char[]
        int forward = indexFirstNotWhiteSpace; 
        // indeces for the forward characters that are not white space
        int beginning = 0; // for pointing to the beginning indeces
        for( ;string[forward] != CHR_STRING_TERMINATION; forward++, beginning++){

            string[beginning] = string[forward]; 
            // the non-white-space characters at the later parts of the string
            // will be shifted to the beginning of the list
        }

        int newEnd = beginning; 
        // now beginning show the new end of the string
        string[newEnd] = CHR_STRING_TERMINATION;

        return;
    }

}

void testFunctionality(){
    /*
        this function tests the functinality of the function trimLeadingWhiteSpaces()
    */

    

    /* TEST 1 */
    printf("TEST 1");

    char string1[MAX_SIZE] = "     this is the string";
    printf("Before Trimmed: %s\n",string1); 

    trimLeadingWhiteSpaces(string1);
    printf("After Trimmed: %s\n", string1);



    /* TEST 2 */
    printf("TEST 2");

    char string2[MAX_SIZE] = "\n\n\n \t\t   \n\t are we happy";
    printf("Before Trimmed: %s\n", string2);

    trimLeadingWhiteSpaces(string2);
    printf("After Trimmed: %s\n", string2);



    /* TEST 3 */
    printf("TEST 3");

    char string3[MAX_SIZE] = "just that man";
    printf("Before Trimmed: %s\n", string3);

    trimLeadingWhiteSpaces(string3);
    printf("After Trimmed: %s\n", string3);
}

int main(){

    testFunctionality();

    return 0;
}
