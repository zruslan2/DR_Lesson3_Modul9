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
		printf("������� ����� �������, 0 - ��� ������ "); scanf("%d", &nz);
		if (nz == 0)
		{
			break;
			system("exit");
		}
		else if (nz == 1)
		{
			/*1.	������� ��������� � ������ NOTE1, ���������� ���� :
		    	a.Name � ������� � ��������
				b.TELE � ����� ��������
				c.DATE � ���� ��������(���, �����, �����)
				�������� ���������, ����������� :
				�	���� � ���������� ������ � ������ BLOCK, ��������� �� 9 ��������� ���� NOTE1, 
				������ ������ ���� ����������� �� ���������;
		    	�	����� �� ����� ���������� � �����, ��� ��� �������� ���������� �� �����, 
		    	�������� �������� ������� � ����������; ���� ������ �������� ��� � ������ ���������.*/
			Note Block[9];	
			for (int i = 0; i < 9; i++)
			{				
				creatName(Block[i].name);
				creatPhone(Block[i].tel);
				creatDate(Block[i].birth.ch, Block[i].birth.m, Block[i].birth.g);
				/*printf("%d - %s, ���. %s, ���� �������� %2s.%2s.%4s\n",i+1, Block[i].name, Block[i].tel, Block[i].birth.ch, Block[i].birth.m, Block[i].birth.g);*/
			}
			yellow();
			printf("������������� ������ �� ��������:\n");
			white();
			sortBlock(Block, 9);
			for (int i = 0; i < 9; i++)
			{				
				printf("%d - %s, ���. %s, ���� �������� %2s.%2s.%4s\n", i + 1, Block[i].name, Block[i].tel, Block[i].birth.ch, Block[i].birth.m, Block[i].birth.g);
			}
			char m[3];
			yellow();
			printf("������� ����� ������ (1-12): "); scanf("%s", &m);
			white();
			findM(Block, 9, m);
		}
		else
		{
			red();
			printf("������ ������� �� ���������� \n");
			white();
		}
	}
}