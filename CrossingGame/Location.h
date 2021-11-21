#pragma once
class Location {
protected:
	int x;
	int y;
public:
	Location();
	Location(int, int);

	void SetLocation(int x, int y);
	int& GetX();
	int& GetY();
};

