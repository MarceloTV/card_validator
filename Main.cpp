//---------------------------------------------------------------------------

#include <vcl.h>
#include <string>
#include "luhn.hpp"
#pragma hdrstop

#include "Main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	try{
		wchar_t* txt = Edit1->Text.t_str();
		std::wstring ws(txt);
		std::string str(ws.begin(), ws.end());
		bool is_valid = card_validator(str);
		if(is_valid){
			ShowMessage("Valid credit card!");
		}else{
			ShowMessage("Invalid credit card!");
		}
	}catch(...){
		ShowMessage("Invalid credit card!");
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Enter(TObject *Sender, WORD &Key, TShiftState Shift)
{
	if(Key == 13){
		try{
			wchar_t* txt = Edit1->Text.t_str();
			std::wstring ws(txt);
			std::string str(ws.begin(), ws.end());
			bool is_valid = card_validator(str);
			if(is_valid){
				ShowMessage("Valid credit card!");
			}else{
				ShowMessage("Invalid credit card!");
			}
		}catch(...){
			ShowMessage("Invalid credit card!");
		}
	}
}
//---------------------------------------------------------------------------

