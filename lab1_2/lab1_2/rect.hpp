#pragma once

class Rect {
public:
	Rect() :
		up_left_(0), up_right_(0), 
		down_left_(0), down_right_(0) 
	{
	}
private:
	int up_left_;
	int up_right_;
	int down_left_;
	int down_right_;
};