#pragma once
class primitives
{
	int x1;
	int y1;
	int x2;
	int y2;
	int cx;
	int cy;
	int radius;
public:
	void use_as_circle(int, int, int);
	void use_as_line(int, int, int, int);
	void draw_line();
	void draw_circle();
};

