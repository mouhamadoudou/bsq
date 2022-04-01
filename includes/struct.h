/*
** EPITECH PROJECT, 2022
** struc.h
** File description:
** struc.h
*/

#ifndef _MY_H_
    #define _MY_H_
    #include <stdio.h>
    #include <unistd.h>
    #include <stdlib.h>

typedef struct {
    int mel_at;
    int intel;
    int focus;
    int armor;
    int luck;
    int nb_item;
    int gold;
} skills_t; // skill basique

typedef struct {
    int obj1;
    int obj2;
    int obj3;
    int obj4;
    int obj5;
    int obj6;
    int obj7;
} inventory; //max 7 object fontionne avec des chiffre predefinit me contacter pour plus de renseignement

typedef struct {
    int fire;
    int water;
    int elect;
    int rock;
} spell_t; // binaire soit 1 ou 0 si 1 le sort est aquis sinon le sort ne l'ai pas

typedef struct {
    int sword;
    int shield;
    int helmet;
    int bots;
    int glovs;
    int armor;
    int potion_life;
    int potion_mana;
} obj_predef; // les objet predeff pareil me contacter si besoin d aide mais pas apres 22 h sinon je te bloque ou avant 5 heur 30 sinon je te pecube quant je serais asteks

typedef struct {
    int life;
    int mana;
    double level;
    int regen_l;
    int regen_m;
    skills_t skills;
    inventory inventor;
    obj_predef obj_predef;
    spell_t spell;
} player_t; //structure deeeeeeeeee basssssssssse

#endif
