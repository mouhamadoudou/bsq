/*
** EPITECH PROJECT, 2022
** window.c
** File description:
** window.c
*/

#include "my_rpg.h"

void close_window(sfRenderWindow *window, sfEvent event)
{
    if (event.type == sfEvtClosed)
        sfRenderWindow_close(window);

    return;
}

sfRenderWindow *handle_window(void)
{
    sfVideoMode mode = { 1800, 1200, 32 };
    sfRenderWindow *window;

    window = sfRenderWindow_create(mode, "My RPG", sfClose, NULL);
    sfRenderWindow_setFramerateLimit(window, 70);

    return window;
}
