#include<iostream>
#include "Judgment.h"

#include "2022184002.h"
using namespace std;

int main(void)
{
	Judgment judgment;

	judgment.SetYourFunc(
		BlackAttack_2022184002/*����*/,
		BlackDefence_2022184002,
		WhiteAttack_2022184002/*�İ�*/,
		WhiteDefence_2022184002
	);
	judgment.GamePlay();
}