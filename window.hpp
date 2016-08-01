#ifndef __WINDOW_HPP__
#define __WINDOW_HPP__

#include <ncurses.h>
#include "types.hpp"

class Window
{
public:
	explicit Window();
	explicit Window(int x, int y, unsigned int w, unsigned int h);
	virtual ~Window();

	void place(unsigned int x, unsigned int y);
	void move(int x, int y);
	Size getSize() { return sz; }
	Point getPos() { return pos; }
	void resize(unsigned int w, unsigned int h);

private:
	WINDOW *w;
	Size sz;
	Point pos;

#endif // __WINDOW_HPP__
