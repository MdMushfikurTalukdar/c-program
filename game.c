#include<stdio.h>
#include<stdlib.h>
#include <windows.h>
#include<time.h>
#define sec 15.0

int a1=0,a2=0,a3=0,a4=0,i,a,b;
    a=2;
    b=1;
void rule()
{
    printf("You have to press enter button after every input.\nTo pass your one press 99.\nThe game will end after calling 23.\nThe time will limited for each person 15 second.\nYou have to count with serial wise number.\n");
}
void sound1()
{
    Beep(523,500);
}
void sound2()
{
    Beep(555,350);
    Sleep(50);
    Beep(555,200);
    Sleep(150);
    Beep(555,200);
    Sleep(150);
    Beep(690,200);
    Sleep(150);
    Beep(690, 200);
    Sleep(150);
    Beep(610, 200);
    Sleep(150);
    Beep(535, 160);
    Sleep(100);
    Beep(500, 150);
    Beep(500, 50);
    Sleep(200);
    Beep(700, 200);
    Sleep(1000);
}

void callone()
{
    printf("You have to Enter two player minimum and maximum four");
}
int gamebox2()
{
    char name1[20],name2[20];
    printf("Enter 1st player name : ");
    scanf(" %s",&name1);
    printf("Enter 2nd player name : ");
    scanf(" %s",&name2);
    for(;;)
    {
        clock_t ti = sec * CLOCKS_PER_SEC;
clock_t start = clock();
clock_t gunda=0;
    for(i=1;i<=3;i++)
    {
        sound1();

        printf("\n%s : ",name1);
        scanf("%d",&a1);
        if(a1==99)
            {
                if(i==1)
                {
                    printf("\n\t\tYou Lost %s\n\t\tGAME OVER",name1);
                    sound2();
                    exit(1) ;
                }
                else
                {
                     printf("\n\tPass\n");
                     break ;
                }

            }
        else if(a1>=a || a1<b || a1==23)
            {
                printf("\n\t\tYou Lost %s\n\t\tGAME OVER",name1);
                sound2();
                exit(1) ;
            }
        a1=a1+i;
        a=a+1;
        b=b+1;


    }
    gunda = (clock() - start);
    if(gunda>ti)
        {
            printf("\nYou have been cross your limit time %s",name1);
            printf("\n\t\tYou Lost %s\n\t\tGAME OVER",name1);
            sound2();
            exit(1);
        }
    for(i=1;i<=3;i++)
        {
            sound1();
            printf("\n%s : ",name2);
            scanf("%d",&a2);
            if(a2==99)
            {
                if(i==1)
                {
                    printf("\n\t\tYou Lost %s\n\t\tGAME OVER",name2);
                    sound2();
                    exit(1) ;
                }
                else
                {
                    printf("\n\tPass\n");
                    break ;
                }

            }
            else if(a2>=a || a2<b || a2==23)
                {
                    printf("\n\t\tYou Lost %s\n\t\tGAME OVER",name2);
                    sound2();
                    exit(1) ;
                }
            a2=a2+i;
            a=a+1;
            b=b+1;
        }
        gunda = (clock() - start);
    if(gunda>ti)
        {
            printf("\nYou have been cross your limit time %s",name2);
            printf("\n\t\tYou Lost %s\n\t\tGAME OVER",name2);
            sound2();
            exit(1);
        }
    }
}

int gamebox3()
{
    char name1[20],name2[20],name3[20];
    printf("Enter 1st player name : ");
    scanf(" %s",&name1);
    printf("Enter 2nd player name : ");
    scanf(" %s",&name2);
    printf("Enter 3rd player name : ");
    scanf(" %s",&name3);
    for(;;)
    {
        clock_t ti = sec * CLOCKS_PER_SEC;
clock_t start = clock();
clock_t gunda=0;
    for(i=1;i<=3;i++)
    {
        sound1();
        printf("\n%s : ",name1);
        scanf("%d",&a1);
        if(a1==99)
            {
                if(i==1)
                {
                    printf("\n\t\tYou Lost %s\n\t\tGAME OVER",name1);
                    sound2();
                    exit(1) ;
                }
                else
                {
                     printf("\n\tPass\n");
                     break ;
                }
            }
        else if(a1>=a || a1<b || a1==23)
            {
                    printf("\n\t\tYou Lost %s\n\t\tGAME OVER",name1);
                    sound2();
                    exit(1) ;
            }
        a1=a1+i;
        a=a+1;
        b=b+1;
    }
gunda = (clock() - start);
    if(gunda>ti)
        {
            printf("\nYou have been cross your limit time %s",name1);
            printf("\n\t\tYou Lost %s\n\t\tGAME OVER",name1);
            sound2();
            exit(1);
        }
    for(i=1;i<=3;i++)
        {
            sound1();
            printf("\n%s : ",name2);
            scanf("%d",&a2);
            if(a1==99)
            {
                if(i==1)
                {
                    printf("\n\t\tYou Lost %s\n\t\tGAME OVER",name2);
                    sound2();
                    exit(1) ;
                }
                else
                {
                     printf("\n\tPass\n");
                     break ;
                }
            }
            else if(a2>=a || a2<b || a2==23)
                {
                    printf("\n\t\tYou Lost %s\n\t\tGAME OVER",name2);
                    sound2();
                    exit(1) ;
                }
            a2=a2+i;
            a=a+1;
            b=b+1;
        }
gunda = (clock() - start);
    if(gunda>ti)
        {
            printf("\nYou have been cross your limit time %s",name2);
            printf("\n\t\tYou Lost %s\n\t\tGAME OVER",name2);
            sound2();
            exit(1);
        }
        for(i=1;i<=3;i++)
        {
            sound1();
            printf("\n%s : ",name3);
            scanf("%d",&a3);
            if(a1==99)
            {
                if(i==1)
                {
                    printf("\n\t\tYou Lost %s\n\t\tGAME OVER",name3);
                    sound2();
                    exit(1) ;
                }
                else
                {
                     printf("\n\tPass\n");
                     break ;
                }
            }
            else if(a3>=a || a3<b || a3==23)
                {
                    printf("\n\t\tYou Lost %s\n\t\tGAME OVER",name3);
                    sound2();
                    exit(1) ;
                }
            a3=a3+i;
            a=a+1;
            b=b+1;
        }
        gunda = (clock() - start);
    if(gunda>ti)
        {
            printf("\nYou have been cross your limit time %s",name3);
            printf("\n\t\tYou Lost %s\n\t\tGAME OVER",name3);
            sound2();
            exit(1);
        }

    }
}
int gamebox4()
{
    char name1[20],name2[20],name3[20],name4[20];
    printf("Enter 1st player name : ");
    scanf(" %s",&name1);
    printf("Enter 2nd player name : ");
    scanf(" %s",&name2);
    printf("Enter 3rd player name : ");
    scanf(" %s",&name3);
    printf("Enter 4th player name : ");
    scanf(" %s",&name4);
    for(;;)
    {
        clock_t ti = sec * CLOCKS_PER_SEC;
clock_t start = clock();
clock_t gunda=0;
    for(i=1;i<=3;i++)
    {
        sound1();
        printf("\n%s : ",name1);
        scanf("%d",&a1);
        if(a1==99)
            {
                if(i==1)
                {
                    printf("\n\t\tYou Lost %s\n\t\tGAME OVER",name1);
                    sound2();
                    exit(1) ;
                }
                else
                {
                     printf("\n\tPass\n");
                     break ;
                }
            }
        else if(a1>=a || a1<b || a1==23)
            {
                printf("\n\t\tYou Lost %s\n\t\tGAME OVER",name1);
                sound2();
                exit(1) ;
            }
        a1=a1+i;
        a=a+1;
        b=b+1;
    }
    gunda = (clock() - start);
    if(gunda>ti)
        {
            printf("\nYou have been cross your limit time %s",name1);
            printf("\n\t\tYou Lost %s\n\t\tGAME OVER",name1);
            sound2();
            exit(1);
        }

    for(i=1;i<=3;i++)
        {
            sound1();
            printf("\n%s : ",name2);
            scanf("%d",&a2);
            if(a1==99)
            {
                if(i==1)
                {
                    printf("\n\t\tYou Lost %s\n\t\tGAME OVER",name2);
                    sound2();
                    exit(1) ;
                }
                else
                {
                     printf("\n\tPass\n");
                     break ;
                }
            }
            else if(a2>=a || a2<b || a2==23)
                {
                    printf("\n\t\tYou Lost %s\n\t\tGAME OVER",name2);
                    sound2();
                    exit(1) ;
                }
            a2=a2+i;
            a=a+1;
            b=b+1;
        }
        gunda = (clock() - start);
    if(gunda>ti)
        {
            printf("\nYou have been cross your limit time %s",name2);
            printf("\n\t\tYou Lost %s\n\t\tGAME OVER",name2);
            sound2();
            exit(1);
        }

        for(i=1;i<=3;i++)
        {
            sound1();
            printf("\n%s : ",name3);
            scanf("%d",&a3);
            if(a1==99)
            {
                if(i==1)
                {
                    printf("\n\t\tYou Lost %s\n\t\tGAME OVER",name3);
                    sound2();
                    exit(1) ;
                }
                else
                {
                     printf("\n\tPass\n");
                     break ;
                }
            }
            else if(a3>=a || a3<b || a3==23)
                {
                    printf("\n\t\tYou Lost %s\n\t\tGAME OVER",name3);
                    sound2();
                    exit(1) ;
                }
            a3=a3+i;
            a=a+1;
            b=b+1;
        }
        gunda = (clock() - start);
    if(gunda>ti)
        {
            printf("\nYou have been cross your limit time %s",name3);
            printf("\n\t\tYou Lost %s\n\t\tGAME OVER",name3);
            sound2();
            exit(1);
        }

        for(i=1;i<=3;i++)
        {
            sound1();
            printf("\n%s : ",name4);
            scanf("%d",&a4);
            if(a1==99)
            {
                if(i==1)
                {
                    printf("\n\t\tYou Lost %s\n\t\tGAME OVER",name4);
                    sound2();
                    exit(1) ;
                }
                else
                {
                     printf("\n\tPass\n");
                     break ;
                }
            }
            else if(a4>=a || a4<b || a4==23)
                {
                    printf("\n\t\tYou Lost %s\n\t\tGAME OVER",name4);
                    sound2();

                    exit(1) ;
                }
            a4=a4+i;
            a=a+1;
            b=b+1;
        }
        gunda = (clock() - start);
    if(gunda>ti)
        {
            printf("\nYou have been cross your limit time %s",name4);
            printf("\n\t\tYou Lost %s\n\t\tGAME OVER",name4);
            sound2();
            exit(1);
        }
    }
}

int main()
{
    char n;
    rule();
    for(;;)
    {
        printf("Enter total number of player you want to play : ");
    scanf(" %c",&n);

    if(n=='1')
    {
        callone();

    }
    else if(n=='2')
    {
        gamebox2();
    }
    else if(n=='3')
    {
        gamebox3();
    }
    else if(n=='4')
    {
        gamebox4();
    }
    else
    {
        callone();
    }
    }


}
