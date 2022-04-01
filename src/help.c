/*
** EPITECH PROJECT, 2022
** help.c
** File description:
** help
*/

int my_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return i;
}

void my_putstr(char *str)
{
    int len = my_strlen(str);

    write(1, str, len);

    return;
}

void help(void)
{
    my_putstr("help\n");

    return;
}