#include <stdio.h>

struct bdate
{
	char g[5];
	char m[3];
	char ch[3];
};

struct Note
{
	char name[30];
	char tel[20];
	bdate birth;
};
