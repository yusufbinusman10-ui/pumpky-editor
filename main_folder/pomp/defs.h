#ifndef DEFS_H
#define DEFS_H
#define NOGDI
#define NOUSER
#define WIN32_LEAN_AND_MEAN
#define mid NULL
#define box MessageBoxA
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include "raylib.h"
typedef struct { 
    Vector2 start; 
    Vector2 end; 
    Color col; 
} TraceLine;
extern TraceLine lines[500];
extern int lineCount;
__declspec(dllimport) int __stdcall MessageBoxA(void*, const char*, const char*, unsigned int);
#define MB_OK 0x00000000L
#endif