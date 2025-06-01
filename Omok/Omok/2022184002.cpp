#include<iostream>

int board_2022184002[19][19];

#define BLACK -1
#define WHITE 1

void WhiteAttack_2022184002(int* x, int* y)
{
	// 직접 구현하신 돌 놓기 로직을 넣어주세요
	//
	//

	// 예시로 항상 [5,5]에만 돌을 두게함
	*x = 5;
	*y = 5;

	board_2022184002[*y][*x] = WHITE;
}
void WhiteDefence_2022184002(int x, int y)
{
	board_2022184002[y][x] = BLACK;
}
void BlackAttack_2022184002(int* x, int* y)
{
	// 직접 구현하신 돌 놓기 로직을 넣어주세요
	//
	//

	// 예시로 항상 [5,5]에만 돌을 두게함
	*x = 5;
	*y = 5;

	board_2022184002[*y][*x] = BLACK;
}
void BlackDefence_2022184002(int x, int y)
{
	board_2022184002[y][x] = WHITE;
}