/*void shoot();
void characterjump();
void characterrun();

/*int T=1;
char run[12][30]={"run\\2.bmp","run\\3.bmp","run\\4.bmp","run\\5.bmp","run\\6.bmp","run\\7.bmp","run\\8.bmp","run\\9.bmp","run\\10.bmp","run\\11.bmp","run\\12.bmp","run\\13.bmp"};
char playerStand[50]="shoot\\2.bmp";
int charX=160;
int charY=160;
int charIndex=0;
bool standPosition=true;
int standcount=0;
int T1=0;
char reverseRun[12][30]={"run2\\2.bmp","run2\\3.bmp","run2\\4.bmp","run2\\5.bmp","run2\\6.bmp","run2\\7.bmp","run2\\8.bmp","run2\\9.bmp","run2\\10.bmp","run2\\11.bmp","run2\\12.bmp","run2\\13.bmp"};
char reverseStand[50]="shoot\\3.bmp";
bool reversePosition=true;
//////////////////////////////////////////////////////////////
int w=0;
int h=0;
//char charShoot[10][30]={"shoot\\1.bmp","shoot\\2.bmp","shoot\\4.bmp"};
/////////////////////////////////////////////////////////////////////////////

char charJump[5][30]={"jump\\10.bmp","jump\\6.bmp"};
char reverseJump[5][30]={"jump2\\10.bmp","jump2\\6.bmp"};
bool jump=false;
bool jumpUp=false;
int jumpIndex=0;
bool revJumpUp=false;
///////////////////////////////////////////////////////
int sx[25]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int sy[25]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
//int eyf[25]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
//int e3=0;
int e1;
int temp;
int e2;






void characterShoot(int eyf[],int e3,int charX,char charShoot[2]){


	for(e1=0; e1<25; e1++){
			if(eyf[e1]==0){                                     //shoot..............
			  sy[e1]=233;
			}

			if(eyf[e1]!=sx[e1]){
			   iShowBMP2(sx[e1]+charX+100,sy[e1],charShoot[2],0);
			  
			}
				
		}

  

}


void shoot(int eyf[]){
	for(e2=0; e2<25; e2++){
	  sx[e2]+=eyf[e2]/50;
	  if(sx[e2]>1200){
	     sx[e2]=0;
		 eyf[e2]=0;
	  
	  }
	}

}*/





