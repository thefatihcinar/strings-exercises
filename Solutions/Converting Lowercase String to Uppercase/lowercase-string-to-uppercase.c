/*
    Convert Lowercase String to Uppercase
    
    coded by Fatih Cinar
    on December 3rd, 2019

*/

#include <stdio.h>
#include <stdlib.h>

enum information{
    TRUE = 1,
    FALSE = 0
};

char UpperToLower(char chr);
char LowerToUpper(char chr);
int IsUppercase(char chr);
int IsLowercase(char chr);


void ConvertLowercaseStringToUppercase(char* str){
  /*
      This function gets a lowercase string
      and converts it to an UPPERCASE STRING
  */

    int itr = 0;  // iterator to iterate thru the string

    while (str[itr] != '\0')
    {
        // Iterate thru the string

        if(IsLowercase(str[itr])){
            // if this element is lowercase
            // make it uppercase
            str[itr] = LowerToUpper(str[itr]);
            itr++;
            continue;
        }
        else{
            itr++;
            continue;
        }

    }

    return;

}





int IsLowercase(char chr){
    /*
        This function determines whether the given character
        is a lowercase character or not
    */

    if ( chr >= 'a' && chr <= 'z' ){
        // if the character is between  a <= chr <= z
        // if means it is a lowercase character
        return TRUE;
    }
    else
    {
        return FALSE;
    }
    
}

int IsUppercase(char chr){
    /*
        This function finds out whether the given character
        is an UPPERCASE CHARACTER or not
    */

    if ( chr >= 'A' && chr <= 'Z'){
        // if the character is between A <= chr <= Z

        return TRUE;
    }
    else{
        return FALSE;
    }
}

char LowerToUpper(char chr)
{
    /*
        This function converts a lowercase character 
        to an UPPERCASE character
    */

    if (IsLowercase(chr))
    {
        // IF THIS CHARACTER IS BETWEEN a <= chr <= z
        return 'A' + (chr - 'a'); //make it an UPPERCASE char
    }
    else
    {
        return chr;
    }
}

char UpperToLower(char chr){
    /*
        This functions converts an UPPERCASE CHARACTER
        to a lowercase character
    */

    if (IsUppercase(chr)){
        // if the chr is between A <= chr <= Z
        // convert is to lowercase
        return 'a' + (chr - 'A');
    }
    else{
        return chr;
    }
}


