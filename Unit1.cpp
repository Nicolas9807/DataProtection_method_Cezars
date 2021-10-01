//---------------------------------------------------------------------------
#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
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
int T;
AnsiString buff=Edit1->Text;
int key=StrToInt(Edit2->Text);
        for (int i = 1;i<=buff.Length();i++)
                {
                        T = ((unsigned char)buff[i] + key);
                        if (T >= 256) T=T-255;
                        buff[ i ] = (char)T;
                }
Memo1->Lines->Add(buff);
}
catch(EConvertError &e){
ShowMessage("Заповніть поля Ключ і Текст");}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
    Memo1->Clear();
    Edit1->Clear();
    Edit2->Clear();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
try{
int T;
AnsiString buff=Edit1->Text;
int key=StrToInt(Edit2->Text);
        for (int i = 1;i<=buff.Length();i++)
                {
                        T = ((unsigned char)buff[i] - key);
                          if (T >= 256) T=T-255;
                          buff[ i ] = (char)T;
                }
Memo1->Lines->Add(buff);
}
catch(EConvertError &e){
ShowMessage("Заповніть поля Ключ і Текст");}
}
//---------------------------------------------------------------------------




