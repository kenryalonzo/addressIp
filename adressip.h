#ifndef __ADRESSIP__H__
#define __ADRESSIP__H__
#include <string.h>


typedef int AdressIP[4];

int getDigit(AdressIP ip, int i);
char* toString(AdressIP ip); 
int conform(AdressIP ip);
int inRange(int x, int y, int z);
int classe(AdressIP ip);
char* classeChar(AdressIP ip);

#endif