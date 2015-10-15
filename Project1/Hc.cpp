//For d0c 
#include <Windows.h>
#include <stdio.h>
#include <WinUser.h>
#include <windowsx.h>
#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include <string>

int main()
{

	int answerInput;
	char yes;
	bool weBothDontHaveADate = true;

	char aydoc[7] = { 'A', 'y', ' ', 'D', 'o','c', '!' };
	char hcdate[28] = { 'S', 'o', ',', ' ', 'I', ' ', 'd', 'o', 'n', 't', ' ', 'h', 'a', 'v', 'e', ' ', 'a', ' ', 'd', 'a', 't', 'e', ' ', 't', 'o', ' ', 'H', 'C' };
	char dotdot[3] = { '.', '.', '.' };
	char cool[36] = { 'A', 'n', 'd', ' ', 'I', ' ', 't', 'h', 'i', 'n', 'k', ' ', 'y', 'o', 'u', '\'', 'd', ' ', 'b', 'e', ' ', 'f', 'u', 'n', ' ', 't', 'o', ' ', 'g', 'o', ' ', 'w', 'i', 't', 'h', '.' };
	char question[32] = { 'S', 'o', ' ', 'l', 'e', 't', '\'', 's', ' ', 'g', 'e', 't', ' ', 't', 'o', ' ', 't', 'h', 'e', ' ', 'b', 'i', 'g', ' ', 'q', 'u', 'e', 's', 't', 'i', 'o', 'n' };
	char willYouGo[34] = { 'E', 'l', 'l', 'i', 'e', ' ', ',', ' ', 'w', 'i', 'l', 'l', ' ', 'y', 'o', 'u', ' ', 'g', 'o', ' ', 't', 'o', ' ', 'H', 'C', ' ', 'w', 'i', 't', 'h', ' ', 'm', 'e', '?' };
	char answer[17] = { 'P', 'r', 'e', 's', 's', ' ', '\"', 'y', '\"', ' ', 'f', 'o', 'r', ' ', 'y', 'e', 's' };
	char fantabulous[16] = { 'K', ' ', 't', 'h', 'a', 'n', 'k', 's', ' ', 'b', 'a', 'b', 'e', ' ', '3', '>' };
	char fantabulous2[4] = { 'W', 'a', 'i', 't' };
	char fantabulous3[2] = { '<', '4' };
	char fantabulous4[23] = { 'S', 'h', 'i', 't', ', ', ' ', 'I', ' ', 'c', 'a', 'n', '\'', 't', ' ', 'g', 'e', 't', ' ', 'i', 't', ' ', '<', '5' };
	char fantabulous5[26] = { 'F', 'u', 'c', 'k', ' ', 'i', 't', ',', ' ', 'I', ' ', 'l', 'i', 'k', 'e', ' ', '3', '>', ' ', 'b', 'e', 't', 't', 'e', 'r', '.' };
	char wrong[30] = { 'I', '\'', 'm', ' ', 'p', 'r', 'e', 't', 't', 'y', ' ', 's', 'u', 'r', 'e', ' ', 'y', 'o', 'u', ' ', 'm', 'e', 'a', 'n', 't', ' ', 'y', 'e', 's', '.' };

	if (weBothDontHaveADate == true)
	{
		for (int i = 0; i < 7; i++)
		{
			Sleep(100);
			std::cout << aydoc[i];
		}
		std::cout << std::endl;
		for (int j = 0; j < 28; j++)
		{
			Sleep(100);
			std::cout << hcdate[j];
		}
		for (int k = 0; k < 3; k++)
		{
			Sleep(350);
			std::cout << dotdot[k];		
		}
		std::cout << std::endl;
		for (int l = 0; l < 36; l++)
		{
			Sleep(100);
			std::cout << cool[l];
		}
		std::cout << std::endl;
		for (int m = 0; m < 32; m++)
		{
			Sleep(100);
			std::cout << question[m];
		}
		std::cout << std::endl;
		for (int n = 0; n < 3; n++)
		{
			Sleep(350);
			std::cout << dotdot[n];
		}
		std::cout << std::endl;
		for (int o = 0; o < 34; o++)
		{
			Sleep(100);
			std::cout << willYouGo[o];
		}
		std::cout << std::endl;
		Sleep(300);
		for (int p = 0; p < 17; p++)
		{
			Sleep(100);
			std::cout << answer[p];
		}
		std::cout << std::endl;
		std::cin >> yes;

		if (yes == 'y')
		{
			for (int a = 0; a < 16; a++)
			{
				Sleep(200);
				std::cout << fantabulous[a];
			}
			std::cout << std::endl;
			for (int b = 0; b < 4; b++)
			{
				Sleep(250);
				std::cout << fantabulous2[b];
			}
			std::cout << std::endl;
			for (int c = 0; c < 2; c++)
			{
				Sleep(300);
				std::cout << fantabulous3[c];
			}
			std::cout << std::endl;
			for (int d = 0; d < 23; d++)
			{
				Sleep(150);
				std::cout << fantabulous4[d];
			}
			std::cout << std::endl;
			for (int e = 0; e < 26; e++)
			{
				Sleep(150);
				std::cout << fantabulous5[e];
			}
			std::cout << std::endl;
		}
		else
		{
			for (int f = 0; f < 30; f++)
			{
				Sleep(100);
				std::cout << wrong[f];
			}
			std::cout << std::endl;
		}
	}


	system("Pause");
	return 0;
}