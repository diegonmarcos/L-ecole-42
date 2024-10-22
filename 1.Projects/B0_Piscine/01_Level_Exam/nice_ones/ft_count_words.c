int trigger = 0

int count_words(char *str)
{
    int count = 0;
    int trigger = 0;

    while (*str)
    {
        if (*str != ' ' && trigger == 0)
        {
            trigger = 1;
            count++;
        }
        else if (*str == ' ' && trigger == 1)
        {
            trigger = 0;
        }
        str++;
    }
    return count;
}