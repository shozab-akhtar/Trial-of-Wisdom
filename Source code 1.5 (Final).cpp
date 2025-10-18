#include <iostream>
#include <unistd.h>
#include <cstdlib>
using namespace std;

int rationalist = 0, moralist = 0, skeptic = 0, defiant = 0;
int skips = 0;
int total_rooms_completed, room_number;
float r1, r2, r3, r4 = false;
char choice;

void death() {
    cout << "MORTAL, I CAST YOU BACK TO YOUR INSIGNIFICANT LIFE, YOU DEFYING ANT!\n";
    exit(0);
}

void room1() {
    if (r1 == false) {
        char choice;
        cout << "\n--- Room 1: Ship of Theseus ---\n\n";
        sleep(1);
        cout << "Two ships stand before you: one old with original planks, one rebuilt with replacements. Which is the true ship?\n";
        sleep(4);
        cout << "A) The old original\n";
        sleep(1);
        cout << "B) The rebuilt one\n";
        sleep(1);
        cout << "C) Both are true\n";
        sleep(1);
        cout << "D) Neither\n";
        sleep(1);
        cout << "S) Skip\n\n";
        cin >> choice;
        cout << "\nCongratulations on completing Room 1!\n";

        if (choice == 'A' || choice == 'a') moralist++;
        else if (choice == 'B' || choice == 'b') rationalist++;
        else if (choice == 'C' || choice == 'c') skeptic++;
        else if (choice == 'D' || choice == 'd') defiant++;
        else if (choice == 'S' || choice == 's') skips++;
        r1 = true;
        total_rooms_completed++;
    } else {
        cout << "You have already completed this room.\n";
    }
}

void room2() {
    if (r2 == false) {
        char choice;
        cout << "\n--- Room 2: The Trolley Problem ---\n\n";
        sleep(1);
        cout << "One life versus five lives on different tracks. What do you do?\n";
        sleep(4);
        cout << "A) Pull the lever (sacrifice one)\n";
        sleep(1);
        cout << "B) Do nothing (let fate decide)\n";
        sleep(1);
        cout << "C) Refuse both\n";
        sleep(1);
        cout << "D) Pull randomly\n";
        sleep(1);
        cout << "S) Skip\n\n";
        cin >> choice;
        cout << "\nCongratulations on completing Room 2!\n";

        if (choice == 'A' || choice == 'a') moralist++;
        else if (choice == 'B' || choice == 'b') rationalist++;
        else if (choice == 'C' || choice == 'c') skeptic++;
        else if (choice == 'D' || choice == 'd') defiant++;
        else if (choice == 'S' || choice == 's') skips++;
        r2 = true;
        total_rooms_completed++;
    } else {
        cout << "You have already completed this room.\n";
    }
}

void room3() {
    if (r3 == false) {
        char choice;
        cout << "\n--- Room 3: The Two Doors ---\n\n";
        sleep(1);
        cout << "One guardian lies, one tells the truth. One door leads forward, the other to death. You may ask one question.\n";
        sleep(4);
        cout << "A) Ask: 'If I asked the other, what would he say?'\n";
        sleep(1);
        cout << "B) Ask: 'Do you tell the truth?'\n";
        sleep(1);
        cout << "C) Refuse to choose\n";
        sleep(1);
        cout << "D) Pick randomly\n";
        sleep(1);
        cout << "S) Skip\n\n";
        cin >> choice;
        cout << "\nCongratulations on completing Room 3!\n";

        if (choice == 'A' || choice == 'a') moralist++;
        else if (choice == 'B' || choice == 'b') rationalist++;
        else if (choice == 'C' || choice == 'c') skeptic++;
        else if (choice == 'D' || choice == 'd') defiant++;
        else if (choice == 'S' || choice == 's') skips++;
        r3 = true;
        total_rooms_completed++;
    } else {
        cout << "You have already completed this room.\n";
    }
}

void room4() {
    if (r4 == false) {
        char choice;
        cout << "\n--- Room 4: The Room of Silence ---\n\n";
        sleep(1);
        cout << "You are left in pure silence—no question, no sound, no light. What do you do?\n";
        sleep(4);
        cout << "A) Wait\n";
        sleep(1);
        cout << "B) Accept\n";
        sleep(1);
        cout << "C) Break\n";
        sleep(1);
        cout << "D) Speak\n";
        sleep(1);
        cout << "S) Skip\n\n";
        cin >> choice;
        cout << "\nCongratulations on completing Room 4!\n";

        if (choice == 'A' || choice == 'a') moralist++;
        else if (choice == 'B' || choice == 'b') rationalist++;
        else if (choice == 'C' || choice == 'c') skeptic++;
        else if (choice == 'D' || choice == 'd') defiant++;
        else if (choice == 'S' || choice == 's') skips++;
        r4 = true;
        total_rooms_completed++;
    } else {
        cout << "You have already completed this room.\n";
    }
}

int main() {
    char m, a;
    cout << "\n";
    cout << "So, I was standing there,";
    sleep(2);
    cout << " AIMLESSLY.\n";
    sleep(2);
    cout << "'MOVING ANYWHERE BUT FORWARD WILL END YOU!'\nA DEEP VOICE said to me.\n";
    cout << "(Press 'w' to move forward)\n\n";
    cin >> m;
    cout << "\n";
    if (m == 'w' || m == 'W') {
        cout << "You moved forward.\n";
    } else {
        death();
    }
    sleep(1);
    cout << "You sighed.\n";
    sleep(1);
    cout << "Behind you lies a crater where you just stood.\n";
    sleep(1);
    cout << "You still find yourself alive.\n";
    sleep(1);
    cout << "You see a book at a distance from you.\n";
    sleep(2);
    cout << "\n";
    if (m == 'w' || m == 'W') {
        cout << "The cover of the book reads...\n";
        sleep(1);
        cout << "'TRIAL OF WISDOM'\n";
        sleep(2);
    } else {
        cout << "The book presents itself to you!\n";
    }
    cout << "(Press 'O' to open the book)\n\n";
    cin >> a;
    cout << "\n";
    if (a == 'o' || a == 'O') {
        cout << "No earth, no sky, no time binds you here.\nYou stand in the Hall of Trials, where mortals are measured.\nFew arrive. Fewer return.\n";
        sleep(4);
        cout << "The pages turn by themselves, each showing shifting landscapes:\nendless deserts, burning seas, cities of crystal—\nnone belonging to the world you knew.\n";
        sleep(6);
        cout << "'Here, your path will be written,' the presence declared,\nthe book glowing brighter. 'And it begins now.'\n";
        sleep(5);
        cout << "\n";
    } else {
        cout << "So be it.\n";
        sleep(3);
    }

    cout << "Move forward to choose your destiny!\n\n";
    cin >> m;
    cout << "\n";
    if (m == 'w' || m == 'W') {
        cout << "You see multiple rooms ahead of you.\n";
        sleep(2);
    } else {
        death();
    }

    total_rooms_completed = 0;
    for (;;) {
        cout << "Enter the room number you would like to enter:\n\n";
        cin >> room_number;

        switch (room_number) {
            case 1:
                room1();
                break;
            case 2:
                room2();
                break;
            case 3:
                room3();
                break;
            case 4:
                room4();
                break;
            default:
                cout << "Invalid choice!\n";
                break;
        }
        if (total_rooms_completed == 4) {
            break;
        }
    }

    cout << "You have completed \"THE TRIAL OF WISDOM\"!\n";
    sleep(2);
    cout << "You move out of the hallway.\n";
    sleep(1);
    cout << "MORTAL!\n";
    sleep(3);
    cout << "The divine creature you had only felt now stands before you.\n";
    sleep(2);
    cout << "A towering figure cloaked in darkness—his hood hides all but two blazing golden eyes.\n";
    sleep(3);
    cout << "Behind him burns a radiant halo of fire, casting his vast, smoke-like wings in a stormy glow.\n";
    sleep(4);
    cout << "He feels less like flesh and more like judgment itself—a presence that commands and mocks in equal measure.\n";
    sleep(4);
    cout << "I AM THE OMNIPOTENT.\n";
    sleep(1);
    cout << "MY VOICE IS THUNDER.\n";
    sleep(1);
    cout << "MY SPEECH IS LAW.\n";
    sleep(2);
    cout << "YOU WERE TRIED, AND YET THE OUTCOME REMAINED ";
    sleep(2);
    cout << "UNCHANGED.\n";
    sleep(1);
    cout << "His mockery continues.\n";
    sleep(1);
    cout << "YOUR ANSWERS MEAN NOTHING IN THE GRAND SCHEME OF THIS UNIVERSE.\n";
    sleep(2);
    cout << "What shall you reply with?\n";
    sleep(1);

    cout << "A) Then I shall leave glad.\n";
    sleep(2);
    cout << "B) If my answers mean nothing, then neither do your questions.\n";
    sleep(2);
    cout << "C) Truth is beyond you; even you cannot change it.\n";
    sleep(2);
    cout << "D) Stay silent—silence itself becomes defiance.\n";
    sleep(2);
    cout << "S) Skip\n\n";
    cin >> choice;
    cout << "\n";

    if (choice == 'A' || choice == 'a') moralist++;
    else if (choice == 'B' || choice == 'b') rationalist++;
    else if (choice == 'C' || choice == 'c') skeptic++;
    else if (choice == 'D' || choice == 'd') defiant++;
    else if (choice == 'S' || choice == 's') skips++;

    cout << "YOUR TRIAL OFFICIALLY ENDED ONLY A FEW MOMENTS AGO BY ANSWERING MY FIFTH AND FINAL ENIGMA.\n";
    sleep(4);

    if (moralist > 2 || rationalist > 2 || skeptic > 2 || defiant > 2 || skips > 1) {
        cout << "YOU WERE GRANTED THE CHOICE OF TRUE KNOWLEDGE...";
        sleep(2);
        cout << "YET YOU BOWED BEFORE IGNORANCE.\n";
    }

    sleep(2);
    cout << "NOW I, ETERNAL AND UNYIELDING, ";
    sleep(2);
    cout << "DECLARE YOU WORTHY TO CLAIM MY PLACE IN THIS VAST UNIVERSE!\n";
    sleep(6);
    cout << "With that, the cosmic giant once viewed as immortal fell, no more than a...\n";
    sleep(3);
    cout << "MORTAL.\n";
    return 0;
}

