#ifndef __LAYOUT_HPP__
#define __LAYOUT_HPP__

#include "window.hpp"
#include <vector>

class Layout
{
public:
	explicit Layout();
	virtual ~Layout();
	virtual void addWindow(Window &w) = 0;
	void refresh();
protected:
	std::vector<Window> windows;
};

class HLayout : Layout
{
public:
	explicit HLayout() : Layout();
	~HLayout();
	void addWindow(Window &w);
};

class VLayout : Layout
{
public:
	explicit VLayout() : Layout();
	~VLayout();
	void addWindow(Window &w); //TODO: move to basic class ?
};

#endif
