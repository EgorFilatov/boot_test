#include <Tim.h>

Tim::Tim(): prevTick(0) {
}

void Tim::reset(){
	prevTick = HAL_GetTick();
}

uint32_t Tim::getMills(){
	return HAL_GetTick() - prevTick + 1;
}

