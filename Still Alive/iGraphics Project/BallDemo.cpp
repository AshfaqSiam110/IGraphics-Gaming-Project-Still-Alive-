
#include "AllHeader.h"
# define JUMPLIMIT 150
#define TREESNUMBER 1
#include "siam.h"

char str[100], str2[100];

char *p;
int charZ=160;

/////////////////////////////////////////////////////////////////////////////////
int T=1;
char run[12][30]={"run\\2.bmp","run\\3.bmp","run\\4.bmp","run\\5.bmp","run\\6.bmp","run\\7.bmp","run\\8.bmp","run\\9.bmp","run\\10.bmp","run\\11.bmp","run\\12.bmp","run\\13.bmp"};
char playerStand[5][20]={"shoot\\2.bmp","shoot\\6.bmp"};
int charX=160;
int charY=160;
int charIndex=0;
bool standPosition=true;
int standcount=0;
int T1=0;
char reverseRun[12][30]={"run2\\2.bmp","run2\\3.bmp","run2\\4.bmp","run2\\5.bmp","run2\\6.bmp","run2\\7.bmp","run2\\8.bmp","run2\\9.bmp","run2\\10.bmp","run2\\11.bmp","run2\\12.bmp","run2\\13.bmp"};
char reverseStand[5][20]={"shoot\\3.bmp","shoot\\7.bmp"};
bool reversePosition=true;
//////////////////////////////////////////////////////////////
int w=0;
int h=0;
char charShoot[10][30]={"shoot\\1.bmp","shoot\\2.bmp","shoot\\4.bmp","shoot\\5.bmp"};
char crouch[50]="crouch\\1.bmp";

///////////////////////////////////kanzud start /////////////////////////
/*int T2=1;
char enemyrun[12][30]={"enemyrun\\2.bmp","enemyrun\\3.bmp","enemyrun\\4.bmp","enemyrun\\5.bmp","enemyrun\\6.bmp"};
char enemyplayerStand[50]="enemyrun\\1.bmp";
int enemyX=1050;
int enemyY=160;
int enemyIndex=0;
bool enemystandPosition=true;
int enemystandcount=0;
int T3=0;
char enemyreverseRun[12][30]={"enemyrun2\\2.bmp","enemyrun2\\3.bmp","enemyrun2\\4.bmp","enemyrun2\\5.bmp","enemyrun2\\6.bmp"};
char enemyreverseStand[50]="enemyrun2\\1.bmp";
bool enemyreversePosition=true;

*/

////////////////////entername/////////////////////////



////////////////////////////////////for random enemy/////////////////////////





char randomEnemyTreeArray[12][20] = {"enemyrun3\\2.bmp","enemyrun3\\3.bmp","enemyrun3\\4.bmp","enemyrun3\\5.bmp","enemyrun3\\6.bmp"};

struct randomtree {


	int tree_x;
	int tree_y;
	int treeIndex;
	bool treeShow;

	};

	randomtree RandomEnemyTree[TREESNUMBER];


	void randomEnemyTreesMovement()
{


	for (int i = 0; i < TREESNUMBER; i++)
	{

		if(RandomEnemyTree[i].treeShow)
		{
		iShowBMP2(RandomEnemyTree[i].tree_x,RandomEnemyTree[i].tree_y,randomEnemyTreeArray[RandomEnemyTree[i].treeIndex],255);

		}

	}


}





//////////////////////////////////////////kanzud finish//////////////////////////


bool gotoLeft=false;
bool gotoRight=false;

//////////////////////////////////////////////////////////////////
char charJump[5][30]={"jump\\10.bmp","jump\\6.bmp"};
char reverseJump[5][30]={"jump2\\10.bmp","jump2\\6.bmp"};
bool jump=false;
bool jumpUp=false;
int jumpIndex=0;
bool revJumpUp=false;




////////////////////////////////////////////////////////////////////////////////////
int sound;
int l=0,n=0,x=0;
int i=-1,k=-1;
int b=0,c=0,d=0,e=0,f=0;
//////////////////////////////////////////////////////////////////////////////////////////////


int index=0;
int v=0; // l for loading page v for music on off
bool musicOn = true; // just testing

int stat=-1;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
void call(){
	if(n==1 && i<8)
		i = i+1;

}

void load(){
	l+=100;
}
/////////////////////////////////////////////
int sx[25]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int sy[25]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int eyf[25]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int e3=0;
int e1;
int temp=0;
int e2;


//////////////////////////////////////////////////////////////////

/*void siam(){
			for(int i=2; i<500; i++){
	               if(i>w){
				  iShowBMP2(charX+100+h,charY+75,charShoot[i],0);
				   }
				
			
			}
		
		}*/

/*void collision(){
    if(charX+100+h)

}*/









void iDraw()
{


	iClear();
	Sound(index);
	picture(index);
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////

       /*if(index==1){
		 drawRectangle();

	   }*/




	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	if(stat==1){
	 namePage();
	}
	else if(stat==2){

		iShowBMP(0,0,gamePage[0]);

		//void siam();
		

		/*if(w==1){
		    iShowBMP2(charX+100+h,charY+75,charShoot[2],0);
					
		}*/

		/*if(h==1){
			h=0;
		  iShowBMP2(charX,charY,crouch,0);
		 
		}*/

		for(e1=0; e1<25; e1++){
			if(eyf[e1]==0){
			  sy[e1]=240;
			}
			//printf("%d\n\n",sx[e1]);

			if(eyf[e1]!=sx[e1]){
			   iShowBMP2(sx[e1]+charX+100,sy[e1],charShoot[3],0);
			  
			}
				
		}

		//characterShoot(eyf,e3,charX,charShoot);






		if(jump){
			if(jumpUp && T==1 && T1==0){
			  iShowBMP2(charX,charY+jumpIndex,charJump[0],0);

			}
			else if(T==1 && T1==0) {
			  iShowBMP2(charX,charY+jumpIndex,charJump[1],0);

			}
		}
		else{

		      if(!standPosition && reversePosition){

			          iShowBMP2(charX,charY,run[charIndex],0);
			          standcount++;
			          if(standcount>=10){
				            standcount=0;
			                charIndex=0;
			                standPosition=true;

			                }
		      }


		      else if(T==1 && T1==0 && h!=1 ){

		              iShowBMP2(charX,charY,playerStand[0],0);

	                  }
			  else if(h==1 && T==1 && T1==0 ){
			          iShowBMP2(charX,charY,playerStand[1],0);
					  h=0;
					  
			  
			          }
			  

		      }


		if(jump){
			   if(revJumpUp && T==0 && T1==1){
			          iShowBMP2(charX,charY+jumpIndex,reverseJump[0],0);

			          }
			   else if(T==0 && T1==1){
			          iShowBMP2(charX,charY+jumpIndex,reverseJump[1],0);

			          }


		}
		else{
		       if(!reversePosition && standPosition){
			          iShowBMP2(charX,charY,reverseRun[charIndex],0);
			          standcount++;
			       if(standcount>=10){
				        standcount=0;
			            charIndex=0;
			            reversePosition=true;

			            }
	            }


		    else if(T1==1 && T==0 && h!=1){
			      iShowBMP2(charX,charY,reverseStand[0],0);
		    }
			else if(h==1 && T1==1 && T==0){
			        iShowBMP2(charX,charY,reverseStand[1],0);
					h=0;
			
			}


	   }
////////////////////////////////////////////kanzud start/////////////////////////////////////

	/*	if(!enemystandPosition && enemyreversePosition){

			 iShowBMP2(enemyX,enemyY,enemyrun[enemyIndex],255);
			 enemystandcount++;
			 if(enemystandcount>=10){
				 enemystandcount=0;
			   enemyIndex=0;
			   enemystandPosition=true;

			   }
		 }



else if(T2==1 && T3==0){

		iShowBMP2(enemyX,enemyY,enemyplayerStand,255);

	    }


if(!enemyreversePosition && enemystandPosition){
			 iShowBMP2(enemyX,enemyY,enemyreverseRun[enemyIndex],255);
			 enemystandcount++;
			 if(enemystandcount>=10){
				 enemystandcount=0;
			   enemyIndex=0;
			   enemyreversePosition=true;

			    }
	    }


		else if(T3==1 && T2==0){
			iShowBMP2(enemyX,enemyY,enemyreverseStand,255);
		}



		*/


		randomEnemyTreesMovement();

///////////////////////////////////////////////////////////////////kanzud end////////////////////////////////////////////////

}

	///////////////////////////////////////////////////////////////////////////////////////////////////////
	if(index==0){
		  Load(l);
		  if(l == 800) index = 1;
	}

	if(index == 1){

		Button(b,c,d,e,f);

	}


	if(index==2 )
	{
		if(k==1){
			n=1;                      //////////game page/////////
		}
		story(i,x);
	}

	if(index == 3){
            
	}

	if(index == 4){
		showScore();

	}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////////////////////

}


void iMouseMove(int mx, int my)
{
	//place your codes here
}


void iMouse(int button, int state, int mx, int my)
{

	//LEFT MOUSE:
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
	    if((mx>= 80 && mx<= 240) && (my>= 105 && my<= 145) && (index == 1))
		{
			exit(0); //EXIT
		}

		else if((mx>= 80 && mx<= 240) && (my>= 205 && my<= 245) && (index == 1))
		{

			index = 5; //CREDITS
			i = -1;
			n = 1;

		}
		else if((mx>= 80 && mx<= 240) && (my>= 305 && my<= 345)&& (index == 1) )
		{

			index = 4; //RECORDS
                         files();

		}
		else  if((mx>= 80 && mx<= 240) && (my>= 405 && my<= 445)&& (index == 1) )
		{

			index = 3; //CONTROL

		}
		else if((mx>= 80 && mx<= 240) && (my>= 505 && my<= 545)&& (index == 1) )
		{

			i = -1;
			index = 2; //START

		}



		if(mx >= 50 && mx <= 300 && my >= 250 && my <= 280 && stat == -1)
		{
			stat = 0;
		}

		/*if(mx>=500 && mx<=700 && my>=300 && my<=340){
		    flag=1;
		}
		else{
		  flag=0;
		}*/



	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{

	}
}



void iPassiveMouse(int mx,int my){

   if(index==1){
	   if((mx>= 80 && mx<= 230) && (my>= 500 && my<= 550)){
		    b=5;
	   }
	   else{
			b=0;

	   }

	   if((mx>= 80 && mx<= 230) && (my>= 400 && my<= 450)){
		   c=5;
	   }
	   else{
		   c=0;
	   }

	   if((mx>= 80 && mx<= 230) && (my>= 300 && my<= 350)){
		   d=5;
	   }
	   else{
		   d=0;
	   }
	   if((mx>= 80 && mx<= 230) && (my>= 200 && my<= 250)){
		   e=5;
	   }
	   else{
		   e=0;

	   }
	   if((mx>= 80 && mx<= 230) && (my>= 100 && my<= 150)){
		   f=5;
	   }
	   else{
		   f=0;
	   }

   }


}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void iKeyboard(unsigned char key)
{
	if(key==' '){
		if(!jump){
		  jump=true;
		  jumpUp=true;
		  revJumpUp=true;
		  charX+=10;
		}

	}

	if(key=='\r'){
	  stat=2;
	}

	/*if(flag==1){
	  input[len]=key;
	  len++;
	}*/

	if(key != '\b'){

		takeName(key);
	}


	else {

		if (IndexNumber <= 0) IndexNumber = 0;

		else IndexNumber--;

		enternamestr[IndexNumber] = '\0';


}

	if(key=='f'){
		//w=1;
		eyf[e3]=780;
		e3++;
		if(e3>24) e3=0;  
	
	}

	if(key=='c'){
	   h=1;
	
	}



}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////




void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_END)
	{
		exit(0);
	}
	//place your codes for other keys here

	if(key == GLUT_KEY_F12)
	{
		if(index == 1){

		PlaySound(0,0,0);

		}
	}

	if(key == GLUT_KEY_F11)
	{
		if(index == 1){


		PlaySound("music\\1.WAV",NULL, SND_LOOP | SND_ASYNC);


		}
	}

	if(key == GLUT_KEY_HOME){

		//n=0;
		index = 1;
		PlaySound("music\\1.WAV",NULL, SND_LOOP | SND_ASYNC);
		x=0;

	}



	if(key == GLUT_KEY_F1){

		k = 1;
		x=1;
		i = -1;
		PlaySound("storySound\\s.wav",NULL,SND_ASYNC);
		sound =1;
	}


	if (key == GLUT_KEY_F2 ){


		stat=1;
	}
	if(key== GLUT_KEY_RIGHT){
		T=1;
		T1=0;

		if(charX>=1180) charX=1180;
		else charX+=10;



		charIndex++;

		if(charIndex>=12)
		{
		   charIndex=0;

		}

		standPosition=false;
		//gotoRight=true;



	}

	if(key== GLUT_KEY_LEFT){
		T1=1;
		T=0;
		if(charX<=0) charX=0;
		else charX-=10;



		charIndex++;

		if(charIndex>=12)
		{
		   charIndex=0;

		}
		reversePosition=false;
		//gotoLeft=true;


	}
///////////////////////////////////////////////////kanzud start///////////////////////////////////////////////

/*
	if(key== GLUT_KEY_UP){
		T2=1;
		T3=0;

		if(enemyX<=540) enemyX=540;
		else enemyX-=10;



		enemyIndex++;

		if(enemyIndex>=5)
		{
		   enemyIndex=0;

		}

		enemystandPosition=false;
		//gotoRight=true;



	}

	if(key== GLUT_KEY_DOWN){
		T3=1;
		T2=0;
		if(enemyX>=1050) enemyX=1050;
		else enemyX+=10;



		enemyIndex++;

		if(enemyIndex>=5)
		{
		   enemyIndex=0;

		}
		enemyreversePosition=false;
		//gotoLeft=true;


	}
	*/




	//////////////////////////////////////////////kanzud finish//////////////////////////////////////////////





}
void change(){
	if(jump){
		   if(jumpUp){
		        jumpIndex+=5;

		        if(jumpIndex>=JUMPLIMIT){
		           jumpUp=false;
		           }
	      }
		 else{
		      jumpIndex-=5;
		      if(jumpIndex<0){

		         jump=false;
		         jumpIndex=0;
		      }

		 }





////////////////////////////////////////////////
		 if(revJumpUp){
		        jumpIndex+=5;

		        if(jumpIndex>=JUMPLIMIT){
		           revJumpUp=false;
		           }
	      }
		 else{
		      jumpIndex-=5;
		      if(jumpIndex<0){

		         jump=false;
		         jumpIndex=0;
		      }

		 }


	}

	//////////////////////////////////////////////////////////for random enemy//////////////////////////////////////////////////////////////////////


	for(int i=0;i<TREESNUMBER;i++)
	{

		RandomEnemyTree[i].tree_x -= 10;
		printf("%d",RandomEnemyTree[i].tree_x);
		if(RandomEnemyTree[i].tree_x <= 0)
		{

		RandomEnemyTree[i].tree_x = 1280;

		}






	 RandomEnemyTree[i].treeIndex++;
	 if (RandomEnemyTree[i].treeIndex  >=  5){
		    RandomEnemyTree[i].treeIndex = 0;
	     }

	}





}

void setEnemyTrees(){

	for(int i=0;i<TREESNUMBER;i++)
	{



	if(RandomEnemyTree[i].tree_x >= 540) RandomEnemyTree[i].tree_x = 540;
	else   RandomEnemyTree[i].tree_x = 1280 ;
	RandomEnemyTree[i].tree_y = 125 + rand()%300 ;
	RandomEnemyTree[i].treeIndex = rand()%10;
	RandomEnemyTree[i].treeShow = true;


	}


}


///////////////////////////////////////////////////finish random enemy work////////////////////////////////////////////////
/*void shoot(){
	if(w==1){
	 h+=5;
	 if(((charX +h+100) >1280)){
		 w=0;
	 }
	}
  
}*/

void shoot(){
	for(e2=0; e2<25; e2++){
	  sx[e2]+=eyf[e2]/25;
	  //printf("%d\n\n",sx[e2]);

	  if(sx[e2]>1200){
	     sx[e2]=0;
		 eyf[e2]=0;
	  
	  }
	}

}
void collision(){
	for(e2=0; e2<25; e2++){
		printf("%d\n\n",sx[e2]);
	
	}


}





int main()
{
	setEnemyTrees();
	iSetTimer(50,collision);
	iSetTimer(50,shoot);
	iSetTimer(25,change);
	iSetTimer(300,load);
	iSetTimer(8000,call);

	iInitialize(1280, 720, "Still Alive");
	iStart();

	return 0;
}
