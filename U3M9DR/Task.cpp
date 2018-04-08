#include <stdio.h>
#include <Windows.h>
#include <conio.h>
#include <string.h>
#include <time.h>
#include <locale.h>
#include "Struct.h"
#include "MyFunc.h"

//enum col { yellow = 14, white = 15, red = 12, green = 11 };
int nz;

void main()
{
	/*color(yellow);
	printf("Hello World");*/
	setlocale(LC_ALL, "Ru");
	srand(time(NULL));
	while (true)
	{
		printf("¬ведите номер задани€, 0 - дл€ выхода "); scanf("%d", &nz);
		if (nz == 0)
		{
			break;
			system("exit");
		}
		else if (nz == 1)
		{
			/*1.	ќписать структуру с именем NOTE1, содержащую пол€ :
		    	a.Name Ц фамили€ и инициалы
				b.TELE Ц номер телефона
				c.DATE Ц дата рождени€(год, мес€ц, число)
				Ќаписать программу, выполн€ющую :
				Х	ввод с клавиатуры данных в массив BLOCK, состо€щий из 9 элементов типа NOTE1, 
				записи должны быть упор€дочены по инициалам;
		    	Х	вывод на экран информации о люд€х, чьи дни рождени€ приход€тс€ на мес€ц, 
		    	значение которого введено с клавиатуры; если такого человека нет Ц выдать сообщение.*/
			Note Block[9];	
			for (int i = 0; i < 9; i++)
			{				
				creatName(Block[i].name);
				creatPhone(Block[i].tel);
				creatDate(Block[i].birth.ch, Block[i].birth.m, Block[i].birth.g);
				/*printf("%d - %s, тел. %s, дата рождени€ %2s.%2s.%4s\n",i+1, Block[i].name, Block[i].tel, Block[i].birth.ch, Block[i].birth.m, Block[i].birth.g);*/
			}
			yellow();
			printf("”пор€доченный список по инициалм:\n");
			white();
			sortBlock(Block, 9);
			for (int i = 0; i < 9; i++)
			{				
				printf("%d - %s, тел. %s, дата рождени€ %2s.%2s.%4s\n", i + 1, Block[i].name, Block[i].tel, Block[i].birth.ch, Block[i].birth.m, Block[i].birth.g);
			}
			char m[3];
			yellow();
			printf("¬ведите номер мес€ца (1-12): "); scanf("%s", &m);
			white();
			findM(Block, 9, m);
		}
		else
		{
			red();
			printf("“акого задани€ не существует \n");
			white();
		}
	}
}