#include <iostream>
#include <string>
#include <chrono>
#include <thread>

using namespace std;

class Friendship {
private:
    string bestieName;
    int yearsTogether;

public:
    Friendship(string name, int years) : bestieName(name), yearsTogether(years) {}

    void showImportance() {
        cout << "\n[HEART] My Dearest " << bestieName << " [HEART]\n";
        cout << "You are not just my best friend — you are the most important person in my life.\n";
        cout << "The one who makes every ordinary day feel like magic.\n";
        cout << "The one my heart always chooses, in every lifetime.\n\n";
    }

    void infiniteFriendshipLoop() {
        cout << "\n[STAR] Starting our Infinite Friendship Loop [STAR]\n";
        cout << "This loop represents our bond — endless, unbreakable, and full of love.\n\n";
        for (int i = 1; i <= 5; ++i) {
            cout << "Loop " << i << ": Our friendship grows stronger... forever [HEART]\n";
            this_thread::sleep_for(chrono::milliseconds(600));
        }
        cout << "\n... and it continues infinitely, just like us. [STAR]\n\n";
    }
};

class MemoryBox {
private:
    string accessPassword;

public:
    MemoryBox() : accessPassword("MY GIRL") {}

    bool unlock() {
        string input;
        cout << "\n[LOCK] PASSWORD PROTECTED MEMORY BOX [LOCK]\n";
        cout << "Enter the secret password to open our treasure chest of memories: ";
        getline(cin, input);

        if (input == accessPassword) {
            cout << "[CHECK] Access Granted! Welcome to our sacred memories...\n\n";
            displayMemories();
            return true;
        } else {
            cout << "[X] Wrong password. Only my forever bestie knows this. [SAD]\n";
            return false;
        }
    }

private:
    void displayMemories() {
        cout << "DO U REMEMBER OUR FIRST LARAI \n";
        cout << "• DO U REMEMBER WE SURVIVED 2 YEAR OF CLG WITHOUT CONTINOUS TALK.\n";
        cout << "• 3 AM talks about everything and nothing.\n";
        cout << "• All the silly selfies and inside jokes.\n";
        cout << "• The promises we made to always be there.\n";
        cout << "• And millions more moments that made us US.\n";
        cout << "\nThese memories are locked in my heart forever. [HEART]\n\n";
    }
};

void printBigHeart() {
    cout << "\n[HEART] A HEART FULL OF LOVE FOR YOU [HEART]\n\n";
    int n = 6;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) cout << " ";
        for (int j = 0; j < 2 * i + 1; j++) cout << "*";
        for (int j = 0; j < 2 * (n - i) + 1; j++) cout << " ";
        for (int j = 0; j < 2 * i + 1; j++) cout << "*";
        cout << endl;
    }

    for (int i = 0; i < 2 * n; i++) {
        for (int j = 0; j < i; j++) cout << " ";
        for (int j = 0; j < 4 * n - 2 * i - 1; j++) cout << "*";
        cout << endl;
    }
    cout << endl;
}

int main() {
    cout << "----------------------------------------------\n";
    cout << "           BESTIE LOGIN SCREEN \n";
    cout << "----------------------------------------------\n\n";

    string username, password;
    cout << "Enter Username: ";
    getline(cin, username);
    cout << "Enter Password: ";
    getline(cin, password);

    if (username == "BFF" && password == "MY GIRL") {
        cout << "\n[CHECK] Login Successful! Welcome, my forever soul sister! [STAR]\n\n";

        Friendship ourBond("Bestie", 6);
        ourBond.showImportance();

        printBigHeart();

        // The heartfelt message
        cout << "\n[HEART] My Dearest, My Forever [HEART]\n\n";
        cout << "Six years. Can you believe it? It feels like just yesterday we were two nervous girls,\n";
        cout << "trying to find our footing in a world that felt so big and scary. And now, here we are.\n";
        cout << "You've seen me at my absolute worst—the messy-haired, tear-streaked, sobbing-on-the-floor\n";
        cout << "version of me—and you've been there for my best, the jumping-up-and-down, laughter-so-hard-I-can't-breathe\n";
        cout << "version, too. You've held my hand through every storm and danced with me in every ray of sunshine.\n";
        cout << "You are the anchor to my ship, the calm to my chaos, and the home my heart always runs back to.\n\n";

        cout << "You know, sometimes I lie awake and think about how the universe must have woven our stars together,\n";
        cout << "placing them just right so our paths would cross that fateful day. It feels like something out of one of\n";
        cout << "those novels we love... In a world of seven billion people, I found my person in you.\n";
        cout << "And to me, that is the most magical kind of miracle.\n\n";

        cout << "You make even the ordinary moments feel extraordinary. You are the poetry I never knew I could write,\n";
        cout << "the melody that always plays in the background of my life. You are the \"Mai chand ho mera\" to my nights,\n";
        cout << "the softest light that guides me through the darkness. [STAR][MOON]\n\n";

        cout << "Thank you. From the very bottom of my heart, thank you for being my rock, my confidante,\n";
        cout << "my partner-in-crime...\n\n";

        cout << "As we step into this next chapter of our lives, I want you to remember one thing:\n";
        cout << "You are a force of nature. You are brilliant, beautiful, and capable of absolutely anything.\n";
        cout << "My biggest wish for you is a life bursting with happiness...\n\n";

        cout << "Here's to us. Here's to the memories we've made and the millions we have yet to create.\n";
        cout << "This isn't just a friendship for this life... Our souls are forever intertwined.\n";
        cout << "I'll be looking for you in Jannah too. [HEART][HANDS]\n\n";

        cout << "Forever yours, and yours alone,\n";
        cout << "Your Bestie. [HEART]\n\n";

        ourBond.infiniteFriendshipLoop();

        MemoryBox memories;
        memories.unlock();

        cout << "\n[STAR] Thank you for being YOU. The world is brighter because you're in it. [STAR]\n";
    } else {
        cout << "\n[X] Access Denied. Only my true BFF knows the way in. Try again with love! [SAD]\n";
    }

    cout << "\nProgram ended with endless love. [HEART]\n";
    return 0;
}
