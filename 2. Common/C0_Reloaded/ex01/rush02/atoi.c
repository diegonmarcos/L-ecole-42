int atoi(char *str) 
{
    int result = 0;
    int sign = 1;
    int index = 0;

    // Skip whitespace
    while (str[index] == ' ') 
    {
        index++;
    }

    // Check for sign
    if (str[index] == '+') 
    {
        index++;
    } 
    else
    {
        if (str[index] == '-') 
        {
            sign = -1;
            index++;
        }
    }
    // Convert digits
    while (str[index] >= '0' && str[index] <= '9') 
    {
        result = result * 10 + (str[index] - '0');
        index++;
    }

    // Check if entire string was processed 
    if (str[index] != '\0') 
    {
        return 0;
    }

    return sign * result;
}
