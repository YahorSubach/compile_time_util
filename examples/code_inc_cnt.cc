#include <iostream>

#include "code_inc_cnt.h"

MAKECNT(CNT_1);

const int initial_value = GETCNT(CNT_1);

INCCNT(CNT_1);
INCCNT(CNT_1);
INCCNT(CNT_1);

const int after_3_inc_value = GETCNT(CNT_1);

INCCNT(CNT_1);
INCCNT(CNT_1);
INCCNT(CNT_1);
INCCNT(CNT_1);
INCCNT(CNT_1);
INCCNT(CNT_1);
INCCNT(CNT_1);
INCCNT(CNT_1);
INCCNT(CNT_1);
INCCNT(CNT_1);

const int after_10_inc_value = GETCNT(CNT_1);

INCCNT(CNT_1);
INCCNT(CNT_1);
INCCNT(CNT_1);
INCCNT(CNT_1);
INCCNT(CNT_1);
INCCNT(CNT_1);
INCCNT(CNT_1);
INCCNT(CNT_1);
INCCNT(CNT_1);
INCCNT(CNT_1);

INCCNT(CNT_1);
INCCNT(CNT_1);
INCCNT(CNT_1);
INCCNT(CNT_1);
INCCNT(CNT_1);
INCCNT(CNT_1);
INCCNT(CNT_1);
INCCNT(CNT_1);
INCCNT(CNT_1);
INCCNT(CNT_1);

const int after_20_inc_value = GETCNT(CNT_1);

void main()
{
	std::cout << "initial_value = " << initial_value << std::endl;
	std::cout << "after_3_inc_value = " << after_3_inc_value << std::endl;
	std::cout << "after_10_inc_value = " << after_10_inc_value << std::endl;
	std::cout << "after_20_inc_value = " << after_20_inc_value << std::endl;
}