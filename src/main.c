/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main.c
*/

#include "my_rpg.h"
#include "struct.h"

void handle_event(sfRenderWindow *window)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(window, &event)) {
        close_window(window, event);
    }

    return;
}

void game_loop(sfRenderWindow *window)
{
    bool running = true;

    while (sfRenderWindow_isOpen(window)) {
        handle_event(window);
        sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_display(window);
    }
}

int main(int ac, char **av)
{
    sfRenderWindow *window;

    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        help();
        return 0;
    }
    window = handle_window();
    game_loop(window);

    return 0;
}
