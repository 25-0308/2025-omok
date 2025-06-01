#include<iostream>
#include "Judgment.h"

#include "2022184002.h"
using namespace std;

int main(void)
{
	Judgment judgment;

	judgment.SetYourFunc(
		BlackAttack_2022184002/*선공*/,
		BlackDefence_2022184002,
		WhiteAttack_2022184002/*후공*/,
		WhiteDefence_2022184002
	);
	judgment.GamePlay();
}