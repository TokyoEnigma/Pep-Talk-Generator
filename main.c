#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <memory.h>

//Inspired by this silly tweet. Thanks for the chuckle. https://twitter.com/VVh1sp3r/status/1483989140794400770

char* makePhrase(){
    char* column[4][18]= {
                            {"Champ, ", "Fact: ", "Everybody says ", "Dang...", "Check it: ", "Just saying...", "Superstar, ", "Tiger, ", "Self, ", "Know this: ", "News alert: ", "Girl, ", "Ace, ", "Excuse me, but ", "Experts agree: ", "In  my opinion, ", "Hear ye, hear ye: ", "Okay, listen up: "},
                            {"the mere idea of you ", "your soul ", "your hair today ", "everything you do ", "your personal style ", "every thought you have ", "that sparkle in your eye ", "your presence here ", "what you got going on ", "the essential you ", "your life's journey ", "that saucy personality ", "your DNA ", "that brain of yours ", "your choice of attire ", "the way you roll ", "whatever your secret is ", "all of y'all "},
                            {"has serious game, ", "rains magic, ", "deserves the Nobel Prize, ", "raises the roof, ", "breeds miracles, ", "is paying off big time, ", "shows mad skills, ", "just shimmers, ", "is a national treasure, ", "gets the party hopping, ", "is the next big thing, ", "roars like a lion, ", "is a rainbow factory, ", "is made of diamonds, ", "makes birds sing, ", "should be taught in school, ", "makes my world go'round, ", "is 100% legit, "},
                            {"24/7.", "can I get an amen?", "and that's a fact.", "so treat yourself.", "you feel me?", "that's just science.", "would I lie?", "for reals.", "mic drop.", "you hidden gem.", "snuggle bear.", "period.", "that's on my momma.", "now let's dance.", "high five.", "say it again!", "according to CNN.", "so get used to it"}
                            };
    int i;
    int j;
    char* part1;
    char* part2;
    char* part3;
    char* part4;
    char combine;
    char* result;
    srand(time(NULL));
    for(i= 0; i < 4; i++){
            j = (rand() %17);
            //printf("%s", column[i][j]);
            if(i == 0){
                part1 = column[i][j];
            }
            else if(i == 1){
                part2 = column[i][j];
            }
            else if(i == 2){
                part3 = column[i][j];
            }
            else if(i == 3){
                part4 = column[i][j];
            }
    }
    result = (char*) malloc(1 + strlen(part1) + strlen(part2) + strlen(part3) + strlen(part4));
    strcpy(result, part1);
    strcat(result, part2);
    strcat(result, part3);
    strcat(result, part4);
    //printf("%s", result);
    return result;
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
    LPSTR lpCmdLine, int nCmdShow)
{
    int myConsole = GetConsoleWindow();
    ShowWindow(myConsole,0);
    char* phrase = makePhrase();
    MessageBox(NULL, phrase, "Pep Talk Generator v2.0", MB_OK);
    return 0;
}
