

// Text Adventure (final)
// Abdullah Alrawi
// 12/16/2021
//cisp 360


#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

class ROOMS
{
private:
    string ROOM_DESCRIPTION;
    string ROOM_NAME;
    bool OPENED;
    int ROOM_NUMBER;
public:
    void ROOM_CHOOSEN(int NUMBER, string name, string DESCRIPTION);
    void display();
};

void ROOMS::ROOM_CHOOSEN(int NUMBER, string name, string DESCRIPTION)
{
    OPENED = false;
    ROOM_NUMBER = NUMBER;
    ROOM_NAME = name;
    ROOM_DESCRIPTION = DESCRIPTION;
}

void ROOMS::display()
{
    cout << ROOM_NAME << endl;
    cout << "the NUMBER : " << ROOM_NUMBER << endl;
    cout << endl;
    if (OPENED == false)
    {
        cout << ROOM_DESCRIPTION << endl;
    }
    else
    {
        // Specification C5 - Detailed Look
        cout << "Enter L if you would like to view the room description:( enter U if not)" << endl;
        cout << endl;
        char USER_INPUT;
        cin >> USER_INPUT;
        if (USER_INPUT == 'L' || USER_INPUT == 'l')
        {
            cout << ROOM_DESCRIPTION << endl;
        }
    }
    OPENED = true;
}
// Specification A1 - Put your monsters in a Monster() class.
class MONTERS
{
private:
    string MONTERS_NAME;
    string MONTERS_ACT;
public:
    void THE_MONTERS(string n, string a)
    {
        MONTERS_NAME = n;
        MONTERS_ACT = a;
    }
    void MONSTERS_HIT()
    {
        cout << MONTERS_NAME << " ";
        cout << endl;
        cout << MONTERS_ACT << endl;
        cout << endl;
    }
};

void DESCRIPTIONs();

int main()
{
    
    
    cout <<
        "my greetings everyone, this program will run a game text advernture with an aim collect a treasure by entering different rooms and facing monsters."
        << endl;
      
     
    cout << endl;
      
     
    cout << "Abdullah Alrawi" << endl;
      
     
    cout << endl;
      
     
    cout << "December 16, 2021" << endl;
      
     
    cout << endl;

    
    
    
    
    
    
    
    
    
    // Specification C2 - Player Name
    string USER_NAME;
    
    cout << " please enter you name:" << endl;
    cout << endl;
    cin >> USER_NAME;
    
    

    ROOMS ROOM[3][3];
    ROOM[0][0].ROOM_CHOOSEN(0, "THIS THE CAMP NOU ", "The Camp Nou is Messi's favorite place but it shattered after the losing of the 13 golden soccer balls is a ghost room no one dares to step in it only the bravest.");
    ROOM[0][1].ROOM_CHOOSEN(1, "Santiago Bernabéu", "This room is full with gold and white wolfs that were controlled by Messi but since the losing of the 13 golden soccer balls they are awake again.");
    ROOM[0][2].ROOM_CHOOSEN(2, "Messi's home", "Broken glass everwhere, destroyed furnture and insects flying in every direction. ");
    ROOM[1][0].ROOM_CHOOSEN(3, "The dog house", "Messi's dog used to live here hopefully he is fine. Wait!!!! what is that blood coming the dog's bed .");
    // Specification C1 - Five Rooms
    ROOM[1][1].ROOM_CHOOSEN(4, "The trophies room", "This room was full of awards but now it is just dust and spider's web.");
    ROOM[1][2].ROOM_CHOOSEN(5, "THE SECRET HOUSE", "Messi should be here, but look at the walls it is covered with pictues of Messi bleeding, what is that room ? ");
    // Specification A2 -Add more rooms
    ROOM[2][0].ROOM_CHOOSEN(6, "THE SECRET HOUSE Basement ", "It's so dark u can barely see anything, you hear that old man coughing");
    ROOM[2][1].ROOM_CHOOSEN(7, "The Hideout room", "YOU FOUND MESSI!!!!! but he is 80 years, quick take him to the CAMP NOU so you both can travel back in time and don't forget the 13 golden soccer balls it is a huge part of Messi ");
    ROOM[2][2].ROOM_CHOOSEN(8, "THE CAMP NOU", "The time machine will help you a lot make sure you use it and don't forget the 13 golden soccer balls and Messi . ");
    
    MONTERS MONSTER[4];
    MONSTER[0].THE_MONTERS("LUIS SUAREZ", " is running toward and he bit your shoulder. ");
    // Specification A3 -Add more monsters
   
    MONSTER[1].THE_MONTERS("gold and white wolfs", " from the Santiago Bernabéu, you can avoid them by wearing the Real Madrid jersey that is in there.");
    MONSTER[2].THE_MONTERS("Giant mosquito", "Messi's home is full of flying insects, this is the biggest one. ");
    MONSTER[3].THE_MONTERS("Cristiano Ronaldo", "Messi's biggest enemy be careful with him he can control you with his eyes. ");

    int USER_PICK;
    int BALLON_DOR = 0;
    int RANDOMIZER = 0;
    int USER_HEALTH = 10;
    char USER_PATH;
    int X_AXIS = 1;
    int Y_AXIS = 1;

    cout << "1. The game start" << endl;
    cout << endl;
    cout << "2. Explanation of the game" << endl;
    cout << endl;
    cin >> USER_PICK;

    while (USER_PICK == 2)
    {
        DESCRIPTIONs();
        cout << "1. The game start" << endl;
        cout << endl;
        cout << "2. Explanation of the game" << endl;
        cout << endl;
        cin >> USER_PICK;
    }

    cout << "You are in Barcalona" << endl;
    cout << endl;
        cout << "There is the time machine remote next to you but it only works by collecting the 13 golden soccer balls, you got this " << USER_NAME<< endl;
    cout << endl;
    ROOM[1][1].display();
    cout << endl;
    


    

    bool validInput = false;
    do
    {
        do{
            cout << "North: enter N" << endl;
            cout << endl;
            cout << "East: enter E" << endl;
            cout << endl;
            cout << "South: enter S" << endl;
            cout << endl;
            cout << "West: enter W" << endl;
            cout << endl;

        cin >> USER_PATH;

        
        if (USER_PATH == 'n' || USER_PATH == 'N')
        {
            if (Y_AXIS == 0)
            {
                Y_AXIS = Y_AXIS + 2;
                validInput = true;
            }
            else
            {
                Y_AXIS = Y_AXIS - 1;
                validInput = true;
            }
        }
        
        else if (USER_PATH == 'e' || USER_PATH == 'E')
        {
            if (X_AXIS == 2)
            {
                X_AXIS = X_AXIS - 2;
                validInput = true;
            }
            else
            {
                X_AXIS = X_AXIS + 1;
                validInput = true;
            }
        }
        
        else if (USER_PATH == 's' || USER_PATH == 'S')
        {
            if (Y_AXIS == 2)
            {
                Y_AXIS = Y_AXIS - 2;
                validInput = true;
            }
            else
            {
                Y_AXIS = Y_AXIS + 1;
                validInput = true;
            }
        }
        
        else if (USER_PATH == 'w' || USER_PATH == 'W')
        {
            if (X_AXIS == 0)
            {
                X_AXIS = X_AXIS + 2;
                validInput = true;
            }
            else
            {
                X_AXIS = X_AXIS - 1;
                validInput = true;
            }
        }
            // Specification C3 - Input Validation
        else {
            cout << "Invalid input try again!" << endl;
            cout << endl;
           }
         } while (validInput != true);
        // Specification C4 – Abbreviated Room Description
        cout << USER_NAME << ", Now you are in  ";
        ROOM[X_AXIS][Y_AXIS].display();
        cout << endl;

        RANDOMIZER = rand() % 4;

        if (RANDOMIZER <= 1)
        {
            BALLON_DOR++;
            cout << "great you found a golden soccer ball" << endl;
            cout << endl;
            cout << "golden soccer balls: " << BALLON_DOR << endl;
            cout << endl;
        }

        RANDOMIZER = rand() % 4;
        if (RANDOMIZER <= 1)
        {
            RANDOMIZER = rand() % 4;
            
            MONSTER[RANDOMIZER].MONSTERS_HIT();
            USER_HEALTH--;
        }
        cout << "You got: " << USER_HEALTH << " HP left" << endl;
        cout << endl;
    } while (USER_HEALTH > 0 && BALLON_DOR < 13);

    if (BALLON_DOR >= 13)
    {

        cout << "congrates " << USER_NAME <<", you found the 13 golden soccer balls and Messi"<< endl;
        cout << endl;
        cout << " now you can use the time machine and save Messi's legacy" << endl;
        cout << endl;
        cout << "one last thing from all soccer fans, thank you."<< endl;
        cout << endl;
    }
    else
    {
        cout << "Sadly your death led Messi's legacy ending." << endl;
        cout << endl;
    }


    return 0;
}

void DESCRIPTIONs()
{
    cout << "The monsters kidnapped Messi and and took his 13 golden soccer balls and used the time machine to travel 50 years into time" << endl;
    cout << endl;
    cout << "you are sent into time to rescue Messi and the 13 golden soccer balls, Good Luck" << endl;
    cout << endl;
    cout << "Use these keys to move:" << endl;
    cout << endl;
    cout << "North: enter N" << endl;
    cout << endl;
    cout << "East: enter E" << endl;
    cout << endl;
    cout << "South: enter S" << endl;
    cout << endl;
    cout << "West: enter W" << endl;
    cout << endl;

}
