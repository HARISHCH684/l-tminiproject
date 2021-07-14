#ifndef __FUN_H
#define __FUN_H
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

char ceaser(char *string, int n, char *encrypted_msg);
char vernem(char *str, char *key, char *encrypted_msg);
char vignere(char *message, char *key, char *temp_key, char *encrypted_message);

#endif