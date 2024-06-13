#include "iGraphics.h"
#include "progressbar.h"

int a = 233, b = 228, r = 20;
int initialVelocity = 0;
int maxUpwardVelocity = 20;
int gravity = 5;
int menuState = 0;
int groundLevel = 0;
int score = 0;
int max_score = 0;
int points = 5;
const int pause_time = 1000;
int option=1;
int option_bg=1;

int pipeX1 = 457;
int pipeSpeed = 3;
int pipeHeight = 255;
int pipeWidth = 52;
int pipeX2 = 650;

struct Pipe
{
    int x, type;
};

Pipe allPipes[10];

int maxi(int a, int b)
{
    return (a > b) ? a : b;
}

int pipes_score[10];

int readHighestScore() {
    int highestScore = 0;
    FILE *file = fopen("highest_score.txt", "r");
    if (file != NULL) {
        fscanf(file, "%d", &highestScore);
        fclose(file);
    }
    return highestScore;
}

void writeHighestScore(int highestScore) {
    FILE *file = fopen("highest_score.txt", "w");
    if (file != NULL) {
        fprintf(file, "%d", highestScore);
        fclose(file);
    }
}


void updatePipePosition()
{

    for (int i = 0; i < 10; i++)
    {
        allPipes[i].x -= pipeSpeed;
        if (a > allPipes[i].x && pipes_score[i] == 0)
        {
            score++;
            pipes_score[i] = 1;
        }
    }
    
    int max_x = 0;
    for (int i = 0; i < 10; i++)
    {
        max_x = maxi(max_x, allPipes[i].x);
    }

    for (int i = 0; i < 10; i++)
    {
        if (allPipes[i].x < 0)
        {
            int add = rand() % 380 + 100;
            allPipes[i].x = max_x + add;
            max_x += add;
            pipes_score[i] = 0;
        }
    }

    // pipeX1 -= pipeSpeed;
    // pipeX2 -= pipeSpeed;
    // //printf("%d %d %d\n",a,pipeX1,score);

    // if(a>pipeX2 && cnt2==0) {score++;cnt2=1;}

    // if (pipeX2  <= -100)
    // {
    //     pipeX2 = iScreenWidth;
    //     cnt2=0;
    // }

    // if(score>5) t=50;

    // CircleType birdCircle = {a,b,r};
    // RectType pipeRect =     {pipeX1, 166, pipeWidth, pipeHeight};
    // //RectType pipeRect_pr=   {pipeX2, 339, pipeWidth, pipeHeight};

    // if(intersects(birdCircle,pipeRect))
    // {
    // // Collision occurred, handle it here
    // // Stop the game updates

    //   //  printf("COLLISION : ");
    // //    printf("%d %d  %d\n",a,b,pipeX1);
    //     menuState = 2;

    // }
}

//char *bird = "image/yellow_bird_idle.bmp";
char *red_birdsprites[4] = {
    "image/redbird-midflap.bmp",
    "image/redbird-upflap.bmp",
    "image/redbird-midflap.bmp",
    "image/redbird-downflap.bmp"
    
};

char *yellow_birdsprites[4] = {
    "yellowbird-midflap.bmp",
    "yellowbird-upflap.bmp",
    "yellowbird-midflap.bmp",
    "yellowbird-downflap.bmp"
    
};



char *blue_birdsprites[4] = {
    "bluebird-midflap.bmp",
    "bluebird-upflap.bmp",
    "bluebird-midflap.bmp",
    "bluebird-downflap.bmp"
    
};


char *scoresprites[10] = {
    "0.bmp",
    "1.bmp",
    "2.bmp",
    "3.bmp",
    "4.bmp",
    "5.bmp",
    "6.bmp",
    "7.bmp",
    "8.bmp",
    "9.bmp"};

int birdstate = 0;
int bgstate = 1;

char *backgrounds_day[16] = {
    "bg1.bmp",
    "bg2.bmp",
    "bg3.bmp",
    "bg4.bmp",
    "bg5.bmp",
    "bg6.bmp",
    "bg7.bmp",
    "bg8.bmp",
    "bg9.bmp",
    "bg10.bmp",
    "bg11.bmp",
    "bg12.bmp",
    "bg13.bmp",
    "bg14.bmp",
    "bg15.bmp",
    "bg16.bmp",
};

char *backgrounds_night[16] = {
    "background-night1.bmp",
    "background-night2.bmp",
    "background-night3.bmp",
    "background-night4.bmp",
    "background-night5.bmp",
    "background-night6.bmp",
    "background-night7.bmp",
    "background-night8.bmp",
    "background-night9.bmp",
    "background-night10.bmp",
    "background-night11.bmp",
    "background-night12.bmp",
    "background-night13.bmp",
    "background-night14.bmp",
    "background-night15.bmp",
    "background-night16.bmp",
};


char *pipes[5] = {
    "pipe1.bmp",
    "pipe2.bmp",
    "pipe3.bmp",
    "pipe4.bmp",
    "pipe5.bmp",
};

char *inv_pipes[5] = {
    "inv_pipe5.bmp",
    "inv_pipe4.bmp",
    "inv_pipe3.bmp",
    "inv_pipe2.bmp",
    "inv_pipe1.bmp",
};

void change_state()
{
    birdstate++;
    birdstate %= 4;
}

void change_bg()
{
    bgstate++;
    bgstate %= 16;
}

void draw_pipe()
{
    for (int i = 0; i < 10; i++)
    {
    }
}

struct Rect
{
    int a, b;   // left_bottom point
    int dx, dy; // width and height of rectangle
};

bool checkCollision(Rect r1, Rect r2)
{
    bool xOverlap = (r1.a < r2.a + r2.dx) && (r1.a + r1.dx > r2.a);
    bool yOverlap = (r1.b < r2.b + r2.dy) && (r1.b + r1.dy > r2.b);
    return xOverlap && yOverlap;
}

void show_pipe()
{
    // int i=rand()%5;
    for (int i = 0; i < 10; i++)
    {
        if (allPipes[i].x > 0 and allPipes[i].x < iScreenWidth)
        {
            iShowBMP2(allPipes[i].x, 39, pipes[allPipes[i].type], 0);

            if (allPipes[i].type == 0)
                iShowBMP2(allPipes[i].x, 467 - 220, inv_pipes[allPipes[i].type], 0);
            if (allPipes[i].type == 1)
                iShowBMP2(allPipes[i].x, 467 - 175, inv_pipes[allPipes[i].type], 0);
            if (allPipes[i].type == 2)
                iShowBMP2(allPipes[i].x, 467 - 130, inv_pipes[allPipes[i].type], 0);
            if (allPipes[i].type == 3)
                iShowBMP2(allPipes[i].x, 467 - 85, inv_pipes[allPipes[i].type], 0);
            if (allPipes[i].type == 4)
                iShowBMP2(allPipes[i].x, 467 - 50, inv_pipes[allPipes[i].type], 0);
        }
    }
}

void iDraw()
{
    iClear();

    if (menuState == 0)
    {

        // iShowBMP2(226,151,yellow_birdsprites[birdstate],0);
        iShowBMP2(0, 0, "message.bmp", 0);
        iShowBMP2(220,151,yellow_birdsprites[birdstate],0);
        birdstate++;
        birdstate %= 4;
    }
    else if (menuState == 1)
    {
        // if(score>=10) menuState=5;
        max_score = maxi(readHighestScore(),score);
        writeHighestScore(max_score);
        points = score;
        if(option_bg==1)    iShowBMP(0, 0, backgrounds_day[bgstate]);
        if(option_bg==2)    iShowBMP(0, 0, backgrounds_night[bgstate]);
        show_pipe();
        scoresprite(score);
        
        if(option==1) iShowBMP2(a, b, red_birdsprites[birdstate], 0);
        if(option==2) iShowBMP2(a, b, yellow_birdsprites[birdstate], 0);
        if(option==3) iShowBMP2(a, b, blue_birdsprites[birdstate], 0);        // iFilledRectangle(a,b,2*r,2*r);
        iShowBMP2(0,0,"whiteside.bmp",0);
        iShowBMP2(467-50,0,"whiteside.bmp",0);
        //iFilledCircle(a,b,2)
        //iRectangle(a, b, 34, 24); // (a, b) , (a + 47, b+47)
    }
    else if (menuState == 2)
    {
        if(option==1) iShowBMP2(a, b, red_birdsprites[birdstate], 0);
        if(option==2) iShowBMP2(a, b, yellow_birdsprites[birdstate], 0);
        if(option==3) iShowBMP2(a, b, blue_birdsprites[birdstate], 0);
        Sleep(pause_time);
        // max_score = maxi(max_score, score);

        score = 0;
        a = 233, b = 228, r = 20;
        allPipes[0].x = 457 - 29;
        allPipes[0].type = 1;
        for (int i = 1; i < 10; i++)
        {
            allPipes[i].x = allPipes[i - 1].x + rand() % 380 + 70;
            allPipes[i].type = (i % 5);
        }
        iShowBMP2(0, 0, "image-asset.bmp", 0);
        gameover_score(points);
        maxscore(max_score);
    }
    else if(menuState==4){
        if(option==1) iShowBMP(0,0,"option_bg_first.bmp");
        else if(option==3) iShowBMP(0,0,"option_bg_last.bmp");
        else iShowBMP(0,0,"option_bg_mid.bmp");
        if(option==1) iShowBMP2(200,200,"red_option.bmp",0);
        if(option==2) iShowBMP2(200,200,"yellow_option.bmp",0);
        if(option==3) iShowBMP2(200,200,"blue_option.bmp",0);
        //if(option==4) iShowBMP2(0,0,redbirdimage,0);
        //if(option==5) iShowBMP2(0,0,redbirdimage,0);
    }

    else if(menuState==5){
        change_bg();
        if(option_bg==1)    iShowBMP(0, 0, backgrounds_day[bgstate]);
        if(option_bg==2)    iShowBMP(0, 0, backgrounds_night[bgstate]);
        iShowBMP2(iScreenWidth/2-10,467-100,"thumbs_up.bmp",0);
        //iShowBMP2(iScreenWidth-80,iScreenHeight/2-20,"swipe_right.bmp",0);
    }

    //iRectangle(0, 0, 467, 39);
    iSetColor(255, 255, 255);
    // iText(40, 40, "Hi, I am iGraphics");
    //iRectangle(a+10, b+10, 34, 24);
}

void updateBallPosition()
{

    

    if(menuState == 2) return;
    if (b - r > groundLevel)
    {
        initialVelocity += gravity;
        b -= initialVelocity;
        // score++;
        //  if (b - r < groundLevel + 50) {
        //      PlaySound(TEXT("danger.wav"), NULL, SND_FILENAME );
        //  }
    }
    else
    {

        menuState = 2;       // set menuState to indicate game over state
        b = groundLevel + r; // set bird position above the ground
        initialVelocity = 0; // Stop the bird's movement

        // Additional actions for game over state can be added here
    }
    
    Rect bird_rect = {a, b, 34, 24};
    
    Rect ground = {0, 0, 467, 39};
    for (int i = 0; i < 10; i++)
    {
        if (allPipes[i].x > 0 and allPipes[i].x < iScreenWidth)
        {

            if (allPipes[i].type == 0)
            {
                Rect top = {allPipes[i].x, 39, 52, 40}, bottom = {allPipes[i].x, 467 - 220, 52, 220};
                if (checkCollision(top, bird_rect))
                {
                    // Sleep(pause_time);
                    menuState = 2;
                }
                if (checkCollision(bottom, bird_rect))
                {
                    // Sleep(pause_time);
                    menuState = 2;
                }
                iFilledRectangle(allPipes[i].x, 39, 52, 40);
                iFilledRectangle(allPipes[i].x, 467 - 220, 52, 220);
            }
            if (allPipes[i].type == 1)
            {
                Rect top = {allPipes[i].x, 39, 52, 85}, bottom = {allPipes[i].x, 467 - 175, 52, 175};
                if (checkCollision(top, bird_rect))
                {
                    // Sleep(pause_time);
                    menuState = 2;
                }
                if (checkCollision(bottom, bird_rect))
                {
                    // Sleep(pause_time);
                    menuState = 2;
                }
                iFilledRectangle(allPipes[i].x, 39, 52, 85);
                iFilledRectangle(allPipes[i].x, 467 - 175, 52, 175);
            }
            if (allPipes[i].type == 2)
            {
                Rect top = {allPipes[i].x, 39, 52, 130}, bottom = {allPipes[i].x, 467 - 130, 52, 130};
                if (checkCollision(top, bird_rect))
                {
                    // Sleep(pause_time);
                    menuState = 2;
                }
                if (checkCollision(bottom, bird_rect))
                {
                    // Sleep(pause_time);
                    menuState = 2;
                }
                 iFilledRectangle  (allPipes[i].x,39,52,130);
                 iFilledRectangle  (allPipes[i].x,467-130,52,130);
            }
            if (allPipes[i].type == 3)
            {
                Rect top = {allPipes[i].x, 39, 52, 175}, bottom = {allPipes[i].x, 467 - 85, 52, 85};
                if (checkCollision(top, bird_rect))
                {
                    // Sleep(pause_time);
                    menuState = 2;
                }
                if (checkCollision(bottom, bird_rect))
                {
                    // Sleep(pause_time);
                    menuState = 2;
                }
                 iFilledRectangle  (allPipes[i].x,39,52,175);
                 iFilledRectangle  (allPipes[i].x,467-85,52,85);
            }
            if (allPipes[i].type == 4)
            {
                Rect top = {allPipes[i].x, 39, 52, 220}, bottom = {allPipes[i].x, 467 - 50, 52, 40};
                if (checkCollision(top, bird_rect))
                {
                    // Sleep(pause_time);
                    menuState = 2;
                }
                if (checkCollision(bottom, bird_rect))
                {
                    // Sleep(pause_time);
                    menuState = 2;
                }
                iFilledRectangle  (allPipes[i].x,39,52,220);
                iFilledRectangle  (allPipes[i].x,467-50,52,40);
            }

            if (menuState!=2 && checkCollision(ground, bird_rect))
            {
                printf("Grounded\n");
                Sleep(pause_time);
                menuState = 2;
            }
            // if(menuState == 2) Sleep(pause_time);
        }
    }
}

void iMouseMove(int mx, int my)
{
    printf("x = %d, y= %d\n", mx, my);
    // place your codes here
}

void iMouse(int button, int state, int mx, int my)
{
    if (menuState == 0 && button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
        // Check if the mouse click is inside the start button area
        if (mx >= 135 && mx <= 300 && my >= 35 && my <= 125)
        {
            menuState = 1; // Transition to gameplay state
        }

        if (mx >= 408 && mx <= 462 && my >= 400 && my <= 451)
        {
            menuState = 5; // Transition to gameplay state
        }
    }

    if (menuState == 0 && button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
        // Check if the mouse click is inside the start button area
        if (mx >= 220 && mx <= 272 && my >= 151 && my <= 195)
        {
            menuState = 4; // Transition to gameplay state
        }
    }


    if (menuState == 4 && button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
        // Check if the mouse click is inside the start button area
        if (mx >= 423 && mx <= 450 && my >= 210 && my <= 250)
        {
            option++;
        }

        if (mx >= 14 && mx <= 38 && my >= 222 && my <= 252)
        {
            option--;
        }

        if (mx >= 217 && mx <=264 && my >= 10 && my <=60 )
        {
            menuState=0;
        }

    }


    if (menuState == 5 && button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {


        // Check if the mouse click is inside the start button area
        if (mx >= 420 && mx <= 467 && my >= 0 && my <= 400)
        {
            option_bg++;
        }

        if (mx >= 0 && mx <= 30 && my >= 0 && my <= 400)
        {
            option_bg--;
        }

        if (mx >= 228 && mx <=272 && my >= 374 && my <=412 )
        {
            menuState=0;
        }
        

    }



    if (menuState == 2 && button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
        // Check if the mouse click is inside the start button area

        if (mx >= 48 && mx <= 206 && my >= 91 && my <= 145)
        {
            menuState = 1; // Transition to gameplay state
        }
    }
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
        PlaySound(TEXT("smb_jump-super.wav"), NULL, SND_FILENAME | SND_ASYNC);
        initialVelocity = -maxUpwardVelocity;
    }
    if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
    {

        // a = mx;
        // b = my;
    }
}




void iKeyboard(unsigned char key)
{
    if (key == 'q')
    {
        exit(0);
    }
    if (key == 's')
    {
        if (menuState == 1)
        {
            iSetTimer(50, updateBallPosition);
            iSetTimer(50, change_state);
            iSetTimer(25, change_bg);
            iSetTimer(10, updatePipePosition);
            // iSetTimer(100,show_pipe);
        }
    }

    // place your codes for other keys here
}

void iSpecialKeyboard(unsigned char key)
{
    if (key == GLUT_KEY_END)
    {
        exit(0);
    }
    // place your codes for other keys here
}





int main()
{

    allPipes[0].x = 457 - 29;
    allPipes[0].type = 1;
    for (int i = 1; i < 10; i++)
    {
        allPipes[i].x = allPipes[i - 1].x + rand() % 380 + 100;
        allPipes[i].type = (i % 5);
    }

    PlaySound(TEXT("background.wav"), NULL, SND_FILENAME | SND_ASYNC);
    iInitialize(467, 457, "Flappy Bird");
    return 0;
}