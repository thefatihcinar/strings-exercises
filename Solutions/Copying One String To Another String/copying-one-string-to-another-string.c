void CopyString(char **copyTo, char *from)
{
    /*
        This function copies one string to another.
        It allocated the required memory to copy to a new string.
        Do not send and array to this function, it requies character pointer
    */

    /*
        Why to get CopyTo as double pointer?
        Because we are going to change everything it has 
        Including the first character that it points to 

    */

    char *to = (char*) malloc(sizeof(char) * (Length(from) + 1));
    // Allocate new memory for copying

    int counter = 0;

    while (from[counter] != '\0')
    {

        to[counter] = from[counter];
        counter++;
    }

    to[counter] = '\0';
    // put NULL character to its end to make it a valid C string

    *copyTo = to;
    // So we are editing the content of the copyTo pointer
    // Now it will point to the new character array or string

    return;
}
