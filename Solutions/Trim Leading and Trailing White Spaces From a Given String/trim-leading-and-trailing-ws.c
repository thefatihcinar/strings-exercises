/*
    CODEFORWIN
        STRING EXERCISES

        TRIM LEADING AND TRAILING WHITE SPACES 
        FROM A STRING
    
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

int isWhiteSpace(char chr)
{
    /*
        this function figures out whether the given character 
        is a white space or not
    */

    enum Information
    {
        WHITE_SPACE = 1,
        NOT_WHITE_SPACE = 0
    };

    switch (chr)
    {

    case TAB:
    case NEW_LINE:
    case JUST_SPACE:
        return WHITE_SPACE;
    default:
        return NOT_WHITE_SPACE;
    }
}

void trimLeadingWhiteSpaces(char *string)
{
    /*
        this function removes all the leading white space 
        characters from a character array
        only works with dynamically allocated memory
    */

    if (!isWhiteSpace(string[0]))
    {
        // if the first character is not a white space
        // do not waste resources doing array operations
        return;
    }
    else
    {
        // if there is white space for sure
        // now do the operations

        int indexFirstNotWhiteSpace;
        // index of the first not white space character

        int itr = 0; // iterator to iterate on string

        // get the index of the first non-white-space character
        while (isWhiteSpace(string[itr]))
        {
            itr++;
        }

        indexFirstNotWhiteSpace = itr;

        // and shift all the character till the end to the beginning of the char[]
        int forward = indexFirstNotWhiteSpace;
        // indeces for the forward characters that are not white space
        int beginning = 0; // for pointing to the beginning indeces
        for (; string[forward] != CHR_STRING_TERMINATION; forward++, beginning++)
        {

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

void trimTrailingWhiteSpaces(char *string)
{
    /*
        this function removes the trailing white spaces from a string
        does not work with string literals
        only works with dynamicall allocated memory or stack memory
    */

    int indexLastNonWhiteSpace;
    // index of the last character that is not white space
    // learn this

    int lastCharater; // index of the string termination character
    // get this

    int itr = 0; // iterator
    while (string[itr] != CHR_STRING_TERMINATION)
    {
        itr++;
    }

    lastCharater = itr; // got the last character

    for (itr = lastCharater - 1; isWhiteSpace(string[itr]); itr--)
    {
        // start from the end this time
        // as long as you white space
        // come back one more step
    }

    // now we got the index of the last non-white-space character
    indexLastNonWhiteSpace = itr;

    string[indexLastNonWhiteSpace + 1] = CHR_STRING_TERMINATION;
    // ignore the rest
    // this is where the string should be terminated, right?

    return;
}

void trimBothLeadingandTrailingWhiteSpaces(char* string){
    /*
        this function trims both leading and trailing white spaces
        of a string
        only works with dynamically-allocated strings or char arrays
        not string literals
    */

    trimTrailingWhiteSpaces(string); // first trim trailing
    trimLeadingWhiteSpaces(string); // them trim leading ones

    return;

}

void testFunctionality()
{
    /*
        this function tests the functionality of the function
        trimBothLeadingandTrailingWhiteSpaces() function
    */

    /* TEST 1 */
    printf("TEST 1");

    char string1[MAX_SIZE] = "         this is the string     ";
    printf("Before Trimmed: %s\n", string1);

    trimBothLeadingandTrailingWhiteSpaces(string1);
    printf("After Trimmed: %s\n", string1);

    /* TEST 2 */
    printf("TEST 2");

    char string2[MAX_SIZE] = "   \n\n\n \t\t   \n\t \n are we happy\n\n\n \t\t   \n\t \n ";
    printf("Before Trimmed: %s\n", string2);

    trimBothLeadingandTrailingWhiteSpaces(string2);
    printf("After Trimmed: %s\n", string2);

    /* TEST 3 */
    printf("TEST 3");

    char string3[MAX_SIZE] = "just that man";
    printf("Before Trimmed: %s\n", string3);

    trimBothLeadingandTrailingWhiteSpaces(string3);
    printf("After Trimmed: %s\n", string3);
}

int main()
{

    testFunctionality();

    return 0;
}
