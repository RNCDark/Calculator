#define ID_NEG_BUTTON 5
#define ID_DOT_BUTTON 11
#define ID_ZERO_BUTTON 13
#define ID_ONE_BUTTON 23
#define ID_TWO_BUTTON 42
#define ID_THREE_BUTTON 46
#define ID_FOUR_BUTTON 25
#define ID_FIVE_BUTTON 57
#define ID_SIX_BUTTON 68
#define ID_SEVEN_BUTTON 75
#define ID_EIGHT_BUTTON 89
#define ID_NINE_BUTTON 90
#define ID_ADD_BUTTON 12
#define ID_SUB_BUTTON 47
#define ID_MULT_BUTTON 123
#define ID_DIV_BUTTON 234
#define ID_MOD_BUTTON 211
#define ID_SQUARE_BUTTON 22
#define ID_SIN_BUTTON 257
#define ID_COS_BUTTON 987
#define ID_TAN_BUTTON 625
#define ID_CLEAR_BUTTON 675
#define ID_DELETE_BUTTON 846
#define ID_EQUAL_BUTTON 212

#include "Calc.h"

wxBEGIN_EVENT_TABLE(Calc, wxFrame)
	EVT_SIZE(Calc::OnSize)
	EVT_BUTTON(ID_NEG_BUTTON, Calc::nNegative)
	EVT_BUTTON(ID_DOT_BUTTON, Calc::nDot)
	EVT_BUTTON(ID_ZERO_BUTTON, Calc::nZero)
	EVT_BUTTON(ID_ONE_BUTTON, Calc::nOne)
	EVT_BUTTON(ID_TWO_BUTTON, Calc::nTwo)
	EVT_BUTTON(ID_THREE_BUTTON, Calc::nThree)
	EVT_BUTTON(ID_FOUR_BUTTON, Calc::nFour)
	EVT_BUTTON(ID_FIVE_BUTTON, Calc::nFive)
	EVT_BUTTON(ID_SIX_BUTTON, Calc::nSix)
	EVT_BUTTON(ID_SEVEN_BUTTON, Calc::nSeven)
	EVT_BUTTON(ID_EIGHT_BUTTON, Calc::nEight)
	EVT_BUTTON(ID_NINE_BUTTON, Calc::nNine)
	EVT_BUTTON(ID_ADD_BUTTON, Calc::nAddition)
	EVT_BUTTON(ID_SUB_BUTTON, Calc::nSubtraction)
	EVT_BUTTON(ID_MULT_BUTTON, Calc::nMulti)
	EVT_BUTTON(ID_DIV_BUTTON, Calc::nDivision)
	EVT_BUTTON(ID_MOD_BUTTON, Calc::nMod)
	EVT_BUTTON(ID_SQUARE_BUTTON, Calc::nSquared)
	EVT_BUTTON(ID_SIN_BUTTON, Calc::nSin)
	EVT_BUTTON(ID_COS_BUTTON, Calc::nCos)
	EVT_BUTTON(ID_TAN_BUTTON, Calc::nTan)
	EVT_BUTTON(ID_CLEAR_BUTTON, Calc::nClear)
	EVT_BUTTON(ID_DELETE_BUTTON, Calc::nDelete)
	EVT_BUTTON(ID_EQUAL_BUTTON, Calc::nSolve)
wxEND_EVENT_TABLE()

Calc::Calc() : wxFrame(nullptr, wxID_ANY, "Calculator x2000", wxPoint(0, 0), wxSize(550, 525))
{
	
	cTxt = new wxTextCtrl(this, wxID_ANY, "", wxPoint(0,0), wxSize(535, 105), wxTE_RIGHT | wxTE_READONLY | wxEXPAND);
	cTxt->SetValue("");
	//creating necessary buttons and giving them unique id's
	wxButton* vNeg = new wxButton(this, ID_NEG_BUTTON, "-/+", wxPoint(239, 400), wxSize(25, 40));
	wxButton* vDot = new wxButton(this, ID_DOT_BUTTON, ".", wxPoint(10,400), wxSize(25,45));
	wxButton* vZero = new wxButton(this, ID_ZERO_BUTTON, "0", wxPoint(100, 400), wxSize(25, 40));
	wxButton* vOne = new wxButton(this, ID_ONE_BUTTON, "1", wxPoint(150, 230), wxSize(25, 40));
	wxButton* vTwo = new wxButton(this, ID_TWO_BUTTON, "2", wxPoint(200, 230), wxSize(25, 40));
	wxButton* vThree = new wxButton(this, ID_THREE_BUTTON, "3", wxPoint(250, 230), wxSize(25, 40));
	wxButton* vFour = new wxButton(this, ID_FOUR_BUTTON, "4", wxPoint(250, 230), wxSize(25, 40));
	wxButton* vFive = new wxButton(this, ID_FIVE_BUTTON, "5", wxPoint(250, 230), wxSize(25, 40));
	wxButton* vSix = new wxButton(this, ID_SIX_BUTTON, "6", wxPoint(250, 230), wxSize(25, 40));
	wxButton* vSeven = new wxButton(this, ID_SEVEN_BUTTON, "7", wxPoint(250, 230), wxSize(25, 40));
	wxButton* vEight = new wxButton(this, ID_EIGHT_BUTTON, "8", wxPoint(250, 230), wxSize(25, 40));
	wxButton* vNine = new wxButton(this, ID_NINE_BUTTON, "9", wxPoint(250, 230), wxSize(25, 40));
	wxButton* vAdd = new wxButton(this, ID_ADD_BUTTON, "+", wxPoint(250, 230), wxSize(25, 40));
	wxButton* vSub = new wxButton(this, ID_SUB_BUTTON, "–", wxPoint(250, 230), wxSize(25, 40));
	wxButton* vMulti = new wxButton(this, ID_MULT_BUTTON, "*", wxPoint(250, 230), wxSize(25, 40));
	wxButton* vDivide = new wxButton(this, ID_DIV_BUTTON, "/", wxPoint(250, 230), wxSize(25, 40));
	wxButton* vMod = new wxButton(this, ID_MOD_BUTTON, "%", wxPoint(250, 230), wxSize(25, 40));
	wxButton* vSqr = new wxButton(this, ID_SQUARE_BUTTON, "x^2", wxPoint(250, 230), wxSize(25, 40));
	wxButton* vSin = new wxButton(this, ID_SIN_BUTTON, "Sin", wxPoint(250, 230), wxSize(25, 40));
	wxButton* vCos = new wxButton(this, ID_COS_BUTTON, "Cos", wxPoint(250, 230), wxSize(25, 40));
	wxButton* vTan = new wxButton(this, ID_TAN_BUTTON, "Tan", wxPoint(250, 230), wxSize(25, 40));
	wxButton* vClear = new wxButton(this, ID_CLEAR_BUTTON, "CE", wxPoint(250, 230), wxSize(25, 40));
	wxButton* vDelete = new wxButton(this, ID_DELETE_BUTTON, "DEL", wxPoint(250, 230), wxSize(25, 40));
	wxButton* vSolve = new wxButton(this, ID_EQUAL_BUTTON, "=", wxPoint(250, 230), wxSize(25, 40));

	wxBoxSizer* cBox = new wxBoxSizer(wxHORIZONTAL);
	cBox->Add(cTxt, 1, wxEXPAND);
	SetSizer(cBox);
	//order of the buttons
	cButton.push_back(vClear);
	cButton.push_back(vMod);
	cButton.push_back(vSqr);
	cButton.push_back(vDelete);

	cButton.push_back(vSin);
	cButton.push_back(vCos);
	cButton.push_back(vTan);
	cButton.push_back(vDivide);

	cButton.push_back(vSeven);
	cButton.push_back(vEight);
	cButton.push_back(vNine);
	cButton.push_back(vMulti);

	cButton.push_back(vFour);
	cButton.push_back(vFive);
	cButton.push_back(vSix);
	cButton.push_back(vSub);

	cButton.push_back(vOne);
	cButton.push_back(vTwo);
	cButton.push_back(vThree);
	cButton.push_back(vAdd);

	cButton.push_back(vNeg);
	cButton.push_back(vZero);
	cButton.push_back(vDot);
	cButton.push_back(vSolve);
}

Calc::~Calc() {

}

void Calc::OnSize(wxSizeEvent& change)
{
	//math need to properly position buttons
	wxSize sizer = change.GetSize();
	const double xSize = sizer.x - 15; 
	const double ySize = (sizer.y * vRatio) - 40; 
	wxSize buttonChange((xSize / bCol),(ySize / bRow));
	wxSize TxtChange((xSize), (ySize / bCol) + 10);
	cTxt->SetSize(TxtChange);
	const double ySet = sizer.y * (1 - vRatio);
	//calculation for centering buttons
	const double vX = -0.5 * buttonChange.x;
	const double vY = (-0.5 * buttonChange.y) + ySet;

	for (int vIn = 0; vIn < cButton.size(); ++vIn) {
		//constraints for the buttons
		double top = (ySize / bRow) * (vIn / bCol);
		double left = (xSize / bCol) * (vIn % bCol);
		const double bottom = (ySize / bRow) * (vIn / bCol + 1);
		const double right = (xSize / bCol) * (vIn % bCol + 1);
		const wxPoint middle(.5 * (right + left) + vX, .5 * (top + bottom) + vY);

		cButton[vIn]->SetSize(buttonChange);
		cButton[vIn]->SetPosition(middle);
	}
}

void Calc::nNegative(wxCommandEvent& event)
{
	cTxt->AppendText("-");
}

void Calc::nDot(wxCommandEvent& event)
{
	cTxt->AppendText(".");
}

void Calc::nZero(wxCommandEvent& event)
{
	cTxt->AppendText("0");
}

void Calc::nOne(wxCommandEvent& event)
{
	cTxt->AppendText("1");
}

void Calc::nTwo(wxCommandEvent& event)
{
	cTxt->AppendText("2");
}

void Calc::nThree(wxCommandEvent& event)
{
	cTxt->AppendText("3");
}

void Calc::nFour(wxCommandEvent& event)
{
	cTxt->AppendText("4");
}

void Calc::nFive(wxCommandEvent& event)
{
	cTxt->AppendText("5");
}

void Calc::nSix(wxCommandEvent& event)
{
	cTxt->AppendText("6");
}

void Calc::nSeven(wxCommandEvent& event)
{
	cTxt->AppendText("7");
}

void Calc::nEight(wxCommandEvent& event)
{
	cTxt->AppendText("8");
}

void Calc::nNine(wxCommandEvent& event)
{
	cTxt->AppendText("9");
}

void Calc::nAddition(wxCommandEvent& event)
{
	if (!cTxt->IsEmpty())
		cTxt->AppendText("+");
	else
		wxMessageBox("Invalid Format");
}

void Calc::nSubtraction(wxCommandEvent& event)
{
	if (!cTxt->IsEmpty())
		cTxt->AppendText("–");
	else
		wxMessageBox("Invalid Format");
}

void Calc::nMulti(wxCommandEvent& event)
{
	if (!cTxt->IsEmpty())
		cTxt->AppendText("*");
	else
		wxMessageBox("Invalid Format");
}

void Calc::nDivision(wxCommandEvent& event)
{
	if (!cTxt->IsEmpty())
		cTxt->AppendText("/");
	else
		wxMessageBox("Invalid Format");
}

void Calc::nMod(wxCommandEvent& event)
{
	if (!cTxt->IsEmpty())
		cTxt->AppendText("%");
	else
		wxMessageBox("Invalid Format");
}

void Calc::nSquared(wxCommandEvent& event)
{
	if (!cTxt->IsEmpty()) {
		cTxt->AppendText("^2");
	}
	else {
		wxMessageBox( "Invalid Format");
	}
}

void Calc::nSin(wxCommandEvent& event)
{
	cTxt->AppendText("Sin ");
}

void Calc::nCos(wxCommandEvent& event)
{
	cTxt->AppendText("Cos ");
}

void Calc::nTan(wxCommandEvent& event)
{
	cTxt->AppendText("Tan ");
}

void Calc::nClear(wxCommandEvent& event)
{
	if (!cTxt->IsEmpty())
		cTxt->Remove(cTxt->GetLastPosition(), 0);
}

void Calc::nDelete(wxCommandEvent& event)
{
	if (!cTxt->IsEmpty())
		cTxt->Remove(cTxt->GetLastPosition(), cTxt->GetLastPosition() - 1);
}

void Calc::nSolve(wxCommandEvent& event)
{
	wxString equation = cTxt->GetValue();
	wxString left = "";
	wxString right = "";
	double numLeft = 0;
	double numRight = 0;
	double calculation = 0;
	wxString solution = "";
	if (!cTxt->IsEmpty()) {
		for (int op = 0; op < equation.size(); ++op) {
			const char sol = equation[op];
			switch (sol)
			{
			case '+':
				left = equation.substr(0, op);
				right = equation.substr(op + 1, equation.Last());
				if (right.Contains("+") || right.Contains("..") || left.Contains("..")) {
					wxMessageBox("Invalid Format");
					return;
				}
				numLeft = wxAtof(left);
				numRight = wxAtof(right);
				calculation = numLeft + numRight; 
				cTxt->Remove(cTxt->GetLastPosition(), 0);
				solution = wxString::Format(wxT("%f"), calculation);
				cTxt->AppendText(solution);
				break;
			case '–':
				left = equation.substr(0, op);
				right = equation.substr(op + 1, equation.Last());
				if (right.Contains("–") || right.Contains("..") || left.Contains("..")) {
					wxMessageBox("Invalid Format");
					return;
				}
				numLeft = wxAtof(left);
				numRight = wxAtof(right);
				calculation = numLeft - numRight;
				cTxt->Remove(cTxt->GetLastPosition(), 0);
				solution = wxString::Format(wxT("%f"), calculation);
				cTxt->AppendText(solution);
				break;
			case '*':
				left = equation.substr(0, op);
				right = equation.substr(op + 1, equation.Last());
				if (right.Contains("*") || right.Contains("..") || left.Contains("..")) {
					wxMessageBox("Invalid Format");
					return;
				}
				numLeft = wxAtof(left);
				numRight = wxAtof(right);
				calculation = numLeft * numRight;
				cTxt->Remove(cTxt->GetLastPosition(), 0);
				solution = wxString::Format(wxT("%f"), calculation);
				cTxt->AppendText(solution);
				break;
			case '/':
				left = equation.substr(0, op);
				right = equation.substr(op + 1, equation.Last());
				if (right.Contains("/") || right.Contains("..") || left.Contains("..")) {
					wxMessageBox("Invalid Format");
					return;
				}
				numLeft = wxAtof(left);
				numRight = wxAtof(right);
				if (numRight == 0) {
					wxMessageBox("Cannot Divide by Zero");
					return; 
				}
				calculation = numLeft / numRight;
				cTxt->Remove(cTxt->GetLastPosition(), 0);
				solution = wxString::Format(wxT("%f"), calculation);
				cTxt->AppendText(solution);
				break;
			case '%':
				left = equation.substr(0, op);
				right = equation.substr(op + 1, equation.Last());
				if (right.Contains("%") || right.Contains("..") || left.Contains("..")) {
					wxMessageBox("Invalid Format");
					return;
				}
				numLeft = wxAtof(left);
				numRight = wxAtof(right);
				if (numRight == 0) {
					wxMessageBox("Cannot Mod by Zero");
					return;
				}
				calculation = (int)numLeft % (int)numRight;
				cTxt->Remove(cTxt->GetLastPosition(), 0);
				solution = wxString::Format(wxT("%f"), calculation);
				cTxt->AppendText(solution);
				break;
			case '^':
				left = equation.substr(0, op);
				right = equation.substr(op + 1, equation.Last());
				if (right.Contains("^") || right.Contains("..") || left.Contains("..")) {
					wxMessageBox("Invalid Format");
					return;
				}
				numLeft = wxAtof(left);
				numRight = wxAtof(right);
				calculation = (int) pow(numLeft, numRight);
				cTxt->Remove(cTxt->GetLastPosition(), 0);
				solution = wxString::Format(wxT("%f"), calculation);
				cTxt->AppendText(solution);
				break;
			case 'S':
				left = equation.substr(0, op);
				right = equation.substr(op + 4, equation.Last());
				if (right.Contains("Sin") || right.Contains("..") || left.Contains("..")) {
					wxMessageBox("Invalid Format");
					return;
				}
				numLeft = wxAtof(left);
				numRight = wxAtof(right);
				if (numLeft == 0) {
					calculation = sin(numRight);
					cTxt->Remove(cTxt->GetLastPosition(), 0);
					solution = wxString::Format(wxT("%f"), calculation);
					cTxt->AppendText(solution);
				}
				else {
					calculation = (numLeft * sin(numRight));
					cTxt->Remove(cTxt->GetLastPosition(), 0);
					solution = wxString::Format(wxT("%f"), calculation);
					cTxt->AppendText(solution);
				}
				break;
			case 'C':
				left = equation.substr(0, op);
				right = equation.substr(op + 4, equation.Last());
				if (right.Contains("Cos") || right.Contains("..") || left.Contains("..")) {
					wxMessageBox("Invalid Format");
					return;
				}
				numLeft = wxAtof(left);
				numRight = wxAtof(right);
				if (numLeft == 0) {
					calculation = cos(numRight);
					cTxt->Remove(cTxt->GetLastPosition(), 0);
					solution = wxString::Format(wxT("%f"), calculation);
					cTxt->AppendText(solution);
				}
				else {
					calculation = (numLeft * cos(numRight));
					cTxt->Remove(cTxt->GetLastPosition(), 0);
					solution = wxString::Format(wxT("%f"), calculation);
					cTxt->AppendText(solution);
				}
				break;
			case 'T':
				left = equation.substr(0, op);
				right = equation.substr(op + 4, equation.Last());
				if (right.Contains("Tan") || right.Contains("..") || left.Contains("..")) {
					wxMessageBox("Invalid Format");
					return;
				}
				numLeft = wxAtof(left);
				numRight = wxAtof(right);
				if (numLeft == 0) {
					calculation = tan(numRight);
					cTxt->Remove(cTxt->GetLastPosition(), 0);
					solution = wxString::Format(wxT("%f"), calculation);
					cTxt->AppendText(solution);
				}
				else {
					calculation = (numLeft * tan(numRight));
					cTxt->Remove(cTxt->GetLastPosition(), 0);
					solution = wxString::Format(wxT("%f"), calculation);
					cTxt->AppendText(solution);
				}
				break;
			default:
				break;
			}
		}
	}
else {
	wxMessageBox("Input a solution First");
	}
}
