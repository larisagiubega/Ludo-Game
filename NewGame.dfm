object fGameName: TfGameName
  Left = 600
  Top = 336
  Width = 800
  Height = 600
  Caption = 'Nu te supara, frate!'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = Menu
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object GameName: TLabel
    Left = 32
    Top = 32
    Width = 728
    Height = 106
    Caption = 'Nu te supara, frate!  '
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -64
    Font.Name = 'Segoe Script'
    Font.Style = [fsBold, fsItalic]
    ParentFont = False
    Transparent = True
  end
  object Menu: TMainMenu
    Left = 8
    object New: TMenuItem
      Caption = '&New'
      OnClick = NewClick
    end
    object ExitGame: TMenuItem
      Caption = '&Exit game'
      OnClick = ExitGameClick
    end
  end
end
