
#ifndef PionH
#define PionH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <Graphics.hpp>
#include "Pozitii.h"


class Pion: public Pozitii
{ TImage *im;
 int culoare;
 Pozitii p[4];

public:

 void PozOriginala();
 void AfisareZar(TImage *Zar1, TImage *Zar2, TImage *Zar3, TImage *Zar4, TImage *Zar5, TImage *Zar6);
 
};

#endif
