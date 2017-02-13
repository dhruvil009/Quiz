anime try.c
Details
Activity
anime try.c
Sharing Info
Not shared
General Info
Type
C
Size
13 KB (13,135 bytes)
Storage used
13 KB (13,135 bytes)
Location
anime
Owner
me
Modified
Nov 18, 2016 by me
Opened
Nov 18, 2016 by me
Created
Nov 18, 2016 with Google Drive Web
Description
Add a description
Download permissions
Viewers can download

New Team Drive

#include<stdio.h>
#include<conio.h>
#include <windows.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>
#include<dos.h>

void help()
{

    char c;
    int ch;
    FILE *fp;
system("cls");
fp=fopen("Help.txt","r");
 while ((ch=fgetc(fp))!=EOF)
 {
     c=(char)ch;
			putchar(c);
			Sleep(36);
			}
        fclose(fp);
}

void highscore()
{
char name[20];
float s;
FILE *f;
system("cls");
if((f = fopen("dhruvil.txt","r"))==NULL) {
      printf("\n\n\n\n\t\tsorry you have never tested before");
 getch();
}
 else {
    f=fopen("dhruvil.txt","r");
fscanf(f,"%s%f",&name,&s);
printf("\n\n\t\t ");
printf("\n\n\t\t %s has secured the Highest Score %.2f",name,s);
printf("\n\n\t\t ");
fclose(f);
getch();
}
}
void writescore(float score, char plnm[20])
{
float sc;
char nm[20];
FILE *f;
system("cls");
f=fopen("dhruvil.txt","r");
fscanf(f,"%s%f",&nm,&sc);
if (score>=sc)
{ sc=score;
fclose(f);
f=fopen("dhruvil.txt","w");
fprintf(f,"%s\n%.2f",plnm,sc);
fclose(f);
}
}
int main()
{
int questnum,rightans;
int r,i;
int pa;int nq[6];int w;
float score;
char choice;
char playername[20];
time_t initialtime,finaltime;
system("cls");
dhruvil:
system("cls");
{
    char c;
    int ch;
    FILE *fp;
system("cls");
fp=fopen("Main.txt","r");
 while ((ch=fgetc(fp))!=EOF)
 {
     c=(char)ch;
			putchar(c);
			Sleep(36);
			}
        fclose(fp);
}
choice=toupper(getch());
if (choice=='V')
{
highscore();
goto dhruvil;
}
else if (choice=='Q')
exit(1);
else if (choice=='H')
{
help();
getch();
goto dhruvil;
}
else if(choice=='S'){
system("cls");
printf("\n\n\n\t\t\tEnter your name...");
printf("\n\t\t\t(only one word)\n\n\t\t\t");
gets(playername);
home:
system("cls");
initialtime=time(NULL);
questnum=rightans=0;
i=1;
start:
srand ( time(NULL) );
r=rand()%32+1;
nq[i]=r;
for (w=0;w<i;w++)
if (nq[w]==r) goto start;
switch(r)
{
case 1:
printf("\n\nmartin luther king got a c+ at school in ...");
printf("\n\nA.public speaking\tB.french\n\nC.maths\tD.history\n\n");
questnum++;
if (toupper(getch())=='A')
{printf("\n\nCorrect!!!");rightans++; break;}
else
{printf("\n\nWrong!!! The correct answer is A.Public speaking");break;}
case 2:
printf("\n\n\nwhich country produced the largest voluntere army during ww2");
printf("time period is same?");
printf("\n\nA.india\tB.america\n\nC.england\tD.japan\n\n");
questnum++;
printf(" India produced the largest volunteer army in the history over 2.5M man");
if (toupper(getch())=='A')
{printf("\n\nCorrect!!!");rightans++; break;}
else
printf("\n\nWrong!!! The correct answer is A.India");
break;
case 3:
printf("\n\n\nHow many active volcanes in the world");
printf("\n\nA.1268\tB.1345\n\nC.1213\tD.1500\n\n");
questnum++;
if (toupper(getch())=='D')
{printf("\n\nCorrect!!!");rightans++; break;}
else
{printf("\n\nWrong!!! The correct answer is D.1500");break;}
case 4:
printf("\n\n\nWho was awarded the 'Man of the Tournament' of ICC WORLD CUP 2007?");
printf("\n\nA.Glen Magrath\tB.Mahela Jawardan\n\nC.Mathew Hayden\tD.Sachin Tendulkar\n\n");
questnum++;
if (toupper(getch())=='A')
{printf("\n\nCorrect!!!");rightans++; break;}
else
{printf("\n\nWrong!!! The correct answer is A.Glen Magrath");break;}
case 5:
printf("\n\n\nWhich rightansy won the Fifa World Cup 1998?");
printf("\n\nA.France\tB.Brazil\n\nC.Italy\tD.England\n\n");
questnum++;
if (toupper(getch())=='A')
{printf("\n\nCorrect!!!");rightans++; break;}
else
{printf("\n\nWrong!!! The correct answer is A.France");break;}
case 6:
printf("\n\n\nWhich syllabe is stressed in the word 'democracy'?");
printf("\n\nA.1st\tB.2nd\n\nC.3rd\tD.4th\n\n");
questnum++;
if (toupper(getch())=='B' )
{printf("\n\nCorrect!!!");rightans++; break;}
else
{printf("\n\nWrong!!! The correct answer is B.2nd");break;}
case 7:
printf("\n\n\nWhich team was the winner of Cricket World Cup 1987?");
printf("\n\nA.West Indies\tB.India\n\nC.Australia\tD.England\n\n");
questnum++;
if (toupper(getch())=='C')
{printf("\n\nCorrect!!!");rightans++; break;}
else
{printf("\n\nWrong!!! The correct answer is C.Australia");break;}
case 8:
printf("\n\n\nWhat is the height of Mount everest in feet?");
printf("\n\nA.8648\tB.6648\n\nC.8884\tD.8848\n\n");
questnum++;
if (toupper(getch())=='D')
{printf("\n\nCorrect!!!");rightans++; break;}
else
{printf("\n\nWrong!!! The correct answer is D.8848");break;}
case 9:
printf("\n\n\nWhat is the capital of Denmark?");
printf("\n\nA.Copenhagen\tB.Helsinki\n\nC.Rome\t\tD.Madrid\n\n");
questnum++;
if (toupper(getch())=='A')
{printf("\n\nCorrect!!!");rightans++; break;}
else
{printf("\n\nWrong!!! The correct answer is A.Copenhagen");break;}
case 10:
printf("\n\n\nWhich syllabe is stressed in the word 'instanteneous'?");
printf("\n\nA.1st\tB.2nd\n\nC.3rd\tD.4th\n\n");
questnum++;
if (toupper(getch())=='C')
{printf("\n\nCorrect!!!");rightans++; break;}
else
{printf("\n\nWrong!!! The correct answer is C.3rd");break;}
case 11:
printf("\n\n\nWho was the only player to score 6 successive sixes in an over?");
printf("\n\nA.Adam Gilchrist\tB.M.S.Dhoni\n\nC.Herschel Gibbs\tD.Sanath Jayasurya\n\n");
questnum++;
if (toupper(getch())=='C')
{printf("\n\nCorrect!!!");rightans++; break;}
else
{printf("\n\nWrong!!! The correct answer is C.Herschel Gibbs");break;}
case 12:
printf("\n\n\nWho was the only player to take 4 successive wickets?");
printf("\n\nA.Malinga Bandara\tB.Lasith Malinga\n\nC.Bret Lee\tD.Murali Daran\n\n");
questnum++;
if (toupper(getch())=='B')
{printf("\n\nCorrect!!!");rightans++; break;}
else
{printf("\n\nWrong!!! The correct answer is B.Lasith Malinga");break;}
case 13:
printf("\n\n\nWhich country is hosting the Fifa World Cup 2010?");
printf("\n\nA.South Africa\tB.Italy\n\nC.Argentina\tD.Spain\n\n");
questnum++;
if (toupper(getch())=='A')
{printf("\n\nCorrect!!!");rightans++; break;}
else
{printf("\n\nWrong!!! The correct answer is A.South Africa");break;}
case 14:
printf("\n\n\nWho is the author of 'Pulpasa Cafe'?");
printf("\n\nA.Narayan Wagle\tB.Lal Gopal Subedi\n\nC.B.P. Koirala\tD.Khagendra Sangraula\n\n");
questnum++;
if (toupper(getch())=='A')
{printf("\n\nCorrect!!!");rightans++; break;}
else
{printf("\n\nWrong!!! The correct answer is A.Narayan Wagle");break;}
case 15:
printf("\n\n\nWhich country is Maria Sarapova from?");
printf("\n\nA.Russia\tB.Switzerland\n\nC.Argentina\tD.Spain\n\n");
questnum++;
if (toupper(getch())=='A')
{printf("\n\nCorrect!!!");rightans++; break;}
else
{printf("\n\nWrong!!! The correct answer is A.Russia");break;}
case 16:
printf("\n\n\nWho was awarded the youngest player award in Fifa World Cup 2006?");
printf("\n\nA.Wayne Rooney\tB.Lucas Podolski\n\nC.Lionel Messi\tD.Christiano Ronaldo\n\n");
questnum++;
if (toupper(getch())=='B')
{printf("\n\nCorrect!!!");rightans++; break;}
else
{printf("\n\nWrong!!! The correct answer is B.Lucas Podolski");break;}
case 17:
printf("\n\n\nWhat is the smallest district of Nepal?");
printf("\n\nA.Lalitpur\tB.Karnali\n\nC.Bhaktapur\tD.Gulmi\n\n");
questnum++;
if (toupper(getch())=='C')
{printf("\n\nCorrect!!!");rightans++; break;}
else
{printf("\n\nWrong!!! The correct answer is C.Bhaktapur");break;}
case 18:
printf("\n\n\nWhat is the headquarter of Western Development Region?");
printf("\n\nA.Dhankuta\tB.Kathmandu\n\nC.Dhangadhi\tD.Pokhara\n\n");
questnum++;
if (toupper(getch())=='D')
{printf("\n\nCorrect!!!");rightans++; break;}
else
{printf("\n\nWrong!!! The correct answer is D.Pokhara");break;}
case 19:
printf("\n\n\nWhich place is called 'The Cherrapunji of Nepal'?");
printf("\n\nA.Dharan\tB.Kathmandu\n\nC.Pokhara\tD.Butwal\n\n");
questnum++;
if (toupper(getch())=='C')
{printf("\n\nCorrect!!!");rightans++; break;}
else
{printf("\n\nWrong!!! The correct answer is C.Pokhara");break;}
case 20:
printf("\n\n\nWhich city is known at 'The City of Seven Hills'?");
printf("\n\nA.Rome\tB.Vactican City\n\nC.Madrid\tD.Berlin\n\n");
questnum++;
if (toupper(getch())=='A')
{printf("\n\nCorrect!!!");rightans++; break;}
else
{printf("\n\nWrong!!! The correct answer is A.Rome");break;}
case 21:
printf("\n\n\nWho was the F1 racing champion of 2006?");
printf("\n\nA.Louis Hamilton\tB.Felipe Massa\n\nC.Fernando Alonso\tD.Michael Schumaker\n\n");
questnum++;
if (toupper(getch())=='C')
{printf("\n\nCorrect!!!");rightans++; break;}
else
{printf("\n\nWrong!!! The correct answer is C.Fernanda Alonso");break;}
case 22:
printf("\n\n\nWhich Among the following Mosque is located in The middle of the sea?");
printf("\n\nA.Fatehpur Sikri\tB.Haji ali dargah\n\nC.Char Minar\tD.Lal quila\n\n");
questnum++;
if (toupper(getch())=='B')
{printf("\n\nCorrect!!!");rightans++; break;}
else
{printf("\n\nWrong!!! The correct answer is D.Haji ali Dargah");break;}
case 23:
printf("\n\n\nName the Country where there no mosquito is found?");
printf("\n\nA.Germany\tB.Spain\n\nC.Japan\tD.France\n\n");
questnum++;
if (toupper(getch())=='D')
{printf("\n\nCorrect!!!");rightans++; break;}
else
{printf("\n\nWrong!!! The correct answer is D.France");break;}
case 24:
printf("\n\nWhich State is Known as India's Spice Garden?");
printf("\n\nA.Kerala\tB.Karnataka\n\nC.Bihar\tD.Uttaranchal\n\n");
questnum++;
if (toupper(getch())=='A')
{printf("\n\nCorrect!!!");rightans++; break;}
else
{printf("\n\nWrong!!! The correct answer is A.Kerala");break;}
case 25:
printf("\n\nWhat was the name of tipu sultan's Father?");
printf("\n\nA.Haydar Ali\tB.Pandit purania\n\nC.Ghazi khan\tD.Mir sadiq\n\n");
questnum++;
printf("Haydar ali rose to the post of commander-in-chief of mysorean army.\nIn 1761, he launched a coup, ousting the previous ruler, \nand naming himself the undisputed ruler.");
if (toupper(getch())=='A')
{printf("\n\nCorrect!!!");rightans++; break;}
else
{printf("\n\nWrong!!! The correct answer is A.Haydar ali");break;}
case 26:
printf("\n\nWho once was the god of storms, winds, and death?");
printf("\n\nA.Rukmini\tB.Rudra\n\nC.Rati\tD.Ratri\n\n");
questnum++;
if (toupper(getch())=='B')
{printf("\n\nCorrect!!! Yes it was Rudra who later changed his name to SHIVA.");rightans++; break;}
else
{printf("\n\nWrong!!! The correct answer is B.Rudra");break;}
case 27:
printf("\n\nWhich of these land animals moves most slowly?");
printf("\n\nA.Snail\tB.Turtle\n\nC.Rabbit\tD.Three toed sloth\n\n");
questnum++;
printf(" IT would take a garden Snail over 30hrs to go a mile.");
if (toupper(getch())=='A')
{printf("\n\nCorrect!!!");rightans++; break;}
else
{printf("\n\nWrong!!! The correct answer is A.Snail");break;}
case 28:
printf("\n\nWho was the first chess player to get grandmaster norm?");
printf("\n\nA.Vishwanathan anand\tB.Dibyendu Barua\n\nC.Praveen M. Thipsay\tD.Nasir Wajih\n\n");
questnum++;
if (toupper(getch())=='A')
{printf("\n\nCorrect!!!");rightans++; break;}
else
{printf("\n\nWrong!!! The correct answer is A.Vishwanathan anand");break;}
case 29:
printf("\n\nWhat is the capital of italy??");
printf("\n\nA.Naples\tB.Pisa\n\nC.Madrid\tD.Rome\n\n");
questnum++;
if (toupper(getch())=='D')
{printf("\n\nCorrect!!!");rightans++; break;}
else
{printf("\n\nWrong!!! The correct answer is D.Rome");break;}
case 30:
printf("\n\nThe ISRO was founded by?");
printf("\n\nA.Homi j. bhabha\tB.Vikram Sarabhai\n\nC.Raja Ramanna\tD.APJ Abdul kalam\n\n");
questnum++;
if (toupper(getch())=='B')
{printf("\n\nCorrect!!!");rightans++; break;}
else
{printf("\n\nWrong!!! The correct answer is B.Vikram Sarabhai");break;}
case 31:
printf("\n\nWhich planet is the closest to the earth?");
printf("\n\nA.Venus\tB.Mercury\n\nC.Mars\tD.Sun\n\n");
questnum++;
printf("Venus is at times 25 million miles away while Mars is 34 million miles away");
if (toupper(getch())=='A')
{printf("\n\nCorrect!!!");rightans++; break;}
else
{printf("\n\nWrong!!! The correct answer is A.Venus");break;}
case 32:
printf("\n\nWho was the founder of the Gupta Dynasty?");
printf("\n\nA.Chandragupta 1\tB.Chandragupta 2(Vikramaditya)\n\nC.Samudragupta\tD.Skandgupta\n\n");
questnum++;
printf("However the first ruler was Srigupta although chandragupta is considered to be the founder");
if (toupper(getch())=='A')
{printf("\n\nCorrect!!!");rightans++; break;}
else
{printf("\n\nWrong!!! The correct answer is A.Chandragupta 1");break;}
}
i++;
if (i<=5) goto start;
finaltime=time(NULL);
score=(float)rightans/questnum*100-difftime(finaltime,initialtime)/4;
if (score<0) score=0;
printf("\n\n\nYour Score: %.2f",score);
if (score==100) printf("\n\nEXCELLENT!!! KEEP IT UP");
else if (score>=80 && score<100) printf("\n\nVERY GOOD!!");
else if (score>=60 &&score<80) printf("\n\nGOOD! OK IT IS FINE.");
else if (score>=40 && score<60) printf("\n\nCOOL JUST PASSED OUT.");
else printf("\n\nYOU ARE DETAINED");
puts("\n\nNEXT PLAY?(Y/N)");
if (toupper(getch())=='Y')
goto home;
else
{
writescore(score,playername);
goto dhruvil;
}
}
else
{
printf("\n\n\t\t Enter the right key\n\n\t\t ");
Sleep(700);
goto dhruvil;
}
return 0;
}
