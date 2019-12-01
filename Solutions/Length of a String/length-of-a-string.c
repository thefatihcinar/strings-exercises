int Length(char *string)
{
    /*
        This function returns the length of the given string
    */

   /*
        Algorithm is 
        iterate on the string till you see the NULL character
        count how much you've gone
        and return it
   */

    int length = 0;

    while (string[length] != 0) // as long as the element is not NULL , COUNT!
    {
        length++;
    }

    return length;
}
