//---------------------------------------------------------------------------

#ifndef AppMainH
#define AppMainH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <Graphics.hpp>
#include "Pion.h"
//---------------------------------------------------------------------------
class TfGame : public TForm
{
__published:	// IDE-managed Components
        TImage *GameBoard;
        TImage *PionG4;
        TImage *PionR2;
        TImage *PionR3;
        TImage *PionR4;
        TImage *PionR1;
        TImage *PionG3;
        TImage *PionG1;
        TImage *PionG2;
        TImage *PionA1;
        TImage *PionA3;
        TImage *PionA2;
        TImage *PionA4;
        TImage *PionV1;
        TImage *PionV2;
        TImage *PionV3;
        TImage *PionV4;
        TImage *Zar1;
        TImage *Zar2;
        TImage *Zar3;
        TImage *Zar4;
        TImage *Zar5;
        TImage *Zar6;
        TButton *btnZar;
        void __fastcall ExitGameClick(TObject *Sender);
        void __fastcall NewClick(TObject *Sender);
        void __fastcall btnZarClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
Pion *joc;
        __fastcall TfGame(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfGame *fGame;
//---------------------------------------------------------------------------
#endif
