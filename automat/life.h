//$$---- Form HDR ----
//---------------------------------------------------------------------------

#ifndef lifeH
#define lifeH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
 #include <math.h>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TImage *ImageLife;
	TButton *ButtonGen;
	TButton *ButtonGo;
	TButton *ButtonStop;
	TTimer *Timer1;
	void __fastcall ButtonGenClick(TObject *Sender);
	void __fastcall ButtonGoClick(TObject *Sender);
	void __fastcall ButtonStopClick(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
private:	// User declarations

bool** Life;
bool** Life2;
int N;
int M;
bool isStop;
public:		// User declarations
  __fastcall TForm1(TComponent* Owner);
    bool	RulesLife(int i,int j);
   void	DrawLife();
   void	GoLife();
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
