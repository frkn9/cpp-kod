#include <iostream>

using namespace std;

class GameEntry {
    public:
        GameEntry(const string& n = "", int s = 0);     //constructor
        string getName() const;                         //get player name
        int getScore() const;                           //get player score
        int getHowManyScores() const;   
    private:
        string name;                                    //player name
        int score;                                      //player score
        int howManyScores;
};

int GameEntry::getHowManyScores() const {
    return howManyScores;
}

GameEntry::GameEntry(const string& n, int s) 
    : name(n), score(s) {}

string GameEntry::getName() const {return name;};
int GameEntry::getScore() const {return score;};

class Scores {
    public:
        Scores(int maxEnt = 10);
        ~Scores();
        void add(const GameEntry& e);
        GameEntry remove(int i);
    private:
        int maxEntries;
        int numEntries;
        GameEntry* entries;                     //database oluşturmak için gameEntry tipine pointleyecek bir entries koyduk
};

Scores::Scores(int maxEnt) {                    //consturctor
    maxEntries = maxEnt;                        //save the max size
    entries = new GameEntry[maxEntries];        //allocate array storage
    numEntries = 0;                             //initially no elements
};

Scores::~Scores() {                             //destructor
    delete [] entries;              
}

void Scores::add(const GameEntry& e) {     
    if(e.getHowManyScores() == 5)
        return;                 
    int newScore = e.getScore();
    if (numEntries == maxEntries) {
        if(newScore <= entries[maxEntries-1].getScore())
            return;
    }
    else numEntries++;  

    int i = numEntries - 2;
    while(i >= 0 && newScore > entries[i].getScore()) {
        entries[i+1] = entries[i];
        i--;
    }
    entries[i+1] = e;
}

GameEntry Scores::remove(int i) {
    if ((i < 0) || (i >= numEntries))
        printf("Invalid index");
    GameEntry e = entries[i];
    for (int j = i+1; j < numEntries; j++)
        entries[j-1] = entries[j];
    numEntries--;
    return e;
}

int main(void) {
    
}
