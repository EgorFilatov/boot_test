#ifndef INC_TIM_H_
#define INC_TIM_H_

#include "main.h"

class Tim {
private:
	uint32_t prevTick;

public:
	Tim();
	void reset();
	uint32_t getMills();
};

#endif
