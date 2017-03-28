#include <stdio.h>
#include <graphics.h>
#define INFINITY 9999
#define MAX 22

void dijkstra(int G[MAX][MAX],int start,int finish)
{
    /// Kod parcasinin bu kisminda su linklerden yararlanilmistir.
    /// http://www.thecrazyprogrammer.com/2014/03/dijkstra-algorithm-for-finding-shortest-path-of-a-graph.html
    /// http://www.codewithc.com/dijkstras-algorithm-in-c/

    int cost[MAX][MAX],distance[MAX],pred[MAX];
    int visited[MAX],sayac,mindistance,nextnode,i,j;
    int oncekix = 0,oncekiy = 0,sonrakix = 0,sonrakiy = 0;
    for(i=0; i<22; i++)
        for(j=0; j<22; j++)
            if(G[i][j]==0)
                cost[i][j]=INFINITY;
            else
                cost[i][j]=G[i][j];


    for(i=0; i<22; i++)
    {
        distance[i]=cost[start][i];
        pred[i]=start;
        visited[i]=0;
    }

    distance[start]=0;
    visited[start]=1;
    sayac=1;

    while(sayac<22-1)
    {
        mindistance=INFINITY;

        for(i=0; i<22; i++)
            if(distance[i]<mindistance&&!visited[i])
            {
                mindistance=distance[i];
                nextnode=i;
            }


        visited[nextnode]=1;
        for(i=0; i<22; i++)
            if(!visited[i])
                if(mindistance+cost[nextnode][i]<distance[i])
                {
                    distance[i]=mindistance+cost[nextnode][i];
                    pred[i]=nextnode;
                }
        sayac++;
    }


    for(i=0; i<22; i++)

        if(i==finish)
        {
            if(i == 0)
            {
                sonrakix = 450;
                sonrakiy = 330;
            }
            else if(i == 1)
            {
                sonrakix = 350;
                sonrakiy = 337;
            }
            else if(i == 2)
            {
                sonrakix = 390;
                sonrakiy = 242;
            }
            else if(i == 3)
            {
                sonrakix = 500;
                sonrakiy = 234;
            }
            else if(i == 4)
            {
                sonrakix = 550;
                sonrakiy = 363;
            }
            else if(i == 5)
            {
                sonrakix = 530;
                sonrakiy = 312;
            }
            else if(i == 6)
            {
                sonrakix = 540;
                sonrakiy = 441;
            }
            else if(i == 7)
            {
                sonrakix = 445;
                sonrakiy = 482;
            }
            else if(i == 8)
            {
                sonrakix = 319;
                sonrakiy = 437;
            }
            else if(i == 9)
            {
                sonrakix = 250;
                sonrakiy = 360;
            }
            else if(i == 10)
            {
                sonrakix = 285;
                sonrakiy = 292;
            }
            else if(i == 11)
            {
                sonrakix = 535;
                sonrakiy = 168;
            }
            else if(i == 12)
            {
                sonrakix = 450;
                sonrakiy = 190;
            }
            else if(i == 13)
            {
                sonrakix = 603;
                sonrakiy = 242;
            }
            else if(i == 14)
            {
                sonrakix = 642;
                sonrakiy = 337;
            }
            else if(i == 15)
            {
                sonrakix = 600;
                sonrakiy = 406;
            }
            else if(i == 16)
            {
                sonrakix = 683;
                sonrakiy = 440;
            }
            else if(i == 17)
            {
                sonrakix = 602;
                sonrakiy = 496;
            }
            else if(i == 18)
            {
                sonrakix = 332;
                sonrakiy = 492;
            }
            else if(i == 19)
            {
                sonrakix = 407;
                sonrakiy = 603;
            }
            else if(i == 20)
            {
                sonrakix = 500;
                sonrakiy = 580;
            }
            else if(i == 21)
            {
                sonrakix = 535;
                sonrakiy = 605;
            }
            printf("\nSehirler arasi uzaklik = %d",distance[i]);
            printf("\nYol = %d",i);
            int oldbas;
            int sayi;
            sayi = distance[i];
            oldbas = sayi / 100;
            if(oldbas != 0) // Sayi 3 basamakli
            {

                if(oldbas == 1)
                {
                    outtextxy(1065,17,"1");
                }
                else if(oldbas == 2)
                {
                    outtextxy(1065,17,"2");
                }
                else if(oldbas == 3)
                {
                    outtextxy(1065,17,"3");
                }
                else if(oldbas == 4)
                {
                    outtextxy(1065,17,"4");
                }
                else if(oldbas == 5)
                {
                    outtextxy(1065,17,"5");
                }
                else if(oldbas == 6)
                {
                    outtextxy(1065,17,"6");
                }
                else if(oldbas == 7)
                {
                    outtextxy(1065,17,"7");
                }
                else if(oldbas == 8)
                {
                    outtextxy(1065,17,"8");
                }
                else if(oldbas == 9)
                {
                    outtextxy(1065,17,"9");
                }
                sayi = sayi - (oldbas*100);
                oldbas = sayi / 10;
                if(oldbas != 0)
                {
                    if(oldbas == 1)
                    {
                        outtextxy(1073,17,"1");
                    }
                    else if(oldbas == 2)
                    {
                        outtextxy(1073,17,"2");
                    }
                    else if(oldbas == 3)
                    {
                        outtextxy(1073,17,"3");
                    }
                    else if(oldbas == 4)
                    {
                        outtextxy(1073,17,"4");
                    }
                    else if(oldbas == 5)
                    {
                        outtextxy(1073,17,"5");
                    }
                    else if(oldbas == 6)
                    {
                        outtextxy(1073,17,"6");
                    }
                    else if(oldbas == 7)
                    {
                        outtextxy(1073,17,"7");
                    }
                    else if(oldbas == 8)
                    {
                        outtextxy(1073,17,"8");
                    }
                    else if(oldbas == 9)
                    {
                        outtextxy(1073,17,"9");
                    }
                    sayi = sayi - (oldbas*10);
                    oldbas = sayi;
                    if(oldbas == 1)
                    {
                        outtextxy(1081,17,"1");
                    }
                    else if(oldbas == 0)
                    {
                        outtextxy(1081,17,"0");
                    }
                    else if(oldbas == 2)
                    {
                        outtextxy(1081,17,"2");
                    }
                    else if(oldbas == 3)
                    {
                        outtextxy(1081,17,"3");
                    }
                    else if(oldbas == 4)
                    {
                        outtextxy(1081,17,"4");
                    }
                    else if(oldbas == 5)
                    {
                        outtextxy(1081,17,"5");
                    }
                    else if(oldbas == 6)
                    {
                        outtextxy(1081,17,"6");
                    }
                    else if(oldbas == 7)
                    {
                        outtextxy(1081,17,"7");
                    }
                    else if(oldbas == 8)
                    {
                        outtextxy(1081,17,"8");
                    }
                    else if(oldbas == 9)
                    {
                        outtextxy(1081,17,"9");
                    }
                }

            }
            else
            {
                oldbas = sayi / 10;
                if(oldbas != 0) // sayi 2 basamakli
                {
                    if(oldbas == 1)
                    {
                        outtextxy(1073,17,"1");
                    }
                    else if(oldbas == 2)
                    {
                        outtextxy(1073,17,"2");
                    }
                    else if(oldbas == 3)
                    {
                        outtextxy(1073,17,"3");
                    }
                    else if(oldbas == 4)
                    {
                        outtextxy(1073,17,"4");
                    }
                    else if(oldbas == 5)
                    {
                        outtextxy(1073,17,"5");
                    }
                    else if(oldbas == 6)
                    {
                        outtextxy(1073,17,"6");
                    }
                    else if(oldbas == 7)
                    {
                        outtextxy(1073,17,"7");
                    }
                    else if(oldbas == 8)
                    {
                        outtextxy(1073,17,"8");
                    }
                    else if(oldbas == 9)
                    {
                        outtextxy(1073,17,"9");
                    }
                    sayi = sayi - (10 * oldbas);
                    oldbas = sayi;
                    if(oldbas == 1)
                    {
                        outtextxy(1081,17,"1");
                    }
                    else if(oldbas == 0)
                    {
                        outtextxy(1081,17,"0");
                    }
                    else if(oldbas == 2)
                    {
                        outtextxy(1081,17,"2");
                    }
                    else if(oldbas == 3)
                    {
                        outtextxy(1081,17,"3");
                    }
                    else if(oldbas == 4)
                    {
                        outtextxy(1081,17,"4");
                    }
                    else if(oldbas == 5)
                    {
                        outtextxy(1081,17,"5");
                    }
                    else if(oldbas == 6)
                    {
                        outtextxy(1081,17,"6");
                    }
                    else if(oldbas == 7)
                    {
                        outtextxy(1081,17,"7");
                    }
                    else if(oldbas == 8)
                    {
                        outtextxy(1081,17,"8");
                    }
                    else if(oldbas == 9)
                    {
                        outtextxy(1081,17,"9");
                    }
                }
                else // sayi 1 basamakli
                {
                    oldbas = sayi;
                    if(oldbas == 1)
                    {
                        outtextxy(1073,17,"1");
                    }
                    else if(oldbas == 0)
                    {
                        outtextxy(1073,17,"0");
                    }
                    else if(oldbas == 2)
                    {
                        outtextxy(1073,17,"2");
                    }
                    else if(oldbas == 3)
                    {
                        outtextxy(1073,17,"3");
                    }
                    else if(oldbas == 4)
                    {
                        outtextxy(1073,17,"4");
                    }
                    else if(oldbas == 5)
                    {
                        outtextxy(1073,17,"5");
                    }
                    else if(oldbas == 6)
                    {
                        outtextxy(1073,17,"6");
                    }
                    else if(oldbas == 7)
                    {
                        outtextxy(1073,17,"7");
                    }
                    else if(oldbas == 8)
                    {
                        outtextxy(1073,17,"8");
                    }
                    else if(oldbas == 9)
                    {
                        outtextxy(1073,17,"9");
                    }
                }

            }





            j=i;
            do
            {

                j=pred[j];
                if(j == 0)
                {
                    oncekix = 450;
                    oncekiy = 330;
                }
                else if(j == 1)
                {
                    oncekix = 350;
                    oncekiy = 337;
                }
                else if(j == 2)
                {
                    oncekix = 390;
                    oncekiy = 242;
                }
                else if(j == 3)
                {
                    oncekix = 500;
                    oncekiy = 234;
                }
                else if(j == 4)
                {
                    oncekix = 550;
                    oncekiy = 363;
                }
                else if(j == 5)
                {
                    oncekix = 530;
                    oncekiy = 312;
                }
                else if(j == 6)
                {
                    oncekix = 540;
                    oncekiy = 441;
                }
                else if(j == 7)
                {
                    oncekix = 445;
                    oncekiy = 482;
                }
                else if(j == 8)
                {
                    oncekix = 319;
                    oncekiy = 437;
                }
                else if(j == 9)
                {
                    oncekix = 250;
                    oncekiy = 360;
                }
                else if(j == 10)
                {
                    oncekix = 285;
                    oncekiy = 292;
                }
                else if(j == 11)
                {
                    oncekix = 535;
                    oncekiy = 168;
                }
                else if(j == 12)
                {
                    oncekix = 450;
                    oncekiy = 190;
                }
                else if(j == 13)
                {
                    oncekix = 603;
                    oncekiy = 242;
                }
                else if(j == 14)
                {
                    oncekix = 642;
                    oncekiy = 337;
                }
                else if(j == 15)
                {
                    oncekix = 600;
                    oncekiy = 406;
                }
                else if(j == 16)
                {
                    oncekix = 683;
                    oncekiy = 440;
                }
                else if(j == 17)
                {
                    oncekix = 602;
                    oncekiy = 496;
                }
                else if(j == 18)
                {
                    oncekix = 332;
                    oncekiy = 492;
                }
                else if(j == 19)
                {
                    oncekix = 407;
                    oncekiy = 603;
                }
                else if(j == 20)
                {
                    oncekix = 500;
                    oncekiy = 580;
                }
                else if(j == 21)
                {
                    oncekix = 535;
                    oncekiy = 605;
                }


                setcolor(14);
                line(sonrakix +1,sonrakiy,oncekix+1,oncekiy);
                line(sonrakix-1,sonrakiy,oncekix-1,oncekiy);
                line(sonrakix,sonrakiy+1,oncekix,oncekiy+1);
                line(sonrakix,sonrakiy-1,oncekix,oncekiy-1);
                line(sonrakix,sonrakiy,oncekix,oncekiy);
                sonrakix = oncekix;
                sonrakiy = oncekiy;

                setcolor(0);
                printf("<-%d",j);


            }
            while(j!=start);



        }

}


void ekran()
{
    int poly[8];
    int x,y;

    bar(0,0,1300,700);
    setcolor(0);
    line(0,49,1300,49);
    readimagefile("tr.jpg",0,50,1300,800);
    setfillstyle(1,0);

    x = 440; /// Ankara
    y = 320;
    poly[0] = x;
    poly[1] = y;
    poly[2] = x+20;
    poly[3] = y;
    poly[4] = x+20;
    poly[5] = y+20;
    poly[6] = x;
    poly[7] = y+20;
    fillpoly(4, poly);

    x = 340; /// Eskisehir
    y = 327;
    poly[0] = x;
    poly[1] = y;
    poly[2] = x+20;
    poly[3] = y;
    poly[4] = x+20;
    poly[5] = y+20;
    poly[6] = x;
    poly[7] = y+20;
    fillpoly(4, poly);

    x = 380; /// Bolu
    y = 232;
    poly[0] = x;
    poly[1] = y;
    poly[2] = x+20;
    poly[3] = y;
    poly[4] = x+20;
    poly[5] = y+20;
    poly[6] = x;
    poly[7] = y+20;
    fillpoly(4, poly);

    x = 490; /// Cankiri
    y = 224;
    poly[0] = x;
    poly[1] = y;
    poly[2] = x+20;
    poly[3] = y;
    poly[4] = x+20;
    poly[5] = y+20;
    poly[6] = x;
    poly[7] = y+20;
    fillpoly(4, poly);

    x = 540; /// Kirsehir
    y = 353;
    poly[0] = x;
    poly[1] = y;
    poly[2] = x+20;
    poly[3] = y;
    poly[4] = x+20;
    poly[5] = y+20;
    poly[6] = x;
    poly[7] = y+20;
    fillpoly(4, poly);

    x = 520; /// Kirikkale
    y = 302;
    poly[0] = x;
    poly[1] = y;
    poly[2] = x+20;
    poly[3] = y;
    poly[4] = x+20;
    poly[5] = y+20;
    poly[6] = x;
    poly[7] = y+20;
    fillpoly(4, poly);

    x = 530; /// Aksaray
    y = 431;
    poly[0] = x;
    poly[1] = y;
    poly[2] = x+20;
    poly[3] = y;
    poly[4] = x+20;
    poly[5] = y+20;
    poly[6] = x;
    poly[7] = y+20;
    fillpoly(4, poly);

    x = 435; /// Konya
    y = 472;
    poly[0] = x;
    poly[1] = y;
    poly[2] = x+20;
    poly[3] = y;
    poly[4] = x+20;
    poly[5] = y+20;
    poly[6] = x;
    poly[7] = y+20;
    fillpoly(4, poly);

    x = 309; /// Afyon
    y = 427;
    poly[0] = x;
    poly[1] = y;
    poly[2] = x+20;
    poly[3] = y;
    poly[4] = x+20;
    poly[5] = y+20;
    poly[6] = x;
    poly[7] = y+20;
    fillpoly(4, poly);

    x = 240; /// Kutahya
    y = 350;
    poly[0] = x;
    poly[1] = y;
    poly[2] = x+20;
    poly[3] = y;
    poly[4] = x+20;
    poly[5] = y+20;
    poly[6] = x;
    poly[7] = y+20;
    fillpoly(4, poly);

    x = 275; /// Bilecik
    y = 282;
    poly[0] = x;
    poly[1] = y;
    poly[2] = x+20;
    poly[3] = y;
    poly[4] = x+20;
    poly[5] = y+20;
    poly[6] = x;
    poly[7] = y+20;
    fillpoly(4, poly);

    x = 525; /// Kastamonu
    y = 158;
    poly[0] = x;
    poly[1] = y;
    poly[2] = x+20;
    poly[3] = y;
    poly[4] = x+20;
    poly[5] = y+20;
    poly[6] = x;
    poly[7] = y+20;
    fillpoly(4, poly);

    x = 440; /// Karabuk
    y = 180;
    poly[0] = x;
    poly[1] = y;
    poly[2] = x+20;
    poly[3] = y;
    poly[4] = x+20;
    poly[5] = y+20;
    poly[6] = x;
    poly[7] = y+20;
    fillpoly(4, poly);

    x = 593; /// Corum
    y = 232;
    poly[0] = x;
    poly[1] = y;
    poly[2] = x+20;
    poly[3] = y;
    poly[4] = x+20;
    poly[5] = y+20;
    poly[6] = x;
    poly[7] = y+20;
    fillpoly(4, poly);

    x = 632; /// Yozgat
    y = 327;
    poly[0] = x;
    poly[1] = y;
    poly[2] = x+20;
    poly[3] = y;
    poly[4] = x+20;
    poly[5] = y+20;
    poly[6] = x;
    poly[7] = y+20;
    fillpoly(4, poly);

    x = 590; /// Nevsehir
    y = 396;
    poly[0] = x;
    poly[1] = y;
    poly[2] = x+20;
    poly[3] = y;
    poly[4] = x+20;
    poly[5] = y+20;
    poly[6] = x;
    poly[7] = y+20;
    fillpoly(4, poly);

    x = 673; /// Kayseri
    y = 430;
    poly[0] = x;
    poly[1] = y;
    poly[2] = x+20;
    poly[3] = y;
    poly[4] = x+20;
    poly[5] = y+20;
    poly[6] = x;
    poly[7] = y+20;
    fillpoly(4, poly);

    x = 592; /// Nigde
    y = 486;
    poly[0] = x;
    poly[1] = y;
    poly[2] = x+20;
    poly[3] = y;
    poly[4] = x+20;
    poly[5] = y+20;
    poly[6] = x;
    poly[7] = y+20;
    fillpoly(4, poly);

    x = 322; /// Isparta
    y = 482;
    poly[0] = x;
    poly[1] = y;
    poly[2] = x+20;
    poly[3] = y;
    poly[4] = x+20;
    poly[5] = y+20;
    poly[6] = x;
    poly[7] = y+20;
    fillpoly(4, poly);

    x = 397; /// Antalya
    y = 593;
    poly[0] = x;
    poly[1] = y;
    poly[2] = x+20;
    poly[3] = y;
    poly[4] = x+20;
    poly[5] = y+20;
    poly[6] = x;
    poly[7] = y+20;
    fillpoly(4, poly);

    x = 490; /// Karaman
    y = 570;
    poly[0] = x;
    poly[1] = y;
    poly[2] = x+20;
    poly[3] = y;
    poly[4] = x+20;
    poly[5] = y+20;
    poly[6] = x;
    poly[7] = y+20;
    fillpoly(4, poly);

    x = 525; /// Mersin
    y = 595;
    poly[0] = x;
    poly[1] = y;
    poly[2] = x+20;
    poly[3] = y;
    poly[4] = x+20;
    poly[5] = y+20;
    poly[6] = x;
    poly[7] = y+20;
    fillpoly(4, poly);

    line(450,330,350,337);
    line(450,330,390,242);
    line(450,330,500,234);
    line(450,330,530,312);
    line(450,330,550,363);
    line(450,330,540,441);
    line(450,330,445,482);
    line(350,337,319,437);
    line(350,337,250,360);
    line(350,337,285,292);
    line(500,234,535,168);
    line(500,234,450,190);
    line(500,234,390,242);
    line(500,234,603,242);
    line(500,234,530,312);
    line(550,363,642,337);
    line(550,363,600,406);
    line(550,363,540,441);
    line(600,406,683,440);
    line(600,406,602,496);
    line(600,406,642,337);
    line(600,406,540,441);
    line(445,482,332,492);
    line(445,482,319,437);
    line(445,482,407,603);
    line(445,482,500,580);
    line(445,482,535,605);
    line(445,482,602,496);
    line(445,482,540,441);

    line(150,0,150,50);
    line(300,0,300,50);
    line(1000,0,1000,50);
    line(1150,0,1150,50);
    setbkcolor(15);
    outtextxy(50,17,"START");
    outtextxy(205,17,"FINISH");
    outtextxy(1185,17,"CALCULATE");


}

void tikla()
{
    int i, num, j;
    FILE * dosya = fopen("d:/sehir mesafe.txt","r");
    if (dosya == NULL)
    {
        printf("HATA : dosya acilamadi");
        exit(1);
    }
    char s1[3] = {'!','!','!'};
    int n1[29];
    char  c;
    i = 0;
    for(c = fgetc(dosya); c != EOF; c = fgetc(dosya))
    {
        if(c == '-')
        {
            c = fgetc(dosya);
            if(isdigit(c))
            {
                s1[0] = c;
                c = fgetc(dosya);
                if(isdigit(c))
                {
                    s1[1] = c;
                    c = fgetc(dosya);
                    if(isdigit(c))
                    {
                        s1[2] = c;
                        num = atoi(s1);
                        n1[i] = num;
                        i++;
                    }
                    else if(c == '\n')
                    {
                        s1[2] = '0';
                        num = atoi(s1);
                        num = num / 10;
                        n1[i] = num;
                        i++;
                    }
                }
                else if(c == '\n')
                {
                    s1[1] = '0';
                    s1[2] = '0';
                    num = atoi(s1);
                    num = num / 100;
                    n1[i] = num;
                    i++;
                }
            }
        }
        s1[0] = '!';
        s1[1] = '!';
        s1[2] = '!';
    }
    int tikx,tiky,x,y,sx = 0,sy = 0,fx = 0,fy = 0,start = 0,finish = 0,n = 22;
    int turkiye[22][22];
    for(i = 0; i < 22; i++)
    {
        for(j = 0; j < 22; j++)
        {
            turkiye[i][j] = 0;
        }
    }
    turkiye[0][1] = n1[0];
    turkiye[1][0] = n1[0];
    turkiye[0][2] = n1[1];
    turkiye[2][0] = n1[1];
    turkiye[0][3] = n1[2];
    turkiye[3][0] = n1[2];
    turkiye[0][4] = n1[4];
    turkiye[4][0] = n1[4];
    turkiye[0][5] = n1[3];
    turkiye[5][0] = n1[3];
    turkiye[0][6] = n1[5];
    turkiye[6][0] = n1[5];
    turkiye[0][7] = n1[6];
    turkiye[7][0] = n1[6];
    turkiye[1][8] = n1[7];
    turkiye[8][1] = n1[7];
    turkiye[1][9] = n1[8];
    turkiye[9][1] = n1[8];
    turkiye[1][10] = n1[9];
    turkiye[10][1] = n1[9];
    turkiye[2][3] = n1[12];
    turkiye[3][2] = n1[12];
    turkiye[3][5] = n1[14];
    turkiye[5][3] = n1[14];
    turkiye[4][6] = n1[17];
    turkiye[6][4] = n1[17];
    turkiye[6][7] = n1[28];
    turkiye[7][6] = n1[28];
    turkiye[7][8] = n1[22];
    turkiye[8][7] = n1[22];
    turkiye[3][11] = n1[10];
    turkiye[11][3] = n1[10];
    turkiye[3][12] = n1[11];
    turkiye[12][3] = n1[11];
    turkiye[3][13] = n1[13];
    turkiye[13][3] = n1[13];
    turkiye[4][14] = n1[15];
    turkiye[14][4] = n1[15];
    turkiye[4][15] = n1[16];
    turkiye[15][4] = n1[16];
    turkiye[6][15] = n1[21];
    turkiye[15][6] = n1[21];
    turkiye[7][17] = n1[27];
    turkiye[17][7] = n1[27];
    turkiye[7][18] = n1[23];
    turkiye[18][7] = n1[23];
    turkiye[7][19] = n1[24];
    turkiye[19][7] = n1[24];
    turkiye[7][20] = n1[25];
    turkiye[20][7] = n1[25];
    turkiye[7][21] = n1[26];
    turkiye[21][7] = n1[26];
    turkiye[14][15] = n1[20];
    turkiye[15][14] = n1[20];
    turkiye[16][15] = n1[18];
    turkiye[15][16] = n1[18];
    turkiye[17][15] = n1[19];
    turkiye[15][17] = n1[19];

    int poly[8];
    char emr,onceki_emr;
    while(1)
    {
        clearmouseclick(WM_LBUTTONDOWN);
        if(ismouseclick(WM_LBUTTONDOWN))
        {
            tikx = mousex();
            tiky = mousey();
            clearmouseclick(WM_LBUTTONDOWN);
            if(tikx > 0 && tikx < 150 && tiky > 0 && tiky < 50) /// START
            {
                for(i = 301 ; i < 1000 ; i++)
                {
                    for(j = 1 ; j < 49 ; j++)
                    {
                        putpixel(i,j,15);
                    }
                }
                emr = 's';
                outtextxy(555,17,"Baslangic noktasina tiklayiniz.");
                onceki_emr = 's';
            }
            else if(tikx > 150 && tikx < 300 && tiky > 0 && tiky < 50) /// FINISH
            {
                for(i = 301 ; i < 1000 ; i++)
                {
                    for(j = 1 ; j < 49 ; j++)
                    {
                        putpixel(i,j,15);
                    }
                }
                emr = 'f';
                outtextxy(570,17,"Bitis noktasina tiklayiniz.");
                onceki_emr = 'f';
            }
            else if(tikx > 1150 && tikx < 1300 && tiky > 0 && tiky < 50) /// CALCULATE
            {
                dijkstra(turkiye,start,finish);
                for(i = 301 ; i < 1000 ; i++)
                {

                    for(j = 1 ; j < 49 ; j++)
                    {
                        putpixel(i,j,15);
                    }
                }
                if(onceki_emr == 'f' || onceki_emr == 's')
                {
                    outtextxy(570,17,"En kisa yol hesaplanmistir.");
                    delay(5000);
                    for(i = 1001 ; i < 1150 ; i++)
                {
                    for(j = 1 ; j < 49 ; j++)
                    {
                        putpixel(i,j,15);
                    }
                }
                    setcolor(0);
                    readimagefile("tr.jpg",0,50,1300,800);
                    setfillstyle(1,0);
                    x = 440; /// Ankara
                    y = 320;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);

                    x = 340; /// Eskisehir
                    y = 327;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);

                    x = 380; /// Bolu
                    y = 232;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);

                    x = 490; /// Cankiri
                    y = 224;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);

                    x = 540; /// Kirsehir
                    y = 353;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);

                    x = 520; /// Kirikkale
                    y = 302;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);

                    x = 530; /// Aksaray
                    y = 431;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);

                    x = 435; /// Konya
                    y = 472;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);

                    x = 309; /// Afyon
                    y = 427;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);

                    x = 240; /// Kutahya
                    y = 350;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);

                    x = 275; /// Bilecik
                    y = 282;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);

                    x = 525; /// Kastamonu
                    y = 158;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);

                    x = 440; /// Karabuk
                    y = 180;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);

                    x = 593; /// Corum
                    y = 232;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);

                    x = 632; /// Yozgat
                    y = 327;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);

                    x = 590; /// Nevsehir
                    y = 396;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);

                    x = 673; /// Kayseri
                    y = 430;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);

                    x = 592; /// Nigde
                    y = 486;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);

                    x = 322; /// Isparta
                    y = 482;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);

                    x = 397; /// Antalya
                    y = 593;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);

                    x = 490; /// Karaman
                    y = 570;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);

                    x = 525; /// Mersin
                    y = 595;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);
                    line(450,330,350,337);
                    line(450,330,390,242);
                    line(450,330,500,234);
                    line(450,330,530,312);
                    line(450,330,550,363);
                    line(450,330,540,441);
                    line(450,330,445,482);
                    line(350,337,319,437);
                    line(350,337,250,360);
                    line(350,337,285,292);
                    line(500,234,535,168);
                    line(500,234,450,190);
                    line(500,234,390,242);
                    line(500,234,603,242);
                    line(500,234,530,312);
                    line(550,363,642,337);
                    line(550,363,600,406);
                    line(550,363,540,441);
                    line(600,406,683,440);
                    line(600,406,602,496);
                    line(600,406,642,337);
                    line(600,406,540,441);
                    line(445,482,332,492);
                    line(445,482,319,437);
                    line(445,482,407,603);
                    line(445,482,500,580);
                    line(445,482,535,605);
                    line(445,482,602,496);
                    line(445,482,540,441);
                    setfillstyle(1,4);
                    x = fx;
                    y = fy;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);
                    x = sx;
                    y = sy;
                    setfillstyle(1,2);
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);

                    for(i = 301 ; i < 1000 ; i++)
                    {
                        for(j = 1 ; j < 49 ; j++)
                        {
                            putpixel(i,j,15);
                        }
                    }
                }
                if(onceki_emr == 's')
                {
                    outtextxy(555,17,"Baslangic noktasina tiklayiniz.");
                }
                else if(onceki_emr == 'f')
                {
                    outtextxy(570,17,"Bitis noktasina tiklayiniz.");
                }
            }
            else if(tikx > 440 && tikx < 460 && tiky > 320 && tiky < 340) /// Ankara
            {
                if(emr == 's')
                {
                    if(sx != 0)
                    {
                        setfillstyle(1,0);
                        x = sx;
                        y = sy;
                        poly[0] = x;
                        poly[1] = y;
                        poly[2] = x+20;
                        poly[3] = y;
                        poly[4] = x+20;
                        poly[5] = y+20;
                        poly[6] = x;
                        poly[7] = y+20;
                        fillpoly(4, poly);
                    }

                    setfillstyle(1,2);

                    x = 440; /// Ankara
                    y = 320;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);
                    sx = x;
                    sy = y;
                    start = 0;
                }
                else if(emr == 'f')
                {
                    if(fy != 0)
                    {
                        setfillstyle(1,0);
                        x = fx;
                        y = fy;
                        poly[0] = x;
                        poly[1] = y;
                        poly[2] = x+20;
                        poly[3] = y;
                        poly[4] = x+20;
                        poly[5] = y+20;
                        poly[6] = x;
                        poly[7] = y+20;
                        fillpoly(4, poly);
                    }

                    setfillstyle(1,4);

                    x = 440; /// Ankara
                    y = 320;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);
                    fx = x;
                    fy = y;
                    finish = 0;
                }
            }
            else if(tikx > 340 && tikx < 360 && tiky > 327 && tiky < 347) /// Eskisehir
            {
                if(emr == 's')
                {
                    if(sx != 0)
                    {
                        setfillstyle(1,0);
                        x = sx;
                        y = sy;
                        poly[0] = x;
                        poly[1] = y;
                        poly[2] = x+20;
                        poly[3] = y;
                        poly[4] = x+20;
                        poly[5] = y+20;
                        poly[6] = x;
                        poly[7] = y+20;
                        fillpoly(4, poly);
                    }

                    setfillstyle(1,2);

                    x = 340; /// Eskisehir
                    y = 327;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);
                    sx = x;
                    sy = y;
                    start = 1;
                }
                else if(emr == 'f')
                {
                    if(fx != 0)
                    {
                        setfillstyle(1,0);
                        x = fx;
                        y = fy;
                        poly[0] = x;
                        poly[1] = y;
                        poly[2] = x+20;
                        poly[3] = y;
                        poly[4] = x+20;
                        poly[5] = y+20;
                        poly[6] = x;
                        poly[7] = y+20;
                        fillpoly(4, poly);
                    }

                    setfillstyle(1,4);

                    x = 340; /// Eskisehir
                    y = 327;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);
                    fx = x;
                    fy = y;
                    finish = 1;
                }
            }
            else if(tikx > 380 && tikx < 400 && tiky > 232 && tiky < 252) ///Bolu
            {
                if(emr == 's')
                {
                    if(sx != 0)
                    {
                        setfillstyle(1,0);
                        x = sx;
                        y = sy;
                        poly[0] = x;
                        poly[1] = y;
                        poly[2] = x+20;
                        poly[3] = y;
                        poly[4] = x+20;
                        poly[5] = y+20;
                        poly[6] = x;
                        poly[7] = y+20;
                        fillpoly(4, poly);
                    }

                    setfillstyle(1,2);

                    x = 380; /// Bolu
                    y = 232;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);
                    sx = x;
                    sy = y;
                    start = 2;
                }
                else if(emr == 'f')
                {
                    if(fx != 0)
                    {
                        setfillstyle(1,0);
                        x = fx;
                        y = fy;
                        poly[0] = x;
                        poly[1] = y;
                        poly[2] = x+20;
                        poly[3] = y;
                        poly[4] = x+20;
                        poly[5] = y+20;
                        poly[6] = x;
                        poly[7] = y+20;
                        fillpoly(4, poly);
                    }

                    setfillstyle(1,4);

                    x = 380; /// Bolu
                    y = 232;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);
                    fx = x;
                    fy = y;
                    finish = 2;
                }
            }
            else if(tikx > 490 && tikx < 510 && tiky > 224 && tiky < 244) ///Cankiri
            {
                if(emr == 's')
                {
                    if(sx != 0)
                    {
                        setfillstyle(1,0);
                        x = sx;
                        y = sy;
                        poly[0] = x;
                        poly[1] = y;
                        poly[2] = x+20;
                        poly[3] = y;
                        poly[4] = x+20;
                        poly[5] = y+20;
                        poly[6] = x;
                        poly[7] = y+20;
                        fillpoly(4, poly);
                    }

                    setfillstyle(1,2);

                    x = 490; /// Cankiri
                    y = 224;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);
                    sx = x;
                    sy = y;
                    start = 3;
                }
                else if(emr == 'f')
                {
                    if(fx != 0)
                    {
                        setfillstyle(1,0);
                        x = fx;
                        y = fy;
                        poly[0] = x;
                        poly[1] = y;
                        poly[2] = x+20;
                        poly[3] = y;
                        poly[4] = x+20;
                        poly[5] = y+20;
                        poly[6] = x;
                        poly[7] = y+20;
                        fillpoly(4, poly);
                    }

                    setfillstyle(1,4);

                    x = 490; /// Cankiri
                    y = 224;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);
                    fx = x;
                    fy = y;
                    finish = 3;
                }
            }
            else if(tikx > 540 && tikx < 560 && tiky > 353 && tiky < 373) ///Kirsehir
            {
                if(emr == 's')
                {
                    if(sx != 0)
                    {
                        setfillstyle(1,0);
                        x = sx;
                        y = sy;
                        poly[0] = x;
                        poly[1] = y;
                        poly[2] = x+20;
                        poly[3] = y;
                        poly[4] = x+20;
                        poly[5] = y+20;
                        poly[6] = x;
                        poly[7] = y+20;
                        fillpoly(4, poly);
                    }

                    setfillstyle(1,2);

                    x = 540; /// Kirsehir
                    y = 353;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);
                    sx = x;
                    sy = y;
                    start = 4;
                }
                else if(emr == 'f')
                {
                    if(fx != 0)
                    {
                        setfillstyle(1,0);
                        x = fx;
                        y = fy;
                        poly[0] = x;
                        poly[1] = y;
                        poly[2] = x+20;
                        poly[3] = y;
                        poly[4] = x+20;
                        poly[5] = y+20;
                        poly[6] = x;
                        poly[7] = y+20;
                        fillpoly(4, poly);
                    }

                    setfillstyle(1,4);

                    x = 540; /// Kirsehir
                    y = 353;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);
                    fx = x;
                    fy = y;
                    finish = 4;
                }
            }
            else if(tikx > 520 && tikx < 540 && tiky > 302 && tiky < 322) ///Kirikkale
            {
                if(emr == 's')
                {
                    if(sx != 0)
                    {
                        setfillstyle(1,0);
                        x = sx;
                        y = sy;
                        poly[0] = x;
                        poly[1] = y;
                        poly[2] = x+20;
                        poly[3] = y;
                        poly[4] = x+20;
                        poly[5] = y+20;
                        poly[6] = x;
                        poly[7] = y+20;
                        fillpoly(4, poly);
                    }

                    setfillstyle(1,2);

                    x = 520; /// Kirikkale
                    y = 302;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);
                    sx = x;
                    sy = y;
                    start = 5;
                }
                else if(emr == 'f')
                {
                    if(fx != 0)
                    {
                        setfillstyle(1,0);
                        x = fx;
                        y = fy;
                        poly[0] = x;
                        poly[1] = y;
                        poly[2] = x+20;
                        poly[3] = y;
                        poly[4] = x+20;
                        poly[5] = y+20;
                        poly[6] = x;
                        poly[7] = y+20;
                        fillpoly(4, poly);
                    }

                    setfillstyle(1,4);

                    x = 520; /// Kirikkale
                    y = 302;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);
                    fx = x;
                    fy = y;
                    finish = 5;
                }
            }
            else if(tikx > 530 && tikx < 550 && tiky > 431 && tiky < 451) ///Aksaray
            {
                if(emr == 's')
                {
                    if(sx != 0)
                    {
                        setfillstyle(1,0);
                        x = sx;
                        y = sy;
                        poly[0] = x;
                        poly[1] = y;
                        poly[2] = x+20;
                        poly[3] = y;
                        poly[4] = x+20;
                        poly[5] = y+20;
                        poly[6] = x;
                        poly[7] = y+20;
                        fillpoly(4, poly);
                    }

                    setfillstyle(1,2);

                    x = 530; /// Aksaray
                    y = 431;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);
                    sx = x;
                    sy = y;
                    start = 6;
                }
                else if(emr == 'f')
                {
                    if(fx != 0)
                    {
                        setfillstyle(1,0);
                        x = fx;
                        y = fy;
                        poly[0] = x;
                        poly[1] = y;
                        poly[2] = x+20;
                        poly[3] = y;
                        poly[4] = x+20;
                        poly[5] = y+20;
                        poly[6] = x;
                        poly[7] = y+20;
                        fillpoly(4, poly);
                    }

                    setfillstyle(1,4);

                    x = 530; /// Aksaray
                    y = 431;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);
                    fx = x;
                    fy = y;
                    finish = 6;
                }
            }
            else if(tikx > 435 && tikx < 455 && tiky > 472 && tiky < 492) ///Konya
            {
                if(emr == 's')
                {
                    if(sx != 0)
                    {
                        setfillstyle(1,0);
                        x = sx;
                        y = sy;
                        poly[0] = x;
                        poly[1] = y;
                        poly[2] = x+20;
                        poly[3] = y;
                        poly[4] = x+20;
                        poly[5] = y+20;
                        poly[6] = x;
                        poly[7] = y+20;
                        fillpoly(4, poly);
                    }

                    setfillstyle(1,2);

                    x = 435; /// Konya
                    y = 472;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);
                    sx = x;
                    sy = y;
                    start = 7;
                }
                else if(emr == 'f')
                {
                    if(fx != 0)
                    {
                        setfillstyle(1,0);
                        x = fx;
                        y = fy;
                        poly[0] = x;
                        poly[1] = y;
                        poly[2] = x+20;
                        poly[3] = y;
                        poly[4] = x+20;
                        poly[5] = y+20;
                        poly[6] = x;
                        poly[7] = y+20;
                        fillpoly(4, poly);
                    }

                    setfillstyle(1,4);

                    x = 435; /// Konya
                    y = 472;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);
                    fx = x;
                    fy = y;
                    finish = 7;
                }
            }
            else if(tikx > 309 && tikx < 329 && tiky > 427 && tiky < 447) ///Afyon
            {
                if(emr == 's')
                {
                    if(sx != 0)
                    {
                        setfillstyle(1,0);
                        x = sx;
                        y = sy;
                        poly[0] = x;
                        poly[1] = y;
                        poly[2] = x+20;
                        poly[3] = y;
                        poly[4] = x+20;
                        poly[5] = y+20;
                        poly[6] = x;
                        poly[7] = y+20;
                        fillpoly(4, poly);
                    }

                    setfillstyle(1,2);

                    x = 309; /// Afyon
                    y = 427;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);
                    sx = x;
                    sy = y;
                    start = 8;
                }
                else if(emr == 'f')
                {
                    if(fx != 0)
                    {
                        setfillstyle(1,0);
                        x = fx;
                        y = fy;
                        poly[0] = x;
                        poly[1] = y;
                        poly[2] = x+20;
                        poly[3] = y;
                        poly[4] = x+20;
                        poly[5] = y+20;
                        poly[6] = x;
                        poly[7] = y+20;
                        fillpoly(4, poly);
                    }

                    setfillstyle(1,4);

                    x = 309; /// Afyon
                    y = 427;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);
                    fx = x;
                    fy = y;
                    finish = 8;
                }
            }
            else if(tikx > 240 && tikx < 260 && tiky > 350 && tiky < 370) ///Kutahya
            {
                if(emr == 's')
                {
                    if(sx != 0)
                    {
                        setfillstyle(1,0);
                        x = sx;
                        y = sy;
                        poly[0] = x;
                        poly[1] = y;
                        poly[2] = x+20;
                        poly[3] = y;
                        poly[4] = x+20;
                        poly[5] = y+20;
                        poly[6] = x;
                        poly[7] = y+20;
                        fillpoly(4, poly);
                    }

                    setfillstyle(1,2);

                    x = 240; /// Kutahya
                    y = 350;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);
                    sx = x;
                    sy = y;
                    start = 9;
                }
                else if(emr == 'f')
                {
                    if(fx != 0)
                    {
                        setfillstyle(1,0);
                        x = fx;
                        y = fy;
                        poly[0] = x;
                        poly[1] = y;
                        poly[2] = x+20;
                        poly[3] = y;
                        poly[4] = x+20;
                        poly[5] = y+20;
                        poly[6] = x;
                        poly[7] = y+20;
                        fillpoly(4, poly);
                    }

                    setfillstyle(1,4);

                    x = 240; /// Kutahya
                    y = 350;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);
                    fx = x;
                    fy = y;
                    finish = 9;
                }
            }
            else if(tikx > 275 && tikx < 295 && tiky > 282 && tiky < 302) ///Bilecik
            {
                if(emr == 's')
                {
                    if(sx != 0)
                    {
                        setfillstyle(1,0);
                        x = sx;
                        y = sy;
                        poly[0] = x;
                        poly[1] = y;
                        poly[2] = x+20;
                        poly[3] = y;
                        poly[4] = x+20;
                        poly[5] = y+20;
                        poly[6] = x;
                        poly[7] = y+20;
                        fillpoly(4, poly);
                    }

                    setfillstyle(1,2);

                    x = 275; /// Bilecik
                    y = 282;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);
                    sx = x;
                    sy = y;
                    start = 10;
                }
                else if(emr == 'f')
                {
                    if(fx != 0)
                    {
                        setfillstyle(1,0);
                        x = fx;
                        y = fy;
                        poly[0] = x;
                        poly[1] = y;
                        poly[2] = x+20;
                        poly[3] = y;
                        poly[4] = x+20;
                        poly[5] = y+20;
                        poly[6] = x;
                        poly[7] = y+20;
                        fillpoly(4, poly);
                    }

                    setfillstyle(1,4);

                    x = 275; /// Bilecik
                    y = 282;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);
                    fx = x;
                    fy = y;
                    finish = 10;
                }
            }
            else if(tikx > 525 && tikx < 545 && tiky > 158 && tiky < 178) ///Kastamonu
            {
                if(emr == 's')
                {
                    if(sx != 0)
                    {
                        setfillstyle(1,0);
                        x = sx;
                        y = sy;
                        poly[0] = x;
                        poly[1] = y;
                        poly[2] = x+20;
                        poly[3] = y;
                        poly[4] = x+20;
                        poly[5] = y+20;
                        poly[6] = x;
                        poly[7] = y+20;
                        fillpoly(4, poly);
                    }

                    setfillstyle(1,2);

                    x = 525; /// Kastamonu
                    y = 158;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);
                    sx = x;
                    sy = y;
                    start = 11;
                }
                else if(emr == 'f')
                {
                    if(fx != 0)
                    {
                        setfillstyle(1,0);
                        x = fx;
                        y = fy;
                        poly[0] = x;
                        poly[1] = y;
                        poly[2] = x+20;
                        poly[3] = y;
                        poly[4] = x+20;
                        poly[5] = y+20;
                        poly[6] = x;
                        poly[7] = y+20;
                        fillpoly(4, poly);
                    }

                    setfillstyle(1,4);

                    x = 525; /// Kastamonu
                    y = 158;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);
                    fx = x;
                    fy = y;
                    finish = 11;
                }
            }
            else if(tikx > 440 && tikx < 460 && tiky > 180 && tiky < 200) ///Karabuk
            {
                if(emr == 's')
                {
                    if(sx != 0)
                    {
                        setfillstyle(1,0);
                        x = sx;
                        y = sy;
                        poly[0] = x;
                        poly[1] = y;
                        poly[2] = x+20;
                        poly[3] = y;
                        poly[4] = x+20;
                        poly[5] = y+20;
                        poly[6] = x;
                        poly[7] = y+20;
                        fillpoly(4, poly);
                    }

                    setfillstyle(1,2);

                    x = 440; /// Karabuk
                    y = 180;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);
                    sx = x;
                    sy = y;
                    start = 12;
                }
                else if(emr == 'f')
                {
                    if(fx != 0)
                    {
                        setfillstyle(1,0);
                        x = fx;
                        y = fy;
                        poly[0] = x;
                        poly[1] = y;
                        poly[2] = x+20;
                        poly[3] = y;
                        poly[4] = x+20;
                        poly[5] = y+20;
                        poly[6] = x;
                        poly[7] = y+20;
                        fillpoly(4, poly);
                    }

                    setfillstyle(1,4);

                    x = 440; /// Karabuk
                    y = 180;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);
                    fx = x;
                    fy = y;
                    finish = 12;
                }
            }
            else if(tikx > 593 && tikx < 613 && tiky > 232 && tiky < 252) ///Corum
            {
                if(emr == 's')
                {
                    if(sx != 0)
                    {
                        setfillstyle(1,0);
                        x = sx;
                        y = sy;
                        poly[0] = x;
                        poly[1] = y;
                        poly[2] = x+20;
                        poly[3] = y;
                        poly[4] = x+20;
                        poly[5] = y+20;
                        poly[6] = x;
                        poly[7] = y+20;
                        fillpoly(4, poly);
                    }

                    setfillstyle(1,2);

                    x = 593; /// Corum
                    y = 232;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);
                    sx = x;
                    sy = y;
                    start = 13;
                }
                else if(emr == 'f')
                {
                    if(fx != 0)
                    {
                        setfillstyle(1,0);
                        x = fx;
                        y = fy;
                        poly[0] = x;
                        poly[1] = y;
                        poly[2] = x+20;
                        poly[3] = y;
                        poly[4] = x+20;
                        poly[5] = y+20;
                        poly[6] = x;
                        poly[7] = y+20;
                        fillpoly(4, poly);
                    }

                    setfillstyle(1,4);

                    x = 593; /// Corum
                    y = 232;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);
                    fx = x;
                    fy = y;
                    finish = 13;
                }
            }
            else if(tikx > 632 && tikx < 652 && tiky > 327 && tiky < 347) ///Yozgat
            {
                if(emr == 's')
                {
                    if(sx != 0)
                    {
                        setfillstyle(1,0);
                        x = sx;
                        y = sy;
                        poly[0] = x;
                        poly[1] = y;
                        poly[2] = x+20;
                        poly[3] = y;
                        poly[4] = x+20;
                        poly[5] = y+20;
                        poly[6] = x;
                        poly[7] = y+20;
                        fillpoly(4, poly);
                    }

                    setfillstyle(1,2);

                    x = 632; /// Yozgat
                    y = 327;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);
                    sx = x;
                    sy = y;
                    start = 14;
                }
                else if(emr == 'f')
                {
                    if(fx != 0)
                    {
                        setfillstyle(1,0);
                        x = fx;
                        y = fy;
                        poly[0] = x;
                        poly[1] = y;
                        poly[2] = x+20;
                        poly[3] = y;
                        poly[4] = x+20;
                        poly[5] = y+20;
                        poly[6] = x;
                        poly[7] = y+20;
                        fillpoly(4, poly);
                    }

                    setfillstyle(1,4);

                    x = 632; /// Yozgat
                    y = 327;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);
                    fx = x;
                    fy = y;
                    finish = 14;
                }
            }
            else if(tikx > 590 && tikx < 610 && tiky > 396 && tiky < 416) ///Nevsehir
            {
                if(emr == 's')
                {
                    if(sx != 0)
                    {
                        setfillstyle(1,0);
                        x = sx;
                        y = sy;
                        poly[0] = x;
                        poly[1] = y;
                        poly[2] = x+20;
                        poly[3] = y;
                        poly[4] = x+20;
                        poly[5] = y+20;
                        poly[6] = x;
                        poly[7] = y+20;
                        fillpoly(4, poly);
                    }

                    setfillstyle(1,2);

                    x = 590; /// Nevsehir
                    y = 396;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);
                    sx = x;
                    sy = y;
                    start = 15;
                }
                else if(emr == 'f')
                {
                    if(fx != 0)
                    {
                        setfillstyle(1,0);
                        x = fx;
                        y = fy;
                        poly[0] = x;
                        poly[1] = y;
                        poly[2] = x+20;
                        poly[3] = y;
                        poly[4] = x+20;
                        poly[5] = y+20;
                        poly[6] = x;
                        poly[7] = y+20;
                        fillpoly(4, poly);
                    }

                    setfillstyle(1,4);

                    x = 590; /// Nevsehir
                    y = 396;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);
                    fx = x;
                    fy = y;
                    finish = 15;
                }
            }
            else if(tikx > 673 && tikx < 693 && tiky > 430 && tiky < 450) ///Kayseri
            {
                if(emr == 's')
                {
                    if(sx != 0)
                    {
                        setfillstyle(1,0);
                        x = sx;
                        y = sy;
                        poly[0] = x;
                        poly[1] = y;
                        poly[2] = x+20;
                        poly[3] = y;
                        poly[4] = x+20;
                        poly[5] = y+20;
                        poly[6] = x;
                        poly[7] = y+20;
                        fillpoly(4, poly);
                    }

                    setfillstyle(1,2);

                    x = 673; /// Kayseri
                    y = 430;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);
                    sx = x;
                    sy = y;
                    start = 16;
                }
                else if(emr == 'f')
                {
                    if(fx != 0)
                    {
                        setfillstyle(1,0);
                        x = fx;
                        y = fy;
                        poly[0] = x;
                        poly[1] = y;
                        poly[2] = x+20;
                        poly[3] = y;
                        poly[4] = x+20;
                        poly[5] = y+20;
                        poly[6] = x;
                        poly[7] = y+20;
                        fillpoly(4, poly);
                    }

                    setfillstyle(1,4);

                    x = 673; /// Kayseri
                    y = 430;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);
                    fx = x;
                    fy = y;
                    finish = 16;
                }
            }
            else if(tikx > 592 && tikx < 612 && tiky > 486 && tiky < 506) ///Nigde
            {
                if(emr == 's')
                {
                    if(sx != 0)
                    {
                        setfillstyle(1,0);
                        x = sx;
                        y = sy;
                        poly[0] = x;
                        poly[1] = y;
                        poly[2] = x+20;
                        poly[3] = y;
                        poly[4] = x+20;
                        poly[5] = y+20;
                        poly[6] = x;
                        poly[7] = y+20;
                        fillpoly(4, poly);
                    }

                    setfillstyle(1,2);

                    x = 592; /// Nigde
                    y = 486;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);
                    sx = x;
                    sy = y;
                    start = 17;
                }
                else if(emr == 'f')
                {
                    if(fx != 0)
                    {
                        setfillstyle(1,0);
                        x = fx;
                        y = fy;
                        poly[0] = x;
                        poly[1] = y;
                        poly[2] = x+20;
                        poly[3] = y;
                        poly[4] = x+20;
                        poly[5] = y+20;
                        poly[6] = x;
                        poly[7] = y+20;
                        fillpoly(4, poly);
                    }

                    setfillstyle(1,4);

                    x = 592; /// Nigde
                    y = 486;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);
                    fx = x;
                    fy = y;
                    finish = 17;
                }
            }
            else if(tikx > 322 && tikx < 342 && tiky > 482 && tiky < 502) ///Isparta
            {
                if(emr == 's')
                {
                    if(sx != 0)
                    {
                        setfillstyle(1,0);
                        x = sx;
                        y = sy;
                        poly[0] = x;
                        poly[1] = y;
                        poly[2] = x+20;
                        poly[3] = y;
                        poly[4] = x+20;
                        poly[5] = y+20;
                        poly[6] = x;
                        poly[7] = y+20;
                        fillpoly(4, poly);
                    }

                    setfillstyle(1,2);

                    x = 322; /// Isparta
                    y = 482;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);
                    sx = x;
                    sy = y;
                    start = 18;
                }
                else if(emr == 'f')
                {
                    if(fx != 0)
                    {
                        setfillstyle(1,0);
                        x = fx;
                        y = fy;
                        poly[0] = x;
                        poly[1] = y;
                        poly[2] = x+20;
                        poly[3] = y;
                        poly[4] = x+20;
                        poly[5] = y+20;
                        poly[6] = x;
                        poly[7] = y+20;
                        fillpoly(4, poly);
                    }

                    setfillstyle(1,4);

                    x = 322; /// Isparta
                    y = 482;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);
                    fx = x;
                    fy = y;
                    finish = 18;
                }
            }
            else if(tikx > 397 && tikx < 417 && tiky > 593 && tiky < 613) ///Antalya
            {
                if(emr == 's')
                {
                    if(sx != 0)
                    {
                        setfillstyle(1,0);
                        x = sx;
                        y = sy;
                        poly[0] = x;
                        poly[1] = y;
                        poly[2] = x+20;
                        poly[3] = y;
                        poly[4] = x+20;
                        poly[5] = y+20;
                        poly[6] = x;
                        poly[7] = y+20;
                        fillpoly(4, poly);
                    }

                    setfillstyle(1,2);

                    x = 397; /// Antalya
                    y = 593;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);
                    sx = x;
                    sy = y;
                    start = 19;
                }
                else if(emr == 'f')
                {
                    if(fx != 0)
                    {
                        setfillstyle(1,0);
                        x = fx;
                        y = fy;
                        poly[0] = x;
                        poly[1] = y;
                        poly[2] = x+20;
                        poly[3] = y;
                        poly[4] = x+20;
                        poly[5] = y+20;
                        poly[6] = x;
                        poly[7] = y+20;
                        fillpoly(4, poly);
                    }

                    setfillstyle(1,4);

                    x = 397; /// Antalya
                    y = 593;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);
                    fx = x;
                    fy = y;
                    finish = 19;
                }
            }
            else if(tikx > 490 && tikx < 510 && tiky > 570 && tiky < 590) ///Karaman
            {
                if(emr == 's')
                {
                    if(sx != 0)
                    {
                        setfillstyle(1,0);
                        x = sx;
                        y = sy;
                        poly[0] = x;
                        poly[1] = y;
                        poly[2] = x+20;
                        poly[3] = y;
                        poly[4] = x+20;
                        poly[5] = y+20;
                        poly[6] = x;
                        poly[7] = y+20;
                        fillpoly(4, poly);
                    }

                    setfillstyle(1,2);

                    x = 490; /// Karaman
                    y = 570;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);
                    sx = x;
                    sy = y;
                    start = 20;
                }
                else if(emr == 'f')
                {
                    if(fx != 0)
                    {
                        setfillstyle(1,0);
                        x = fx;
                        y = fy;
                        poly[0] = x;
                        poly[1] = y;
                        poly[2] = x+20;
                        poly[3] = y;
                        poly[4] = x+20;
                        poly[5] = y+20;
                        poly[6] = x;
                        poly[7] = y+20;
                        fillpoly(4, poly);
                    }

                    setfillstyle(1,4);

                    x = 490; /// Karaman
                    y = 570;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);
                    fx = x;
                    fy = y;
                    finish = 20;
                }
            }
            else if(tikx > 525 && tikx < 545 && tiky > 595 && tiky < 615) ///Mersin
            {
                if(emr == 's')
                {
                    if(sx != 0)
                    {
                        setfillstyle(1,0);
                        x = sx;
                        y = sy;
                        poly[0] = x;
                        poly[1] = y;
                        poly[2] = x+20;
                        poly[3] = y;
                        poly[4] = x+20;
                        poly[5] = y+20;
                        poly[6] = x;
                        poly[7] = y+20;
                        fillpoly(4, poly);
                    }

                    setfillstyle(1,2);

                    x = 525; /// Mersin
                    y = 595;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);
                    sx = x;
                    sy = y;
                    start = 21;
                }
                else if(emr == 'f')
                {
                    if(fx != 0)
                    {
                        setfillstyle(1,0);
                        x = fx;
                        y = fy;
                        poly[0] = x;
                        poly[1] = y;
                        poly[2] = x+20;
                        poly[3] = y;
                        poly[4] = x+20;
                        poly[5] = y+20;
                        poly[6] = x;
                        poly[7] = y+20;
                        fillpoly(4, poly);
                    }

                    setfillstyle(1,4);

                    x = 525; /// Mersin
                    y = 595;
                    poly[0] = x;
                    poly[1] = y;
                    poly[2] = x+20;
                    poly[3] = y;
                    poly[4] = x+20;
                    poly[5] = y+20;
                    poly[6] = x;
                    poly[7] = y+20;
                    fillpoly(4, poly);
                    fx = x;
                    fy = y;
                    finish = 21;
                }
            }
        }
    }
}

int main()
{

    initwindow(1300,700,"Easiest Way TR",65,50);
    ekran();
    tikla();
    return 0;
}
