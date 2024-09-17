#include "App.h"

wxIMPLEMENT_APP(App);

bool App::OnInit() {
	frame = new Calc();
	frame->Show();
	return true; 
}


