#pragma once
#include "wx/wx.h"
#include "Calc.h"

class App : public wxApp
{
private: 
	Calc* frame; 
public:
	virtual bool OnInit();
};

