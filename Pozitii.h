//---------------------------------------------------------------------------

#ifndef PozitiiH
#define PozitiiH

#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------

class Pozitii {
  int dx;
  int dy;

  public:
  void MutaPion(int dx, int dy, TImage *im);
};
#endif
