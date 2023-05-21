object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Card Validator'
  ClientHeight = 121
  ClientWidth = 519
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Label1: TLabel
    Left = 80
    Top = 24
    Width = 360
    Height = 22
    Caption = 'Type the credit card number to check'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Consolas'
    Font.Style = []
    ParentFont = False
  end
  object Edit1: TEdit
    Left = 64
    Top = 64
    Width = 241
    Height = 27
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Consolas'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    TextHint = 'Ex: 2222333355556666'
    OnKeyUp = Enter
  end
  object Button1: TButton
    Left = 379
    Top = 65
    Width = 75
    Height = 27
    Caption = 'Check'
    TabOrder = 1
    OnClick = Button1Click
  end
end
