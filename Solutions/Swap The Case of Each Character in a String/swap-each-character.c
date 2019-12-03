/*
    Swap The Case of Each Character in a String
    
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
void ConvertUppercaseStringToLowercase(char* str);
void ConvertLowercaseStringToUppercase(char* str);




void SwapTheCaseOfEachCharacter(char* str){
    /*
        This function swaps the case of each character in the string
        Converts a lowercase character to uppercase,
        and an uppercase character to lowercase
    */

     int itr = 0; 
     // an iterator to iterate thru the string

     while( str[itr] != '\0' ){
         // iterate thru the string
         
         if(IsLowercase(str[itr])){
             // if this character is lowercase
             // make it an uppercase
             str[itr] = LowerToUpper(str[itr]);
             itr++;
             continue;
         }
         else if(IsUppercase(str[itr])){
             // if this character is uppercase 
             // make it lowercase
             str[itr] = UpperToLower(str[itr]);
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




/* NEEDED FUNCTIONS */

void ConvertUppercaseStringToLowercase(char* str){
    /*
        This function gets an uppercase string,
        and converts it to a lowercase string
        Applies the changes to the string
    */

     int itr = 0; // an iterator to iterate thru the string

     while( str[itr] != '\0'){
         // iterate thru the string

         if(IsUppercase(str[itr])){
             // if this character is an UPPERCASE character
             // convert it to lowercase and apply to the string
             str[itr] = UpperToLower(str[itr]);
             itr++;
             continue;
         }
         else{
             itr++;
             continue;
         }
     }
}


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

