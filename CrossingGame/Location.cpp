#include "Location.h"

Location::Location() {
	x = 0;
	y = 0;
}

Location::Location(int _x, int _y) {
	x = _x;
	y = _y;
}

void Location::SetLocation(int _x, int _y) {
	x = _x;
	y = _y;
}

int& Location::GetX() {
	return x;
}
int& Location::GetY() {
	return y;
}