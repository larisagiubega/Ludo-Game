//---------------------------------------------------------------------------


#pragma hdrstop

#include "Pozitii.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)

void Pozitii::MutaPion(int dx, int dy, TImage *im)
  {
  im->Top=dx;
  im->Left=dy;
  }
