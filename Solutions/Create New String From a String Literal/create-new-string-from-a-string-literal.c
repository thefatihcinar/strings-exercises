char* NewString(char* stringLiteral){
    /*
        This is a CONSTRUCTOR FUNCTION for strings
        It takes not-dynamically allocated string literals 
        and allocates dynamic memory for those literals
        and returns the address
    */

    char* newString = NULL;

    CopyString(&newString, stringLiteral);
    // copy to the new string

    return newString;
}
