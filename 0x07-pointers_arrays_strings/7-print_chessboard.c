#include "main.h"

/**
 * print_chessboard - prints a chessboard.
 * @a: Array.
 * Return: 0 (Success)
 */

void print_chessboard(char (*a)[8])
{
	char board[8][8] = {
		{'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'},
		{'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
		{'R', 'K', 'B', 'Q', 'K', 'B', 'K', 'R'},
	};

	return (board);
}
