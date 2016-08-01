#include "window.hpp"

Window::Window() : 
	sz.w(0),
	sz.h(0),
	pos.x(0),
	pos.y(0)
{
	w = newwin(sz.h, sz.w, pos.y, pos.x);
	wrefresh(w);
}

Window::Window(int x, int y, unsigned int w, unsigned int h) :
	sz.w(w),
	sz.h(h),
	pos.x(x),
	pos.y(y)
{
	w = newwin(sz.h, sz.w, pos.y, pos.x);
	wrefresh(w);
}

Window::~Window()
{
	delwin(w);
}

void Window::move(int x, int y)
{
	pos.x += x;
	pos.y += y;
	mvwin(w, pos.y, pos.x);
	wrefresh(w);
}

void Window::place(unsigned int x, unsigned int y)
{
	mvwin(w, y, x);
	wrefresh(w);
}

void Window::resize(unsigned int w, unsigned int h)
{
	wresize(w, h, w);
	wrefresh(w);
}
