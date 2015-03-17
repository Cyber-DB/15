#pragma warning(disable:4996)
#include <stdio.h>

int Hanoi(int num, char depart, char via, char dest, int depth)
{
	depth++;
	if (num == 1)
	{
		printf("%d : %c(%d) -> %c\t %c %c %c \n", depth, depart, num, dest, depart, via, dest);
	}
	else
	{
		Hanoi(num - 1, depart, dest, via, depth);
		printf("%d : %c(%d) -> %c\t %c %c %c \n", depth, depart, num, dest, depart, via, dest);
		Hanoi(num - 1, via, depart, dest, depth);
	}

	return depth;
}

int main()
{
	int coin;
	printf("원판의 개수는? ");
	scanf("%d", &coin);

	Hanoi(coin, 'A', 'B', 'C', 0);
	return 0;
}