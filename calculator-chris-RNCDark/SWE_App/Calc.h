#pragma once
#include "wx/wx.h"
#include <vector>

class Calc : public wxFrame
{
	std::vector<wxButton*> cButton;
	wxTextCtrl* cTxt = nullptr; 
	double vRatio = (double) 8/10; 
	int bRow = 6;
	int bCol = 4;

public:
	Calc();
	~Calc();
	void OnSize(wxSizeEvent& change);
	void nNegative(wxCommandEvent& event);
	void nDot(wxCommandEvent& event);
	void nZero(wxCommandEvent& event);
	void nOne(wxCommandEvent& event);
	void nTwo(wxCommandEvent& event);
	void nThree(wxCommandEvent& event);
	void nFour(wxCommandEvent& event);
	void nFive(wxCommandEvent& event);
	void nSix(wxCommandEvent& event);
	void nSeven(wxCommandEvent& event);
	void nEight(wxCommandEvent& event);
	void nNine(wxCommandEvent& event);
	void nAddition(wxCommandEvent& event);
	void nSubtraction(wxCommandEvent& event);
	void nMulti(wxCommandEvent& event);
	void nDivision(wxCommandEvent& event);
	void nMod(wxCommandEvent& event);
	void nSquared(wxCommandEvent& event);
	void nSin(wxCommandEvent& event);
	void nCos(wxCommandEvent& event);
	void nTan(wxCommandEvent& event);
	void nClear(wxCommandEvent& event);
	void nDelete(wxCommandEvent& event);
	void nSolve(wxCommandEvent& event);

	wxDECLARE_EVENT_TABLE();
};

