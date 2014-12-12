//$$---- Form CPP ----
//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "life.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
N=300;
M=300;
Life = new bool *[N];
Life2 = new bool *[N];
for (int k=0;k<N;k++)
{
Life[k] = new bool[M];
Life2[k] = new bool[M];
}
ImageLife->Height=N;
ImageLife->Width=M;
isStop=false;
}
//---------------------------------------------------------------------------
void  TForm1::DrawLife()
{
Graphics::TBitmap* after=new Graphics::TBitmap();
after->Height=N;
after->Width=M;
 	for (int i=0;i<N;i++)
	{
		for (int j=0;j<M;j++)
		{
		   int a=(int)Life[i][j];

		   after->Canvas->Pixels[j][i]= RGB(255*a,255*a,255*a);
		}
	}
ImageLife->Picture->Bitmap=after;
ImageLife->Refresh();
};
//---------------------------------------------------------------------------
bool  TForm1::RulesLife(int i,int j)
{
   int di1=fmod((i-1)+M,M);
   int diM=fmod(i+1,M);
   int dj1=fmod((j-1)+N,N);
   int djN=fmod(j+1,N);
   int sum=0;
   sum+=Life[di1][dj1]+Life[i][dj1]+Life[diM][dj1]
   +Life[di1][djN]+Life[i][djN]+Life[diM][djN]
   + Life[di1][j]+Life[diM][j];
   /*int sp1= fmod(Life[i][j]+1,2) ;
   if ((Life[i][dj1]==sp1)||(Life[i][djN]==sp1)||(Life[di1][j]==sp1)||(Life[diM][j]==sp1))
   {
		return sp1;
   }
   else
   {
		return Life[i][j];
   }           */
	int chislo=fmod(sum+Life[i][j],2.0);
	return (bool)chislo;     
  /* if (sum==3)
   {
	   return true;
   }
   else
   {
		if (sum==2)
		{
			 return Life[i][j];
		}
		else
		{
			  return false;
		}
   }     */

};
//---------------------------------------------------------------------------
void __fastcall TForm1::ButtonGenClick(TObject *Sender)
{
	for (int i=0;i<N;i++)
	{
		for (int j=0;j<M;j++)
		{
			Life[i][j]=1;

		}
	}
	for (int i=10;i<N-10;i++)
	{
		for (int j=10;j<M-10;j++)
		{
			Life[i][j]=(bool)0;

		}
	}
		for (int i=100;i<N-100;i++)
	{
		for (int j=100;j<M-100;j++)
		{
			Life[i][j]=(bool)1;

		}
	}
   DrawLife();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ButtonGoClick(TObject *Sender)
{


Timer1->Enabled=true;
}
//---------------------------------------------------------------------------
  void  TForm1::GoLife()
 {

     for (int i=0;i<N;i++)
			{
				for (int j=0;j<M;j++)
				{
				Life2[i][j]=RulesLife(i,j);
				}
			}
			for (int i=0;i<N;i++)
			{
				for (int j=0;j<M;j++)
				{
				Life[i][j]=Life2[i][j];
				}
			}
		DrawLife();
 };
//---------------------------------------------------------------------------
void __fastcall TForm1::ButtonStopClick(TObject *Sender)
{
	 isStop=true;
	 Timer1->Enabled=false;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
	   //	ButtonStop->Enabled=false;
			GoLife();
	  //	ButtonStop->Enabled=true;
}
//---------------------------------------------------------------------------

