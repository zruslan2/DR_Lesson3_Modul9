#include <stdio.h>
#include <Windows.h>
#include <conio.h>
#include <string.h>
#include "Struct.h"

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
//enum col { yellow = 14, white = 15, red = 12, green = 11}number;
//
//void color(col c)
//{
//	SetConsoleTextAttribute(hConsole, (int)c);
//}

void yellow()
{
	SetConsoleTextAttribute(hConsole, 14);
}

void white()
{
	SetConsoleTextAttribute(hConsole, 15);
}

void red()
{
	SetConsoleTextAttribute(hConsole, 12);
}

void green()
{
	SetConsoleTextAttribute(hConsole, 11);
}

void creatName(char*N)
{
	char lname[18][30] = {"Иванов", "Иванова", "Петров","Петрова", "Васичкин", "Васичкина", "Каирбеков","Каирбекова","Муканов","Муканова","Абишев","Абишева", "Ким","Хан","Булкин","Булкина","Карлыгашев","Карлыгашева"};
	char in[10][6] = { " А.А."," А.Б."," А.В."," Б.А."," Б.Б."," Б.В."," В.А."," В.Б."," В.В."," Я.Я." };
	int n, i;
	n = 0 + rand() % 17;
	i = 0 + rand() % 9;
	*N = '\0';
	strcat(N,lname[n]);
	strcat(N, in[i]);
}

void creatPhone(char*N)
{
	char prf[4][6] = { "(727)","(707)","(705)","(701)" };
	*N = '\0';
	int f, p;
	strcat(N, "+7");
	p = 0 + rand() % 3;
	strcat(N, prf[p]);
	char num[4]="";
	f = 100 + rand() % 899;
	itoa(f, num, 10);
	strcat(N, num);
	num[0] = '\0';
	f = 10 + rand() % 89;
	itoa(f, num, 10);
	strcat(N, "-");
	strcat(N, num);
	num[0] = '\0';
	f = 10 + rand() % 89;
	itoa(f, num, 10);
	strcat(N, "-");
	strcat(N, num);
}

void creatDate(char *d, char *m, char *g)
{
	int D;
	D = 1 + rand() % 30;
	itoa(D, d, 10);
	D = 1 + rand() % 11;
	itoa(D, m, 10);
	D = 1970 + rand() % 40;
	itoa(D, g, 10);
}

void sortBlock(Note block[], int n)
{
	Note tmp;		
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (strcmp(block[j].name, block[j + 1].name) > 0)
			{
				tmp = block[j];
				block[j] = block[j + 1];
				block[j + 1] = tmp;
			}
		}
	}
}

void findM(Note block[], int n, char ms[])
{
	int b = 0;
	for (int i = 0; i < n; i++)
	{
		if (strcmp(block[i].birth.m, ms) == 0)
		{
			printf("%d - %s, тел. %s, дата рождения %2s.%2s.%4s\n", i + 1, block[i].name, block[i].tel, block[i].birth.ch, block[i].birth.m, block[i].birth.g);
			b = 1;
		}
	}
	if (b == 0)
	{
		red();
		printf("Родившихся в %s месяце, в списке нет\n",ms);
		white();
	}
}