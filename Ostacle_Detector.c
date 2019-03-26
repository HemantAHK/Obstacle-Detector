#include<REG51.h>
sbit lm1 = P2^0;
sbit lm2 = P2^1;
sbit rm1 = P2^2;
sbit rm2 = P2^3;
sbit rs = P1^0;
sbit cs = P1^1;
sbit ls = P1^2;

void main()
{
	while(1)
	{
		/*FORWARD*/
		if((ls==0 && cs==0 && rs==0)||(ls==1 && cs==0 && rs==1))
		{
			lm1=1;
			lm2=0;
			rm1=1;
			rm2=0;
		}
		/*LEFT*/
		else if((ls==0 && cs==0 && rs==1)||(ls==0 && cs==1 && rs==0)||(ls==0&&cs==1&&rs==1))
		{
			lm1=0;
			lm2=0;
			rm1=1;
			rm2=0;
		}
	
		/*RIGHT*/
		else if((ls==1 && cs==0 && rs==0)||(ls==1 && cs==1 && rs==0))
		{
			lm1=1;
			lm2=0;
			rm1=0;
			rm2=0;
		}
		/*BACKWARD*/
		else if(ls==1 && cs==1 && rs==1)
		{
			lm1=0;
			lm2=1;
			rm1=0;
			rm2=1;
		}
		
	}
}