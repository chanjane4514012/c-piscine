#include <stdio.h>

char *ft_strcapitalize(char *str)
{
    int i;
    int c;

    c = 0;
    i = 0;
    while(str[c] != '\0')
    {
        if((i == 0) && (str[c] >= 'a') && (str[c] <= 'z'))
        {
            str[c] -= 32;
            i++;
        }
        else if ((i > 0) && (str[c] >= 'A') && (str[c] <= 'Z'))
            str[c] += 32;
        else if ((str[c] < '0') || (str[c] > '9' && str[c] < 'A') ||
         ((str[c] >'Z') && ((str[c] < 'a')) || str[c] > 'z'))
            i = 0;
        else
            i++;
        c++;
    }
    return(str);
}
int main()
{
    char c[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    char b[] = "AaaaAVVFF";
    ft_strcapitalize(c);
    printf(("%s\n"),c);

}