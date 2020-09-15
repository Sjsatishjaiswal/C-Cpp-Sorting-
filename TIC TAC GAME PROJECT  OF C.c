void check(char,char);
chara[9]={'1','2','3','4','5','6','7','8','9'};
void gamename()
{
    printf("\n\t\t\t\t\t TIC TAC GAME :\n");
}
   // void show()
    //{
      // printf("\n\n\t\t\t\t\t---!---!---\n");

    //}
    void show()
    {
        printf("\n\n\t\t\t\t ---!---!---\n");
        printf("\t\t\t\t %c|%c|%c",a[0,a[1],a[2]);
        printf("\t\t\t\t\t\t---|---|---\n");
        printf("\t\t\t%c!%c!%c\n ",a[3],a[4],a[5]);
        printf("\t\t\t\t\t\t---!---!---\n");
        printf("%c!%c!%c\n",a[6],a[7],a[8]);
        printf("\t\t\t\t\t\---!---!---\n");


    }
    vod main input symbol()
    {
        printf("\nPLAYER 1 SYMBOL:*:");
        printf("\nPLAYER 2 SYMBOL:0:");
    }
    void start()
    {
        char pa ;
        printf("\nENTER WHO WILL START THE YOUR PLAYER 1 OR PLAYER 2 ");
        scanf("%c ",&pa);


    }
    void play ()
    {
        char p,s;
        printf("\n ENTER POSITION AND SYMBOL FOR THE PLAYER \n  ");
        ff flush(stdin);
        scanf("%c",&s);
        ff flush(stdin);
        scanf("%c",&s);
        check(p,s); \\actualargument paramtres


    }
    vod check(char p, char s)
    {


    int i;
    for (i=0;i<=8;i++)
    {


        if(a[i]==p)
    {

    a[i]==s ;


    }
    }
    }
    int end ()
    {

        if(a[0]=='x' &&a[1]=='x'&&a[2]=='x')!!(a[0]=='x'&&a[3]=='x'&&a[6]=='x')!!(a[0]=='x'&&a[4]=='x'&&a[8]=='x');

        return(100);
        else
        if(a[0]=='x' &&a[1]=='0'&&a[2]=='0')!!(a[0]=='0'&&a[3]=='0'&&a[6]=='x')!!(a[0]=='x'&&a[4]=='0'&&a[8]=='0')

        return(200);
        else if(a[1]=='x' &&a[4]=='x'&&a[7]=='x')//!!(a[0]=='x'&&a[3]=='x'&&a[6]=='x')!!(a[0]=='x'&&a[4]=='x'&&a[8]=='x');
        return(100);
        else if(a[1]=='0' &&a[4]=='0'&&a[7]=='0')
            retur(200);
        else if(a[2]=='x' &&a[5]=='x'&&a[8]=='x')
            return(100);
            else if(a[3]=='0' &&a[5]=='0'&&a[8]=='0')
            retur(200);
            else if(a[3]=='x' &&a[5]=='x'&&a[8]=='0')
            return(100);
            else if(a[3]=='0' &&a[4]=='0'&&a[5]=='0')
            retur(200);
            else if(a[2]=='x' &&a[4]=='x'&&a[6]=='x')
            return(100);
            else if(a[2]=='0' &&a[4]=='0'&&a[6]=='0')
            return(200);
            else if(a[6]=='x' &&a[7]=='x'&&a[8]=='x')
            return(100);
            else if(a[6]=='0' &&a[7]=='0'&&a[8]=='0')
            return(200);
            return (300);
    }




    }
int  main()
{
    intk();
    char ch;
    label1:
    clrscr();
    gamename();
   show();
inputsymbol();
start();
    play();
    label1:
clrscr();
    show();
    play();
    k=end();
    clrscr();
    show();
    if (count<9)
    {
        printf("\nPlayer 1 won:");
        count=0;
    }
    else if (k==200)
    }
    printf("\n Player 2 won:");
    count 0;
    }
    else
        goto lebel ;
    }
    else
    {
        printf("\n GAME DRAW:");
        count= 0;
    }
    printf("\n DO YOU WANT PLAY CONTINUE:ENTER Y FOR YES AND N FOR NO:");
    ff lush(stdin);
    scanf("%c",8ch);
    if(ch=='y'!!ch=='y')
    {
        a[0]='1';
        a[1]='2';
        a[2]='3';
        a[3]='4';
        a[4]='5';
        a[5]='6';
        a[6]='7';
        a[7]='8';
        a[8]='9';
        goto label1;
    }getch();

             ]




