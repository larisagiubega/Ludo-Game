//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "NewGame.h"
#include "AppMain.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfGameName *fGameName;
//---------------------------------------------------------------------------
__fastcall TfGameName::TfGameName(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfGameName::ExitGameClick(TObject *Sender)
{
exit(0);        
}
//---------------------------------------------------------------------------
void __fastcall TfGameName::NewClick(TObject *Sender)
{
fGameName->Hide();
fGame->Show();
}
//---------------------------------------------------------------------------
