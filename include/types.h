#ifndef TYPES_H_INCLUDED
#define TYPES_H_INCLUDED

#define MAZEX 20
#define MAZEY 77

#define STARTX 18
#define STARTY 4

#define GOBLINPROMPT ".//data//GoblinArt.txt"
#define MURLOCKPROMPT ".//data//MurlockArt.txt"
#define WRAITHPROMPT ".//data//WraithArt.txt"
#define SWORDART ".//data//Sword.txt"
#define DAGGERART ".//data//DaggerArt.txt"
#define SHURIKENART ".//data//ShurikenArt.txt"
#define SHIELDART ".//data//ShieldArt.txt"
#define STAFFART ".//data//StaffArt.txt"
#define SHORTSWORDART ".//data//ShortSwordArt.txt"
#define SHIELDBASH ".//data//ShieldBash.txt"
#define INCINERATE ".//data//Incinerate.txt"
#define SHADOWSLICE ".//data//ShadowSlice.txt"

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_EXTRA 224

#define BLUE FOREGROUND_INTENSITY | FOREGROUND_BLUE
#define GREEN FOREGROUND_INTENSITY | FOREGROUND_GREEN
#define CYAN FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE
#define RED FOREGROUND_INTENSITY | FOREGROUND_RED
#define MAGENTA FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE
#define YELLOW FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN
#define WHITE FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE
#define BLACK 0

#define SPEED 1
#define PERSON '0'
#define WALL '|'
#define HWALL '-'
#define UWALL '_'
#define FLOOR ' '
#define MURMONSTER '@'
#define GOMONSTER '%'
#define WRMONSTER '&'
#define EXIT '*'

#define MON_POPULATION 13

#define WEAKNESS 3

enum InputActions { MOVE = 1, ENCOUNTER, QUIT, STANDSTILL };

#endif // TYPES_H_INCLUDED
