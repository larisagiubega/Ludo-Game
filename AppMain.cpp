//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "AppMain.h"
#include "NewGame.h"
#include "Pion.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfGame *fGame;
//---------------------------------------------------------------------------
__fastcall TfGame::TfGame(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfGame::ExitGameClick(TObject *Sender)
{
exit(0);
}
//---------------------------------------------------------------------------


void __fastcall TfGame::NewClick(TObject *Sender)
{
btnZar->Show();
Zar1->Hide();
Zar2->Hide();
Zar3->Hide();
Zar4->Hide();
Zar5->Hide();
Zar6->Hide();
GameBoard->Show();
PionV1->Show();
PionV2->Show();
PionV3->Show();
PionV4->Show();
PionA1->Show();
PionA2->Show();
PionA3->Show();
PionA4->Show();
PionG1->Show();
PionG2->Show();
PionG3->Show();
PionG4->Show();
PionR1->Show();
PionR2->Show();
PionR3->Show();
PionR4->Show();

}

//---------------------------------------------------------------------------

void __fastcall TfGame::btnZarClick(TObject *Sender)
{
joc=new Pion();
joc->AfisareZar(Zar1, Zar2, Zar3, Zar4, Zar5, Zar6);
}
//---------------------------------------------------------------------------






