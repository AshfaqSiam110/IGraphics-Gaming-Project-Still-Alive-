void files();
int I =0;
int N[100];
char Name[100][100],Score[100][100];
char gamePage[5][30]={"gamePage\\1.bmp","gamePage\\input.bmp"};
int IndexNumber = 0;
char enternamestr[1000];
void takeName(char key){
	
		enternamestr[IndexNumber] = key;
		if (IndexNumber <= 25)IndexNumber++;
		enternamestr[IndexNumber] = '\0';

}
void namePage(){

	 iShowBMP(0,0,gamePage[1]);
	 iText (400,250,enternamestr,GLUT_BITMAP_TIMES_ROMAN_24);


}





typedef struct player player;
struct player{
	char name[100];
	int score;

};

player t[10];


void newData(){
		
	   files();
	   FILE *xx = fopen("score.txt", "w");

	   scanf("%s %d", t[I+1].name, &t[I+1].score);
       fprintf(xx, "%s %d\n",t[I+1].name, t[I+1].score);
  
       fclose(xx);

	   files();
}

void sort(){
	
	int j=0,temp;
	char tempName[100],tempScore[100];

	FILE *fc = fopen("score.txt", "r");
//	player p;

	
	while(fscanf(fc, "%s %d", t[j].name, &t[j].score) != EOF)
    {		
		j++;
    }
    fclose(fc);


	for (int c = 0 ; c < 10 - 1; c++)
		for(int j = 0 ; j < 10 - c - 1; j++)
		{
			if( t[j].score < t[j+1].score)
							{
								temp = t[j].score;
								t[j].score = t[j+1].score;
								t[j+1].score = temp;

								strcpy( tempName , t[j].name);
								strcpy( t[j].name , t[j+1].name);
								strcpy( t[j+1].name , tempName);

								strcpy( tempName , Name[j]);
								strcpy( Name[j] ,Name[j+1] );
								strcpy( Name[j+1] , tempName);

								strcpy( tempScore , Score[j]);
								strcpy( Score[j] ,Score[j+1] );
								strcpy( Score[j+1] , tempScore);
							}
		}
}


void showScore(){


	iSetColor(255,0,0);
	int y=600;
	for(int j=0,y=600;j<I;j++,y-=40){
		iText(100,y,Name[j],GLUT_BITMAP_TIMES_ROMAN_24);
		iText(320,y,Score[j],GLUT_BITMAP_TIMES_ROMAN_24);
		
	}

}

void files(){

	FILE *fp = fopen("score.txt", "r");
//	player p;
	I=0;
	
	while(fscanf(fp, "%s %s", Name[I],Score[I]) != EOF)
    {		
		I++;
    }
    fclose(fp);
	
	sort();
}