//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
void Main(){

}

__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Shape1MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
	if(Shape1->Brush->Color == clWhite)
	{
		if(Label1->Font->Color == clRed){
			Shape1->Brush->Color = clRed;
			Label1->Caption = "VERT";
			Label1->Font->Color = clGreen;
		}
		else if(Label1->Font->Color == clGreen){
			Shape1->Brush->Color = clGreen;
			Label1->Caption = "ROUGE";
			Label1->Font->Color = clRed;
		}
        TestGagnant();
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Shape2MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
	if(Shape2->Brush->Color == clWhite)
	{
		if(Label1->Font->Color == clRed){
			Shape2->Brush->Color = clRed;
			Label1->Caption = "VERT";
			Label1->Font->Color = clGreen;
		}
		else if(Label1->Font->Color == clGreen){
			Shape2->Brush->Color = clGreen;
			Label1->Caption = "ROUGE";
			Label1->Font->Color = clRed;
		}
		TestGagnant();
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Shape3MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
	if(Shape3->Brush->Color == clWhite)
	{
		if(Label1->Font->Color == clRed){
			Shape3->Brush->Color = clRed;
			Label1->Caption = "VERT";
			Label1->Font->Color = clGreen;
		}
		else if(Label1->Font->Color == clGreen){
			Shape3->Brush->Color = clGreen;
			Label1->Caption = "ROUGE";
			Label1->Font->Color = clRed;
		}
		TestGagnant();
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Shape4MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
	if(Shape4->Brush->Color == clWhite)
	{
		if(Label1->Font->Color == clRed){
			Shape4->Brush->Color = clRed;
			Label1->Caption = "VERT";
			Label1->Font->Color = clGreen;
		}
		else if(Label1->Font->Color == clGreen){
			Shape4->Brush->Color = clGreen;
			Label1->Caption = "ROUGE";
			Label1->Font->Color = clRed;
		}
		TestGagnant();
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Shape5MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
	if(Shape5->Brush->Color == clWhite)
	{
		if(Label1->Font->Color == clRed){
			Shape5->Brush->Color = clRed;
			Label1->Caption = "VERT";
			Label1->Font->Color = clGreen;
		}
		else if(Label1->Font->Color == clGreen){
			Shape5->Brush->Color = clGreen;
			Label1->Caption = "ROUGE";
			Label1->Font->Color = clRed;
		}
		TestGagnant();
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Shape6MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
	if(Shape6->Brush->Color == clWhite)
	{
		if(Label1->Font->Color == clRed){
			Shape6->Brush->Color = clRed;
			Label1->Caption = "VERT";
			Label1->Font->Color = clGreen;
		}
		else if(Label1->Font->Color == clGreen){
			Shape6->Brush->Color = clGreen;
			Label1->Caption = "ROUGE";
			Label1->Font->Color = clRed;
		}
		TestGagnant();
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Shape7MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
	if(Shape7->Brush->Color == clWhite)
	{
		if(Label1->Font->Color == clRed){
			Shape7->Brush->Color = clRed;
			Label1->Caption = "VERT";
			Label1->Font->Color = clGreen;
		}
		else if(Label1->Font->Color == clGreen){
			Shape7->Brush->Color = clGreen;
			Label1->Caption = "ROUGE";
			Label1->Font->Color = clRed;
		}
		TestGagnant();
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Shape8MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
	if(Shape8->Brush->Color == clWhite)
	{
		if(Label1->Font->Color == clRed){
			Shape8->Brush->Color = clRed;
			Label1->Caption = "VERT";
			Label1->Font->Color = clGreen;
		}
		else if(Label1->Font->Color == clGreen){
			Shape8->Brush->Color = clGreen;
			Label1->Caption = "ROUGE";
			Label1->Font->Color = clRed;
		}
		TestGagnant();
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Shape9MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
	if(Shape9->Brush->Color == clWhite)
	{
		if(Label1->Font->Color == clRed){
			Shape9->Brush->Color = clRed;
			Label1->Caption = "VERT";
			Label1->Font->Color = clGreen;
		}
		else if(Label1->Font->Color == clGreen){
			Shape9->Brush->Color = clGreen;
			Label1->Caption = "ROUGE";
			Label1->Font->Color = clRed;
		}
        TestGagnant();
	}
}
//---------------------------------------------------------------------------
void TForm1::TestGagnant(){
	TColor Couleur = clRed;
	TCaption Gagnant = "ROUGE WIN";
	if(Shape1->Brush->Color == Couleur && Shape5->Brush->Color == Couleur && Shape9->Brush->Color == Couleur){
		Shape1->Brush->Style = bsFDiagonal;
		Shape5->Brush->Style = bsFDiagonal;
		Shape9->Brush->Style = bsFDiagonal;
		Label1->Caption = Gagnant;
		Label1->Font->Color = clWebGold;
	}
	else if(Shape3->Brush->Color == Couleur && Shape5->Brush->Color == Couleur && Shape7->Brush->Color == Couleur){
		Shape3->Brush->Style = bsBDiagonal;
		Shape5->Brush->Style = bsBDiagonal;
		Shape7->Brush->Style = bsBDiagonal;
		Label1->Caption = Gagnant;
		Label1->Font->Color = clWebGold;
	}
	else if(Shape1->Brush->Color == Couleur && Shape2->Brush->Color == Couleur && Shape3->Brush->Color == Couleur){
		Shape1->Brush->Style = bsHorizontal;
		Shape2->Brush->Style = bsHorizontal;
		Shape3->Brush->Style = bsHorizontal;
		Label1->Caption = Gagnant;
		Label1->Font->Color = clWebGold;
	}
	else if(Shape4->Brush->Color == Couleur && Shape5->Brush->Color == Couleur && Shape6->Brush->Color == Couleur){
		Shape4->Brush->Style = bsHorizontal;
		Shape5->Brush->Style = bsHorizontal;
		Shape6->Brush->Style = bsHorizontal;
		Label1->Caption = Gagnant;
		Label1->Font->Color = clWebGold;
	}
	else if(Shape7->Brush->Color == Couleur && Shape8->Brush->Color == Couleur && Shape9->Brush->Color == Couleur){
		Shape7->Brush->Style = bsHorizontal;
		Shape8->Brush->Style = bsHorizontal;
		Shape9->Brush->Style = bsHorizontal;
		Label1->Caption = Gagnant;
		Label1->Font->Color = clWebGold;
	}
	else if(Shape1->Brush->Color == Couleur && Shape4->Brush->Color == Couleur && Shape7->Brush->Color == Couleur){
		Shape1->Brush->Style = bsVertical;
		Shape4->Brush->Style = bsVertical;
		Shape7->Brush->Style = bsVertical;
		Label1->Caption = Gagnant;
		Label1->Font->Color = clWebGold;
	}
	else if(Shape2->Brush->Color == Couleur && Shape5->Brush->Color == Couleur && Shape8->Brush->Color == Couleur){
		Shape2->Brush->Style = bsVertical;
		Shape5->Brush->Style = bsVertical;
		Shape8->Brush->Style = bsVertical;
		Label1->Caption = Gagnant;
		Label1->Font->Color = clWebGold;
	}
	else if(Shape3->Brush->Color == Couleur && Shape6->Brush->Color == Couleur && Shape9->Brush->Color == Couleur){
		Shape3->Brush->Style = bsVertical;
		Shape6->Brush->Style = bsVertical;
		Shape9->Brush->Style = bsVertical;
		Label1->Caption = Gagnant;
		Label1->Font->Color = clWebGold;
	}
	else{
		Couleur = clGreen;
		Gagnant = "VERT WIN";
		if(Shape1->Brush->Color == Couleur && Shape5->Brush->Color == Couleur && Shape9->Brush->Color == Couleur){
			Shape1->Brush->Style = bsFDiagonal;
			Shape5->Brush->Style = bsFDiagonal;
			Shape9->Brush->Style = bsFDiagonal;
			Label1->Caption = Gagnant;
			Label1->Font->Color = clWebGold;
		}
		else if(Shape3->Brush->Color == Couleur && Shape5->Brush->Color == Couleur && Shape7->Brush->Color == Couleur){
			Shape3->Brush->Style = bsBDiagonal;
			Shape5->Brush->Style = bsBDiagonal;
			Shape7->Brush->Style = bsBDiagonal;
			Label1->Caption = Gagnant;
			Label1->Font->Color = clWebGold;
		}
		else if(Shape1->Brush->Color == Couleur && Shape2->Brush->Color == Couleur && Shape3->Brush->Color == Couleur){
			Shape1->Brush->Style = bsHorizontal;
			Shape2->Brush->Style = bsHorizontal;
			Shape3->Brush->Style = bsHorizontal;
			Label1->Caption = Gagnant;
			Label1->Font->Color = clWebGold;
		}
		else if(Shape4->Brush->Color == Couleur && Shape5->Brush->Color == Couleur && Shape6->Brush->Color == Couleur){
			Shape4->Brush->Style = bsHorizontal;
			Shape5->Brush->Style = bsHorizontal;
			Shape6->Brush->Style = bsHorizontal;
			Label1->Caption = Gagnant;
			Label1->Font->Color = clWebGold;
		}
		else if(Shape7->Brush->Color == Couleur && Shape8->Brush->Color == Couleur && Shape9->Brush->Color == Couleur){
			Shape7->Brush->Style = bsHorizontal;
			Shape8->Brush->Style = bsHorizontal;
			Shape9->Brush->Style = bsHorizontal;
			Label1->Caption = Gagnant;
			Label1->Font->Color = clWebGold;
		}
		else if(Shape1->Brush->Color == Couleur && Shape4->Brush->Color == Couleur && Shape7->Brush->Color == Couleur){
			Shape1->Brush->Style = bsVertical;
			Shape4->Brush->Style = bsVertical;
			Shape7->Brush->Style = bsVertical;
			Label1->Caption = Gagnant;
			Label1->Font->Color = clWebGold;
		}
		else if(Shape2->Brush->Color == Couleur && Shape5->Brush->Color == Couleur && Shape8->Brush->Color == Couleur){
			Shape2->Brush->Style = bsVertical;
			Shape5->Brush->Style = bsVertical;
			Shape8->Brush->Style = bsVertical;
			Label1->Caption = Gagnant;
			Label1->Font->Color = clWebGold;
		}
		else if(Shape3->Brush->Color == Couleur && Shape6->Brush->Color == Couleur && Shape9->Brush->Color == Couleur){
			Shape3->Brush->Style = bsVertical;
			Shape6->Brush->Style = bsVertical;
			Shape9->Brush->Style = bsVertical;
			Label1->Caption = Gagnant;
			Label1->Font->Color = clWebGold;
		}
	}
}
