#include <stdio.h>
#include <stdlib.h>

//Inspired by this silly tweet. Thanks for the chuckle. https://twitter.com/VVh1sp3r/status/1483989140794400770

int main(){
    char* column[4][18]= {
                            {"Champ, ", "Fact: ", "Everybody says ", "Dang...", "Check it: ", "Just saying...", "Superstar, ", "Tiger, ", "Self, ", "Know this: ", "News alert: ", "Girl, ", "Ace, ", "Excuse me, but ", "Experts agree: ", "In  my opinion, ", "Hear ye, hear ye: ", "Okay, listen up: "},
                            {"the mere idea of you ", "your soul ", "your hair today ", "everything you do ", "your personal style ", "every thought you have ", "that sparkle in your eye ", "your presence here ", "what you got going on ", "the essential you ", "your life's journey ", "that saucy personality ", "your DNA ", "that brain of yours ", "your choice of attire ", "the way you roll ", "whatever your secret is ", "all of y'all "},
                            {"has serious game, ", "rains magic, ", "deserves the Nobel Prize, ", "raises the roof, ", "breeds miracles, ", "is paying off big time, ", "shows mad skills, ", "just shimmers, ", "is a national treasure, ", "gets the party hopping, ", "is the next big thing, ", "roars like a lion, ", "is a rainbow factory, ", "is made of diamonds, ", "makes birds sing, ", "should be taught in school, ", "makes my world go'round, ", "is 100% legit, "},
                            {"24/7.", "can I get an amen?", "and that's a fact.", "so treat yourself.", "you feel me?", "that's just science.", "would I lie?", "for reals.", "mic drop.", "you hidden gem.", "snuggle bear.", "period.", "that's on my momma.", "now let's dance.", "high five.", "say it again!", "according to CNN.", "so get used to it"}
                            };
    int i;
    int j;
    srand(time(NULL));
    for(i= 0; i < 4; i++){
            j = (rand() %17);
            printf("%s", column[i][j]);
            if(i == 3){
                printf("\n);
            }
    }




    return 0;
}