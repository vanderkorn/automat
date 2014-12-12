object Form1: TForm1
  Left = 0
  Top = 0
  Caption = #1060#1088#1072#1082#1090#1072#1083' / '#1050#1074#1072#1090#1072#1088#1085#1080#1086#1085#1099
  ClientHeight = 317
  ClientWidth = 513
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object ImageFract: TImage
    Left = 8
    Top = 9
    Width = 300
    Height = 300
  end
  object ButtonFract: TButton
    Left = 320
    Top = 276
    Width = 185
    Height = 33
    Caption = #1053#1072#1088#1080#1089#1086#1074#1072#1090#1100
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
  end
  object MaxIter: TEdit
    Left = 320
    Top = 239
    Width = 153
    Height = 31
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    Text = '0'
  end
  object UpDown1: TUpDown
    Left = 473
    Top = 239
    Width = 32
    Height = 31
    Associate = MaxIter
    Max = 255
    TabOrder = 2
  end
end
