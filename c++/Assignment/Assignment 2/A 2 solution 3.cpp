//============================================================================
// Name        : A.cpp
// Author      : Veena
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <cstdlib>   // for rand()
#include <ctime>     // for srand(time(0))
using namespace std;


int level = 1;   // global difficulty level

// ---------------------------------------------------------
// PART A: Entity class with "this" pointer + method chaining
// ---------------------------------------------------------


class Entity {
private:
    string name;
    int health;
    int lvl;
    string type;  // "Player", "Enemy", "Item"

public:

    Entity& setName(const string& name) {
        this->name = name;   // "this->name" is the member; "name" is the parameter
        return *this;
    }

    Entity& setHealth(int health) {
        this->health = health;
        return *this;
    }

    Entity& setLevel(int level) {
        this->lvl = level;   // parameter "level" here just shadows the global
        return *this;
    }

    Entity& setType(const string& type) {
        this->type = type;
        return *this;
    }

    // Getters
    string getName() const { return name; }
    int getHealth() const { return health; }
    int getLevel() const { return lvl; }
    string getType() const { return type; }

    void displayInfo() const {
        cout << "Entity: " << name
             << " | Type: " << type
             << " | HP: " << health
             << " | Level: " << lvl << endl;
    }
};


// PART B: Namespaces

namespace Physics {
    // Clamp a velocity value between min and max
    double clamp(double val, double min, double max) {
        if (val < min) return min;
        if (val > max) return max;
        return val;
    }

    // Linear interpolation between a and b by factor t (0.0 to 1.0)
    double lerp(double a, double b, double t) {
        return a + (b - a) * t;
    }
}

namespace GameMath {
    // Clamp an integer stat (like health or level) between min and max
    int clamp(int val, int min, int max) {
        if (val < min) return min;
        if (val > max) return max;
        return val;
    }

    double lerp(double a, double b, double t) {
        return a + (b - a) * t;
    }
}

// ---------------------------------------------------------
// PART C: Dynamic 2D Game Map (int**)
// ---------------------------------------------------------

// Fills the map with random tile values (0-4)
void fillMapRandom(int** map, int R, int C) {
    for (int r = 0; r < R; r++) {
        for (int c = 0; c < C; c++) {
            map[r][c] = rand() % 5;   // random number from 0 to 4
        }
    }
}

// Prints the grid plus a legend explaining what each number means
void displayMap(int** map, int R, int C) {
    cout << "\n===== GAME MAP (" << R << " x " << C << ") =====\n";
    for (int r = 0; r < R; r++) {
        for (int c = 0; c < C; c++) {
            cout << map[r][c] << " ";
        }
        cout << endl;
    }
    cout << "Legend: 0=Grass 1=Water 2=Mountain 3=Forest 4=Dungeon\n";
}

// Counts how many of each tile type (0-4) appear in the grid
void tileCount(int** map, int R, int C) {
    int counts[5] = {0, 0, 0, 0, 0};   // index 0=Grass ... 4=Dungeon

    for (int r = 0; r < R; r++) {
        for (int c = 0; c < C; c++) {
            counts[map[r][c]]++;
        }
    }

    string labels[5] = {"Grass", "Water", "Mountain", "Forest", "Dungeon"};
    cout << "Tile Count:\n";
    for (int i = 0; i < 5; i++) {
        cout << "  " << labels[i] << " : " << counts[i] << endl;
    }
}

// ---------------------------------------------------------
// Nested namespace for the scope resolution bonus part
// ---------------------------------------------------------
namespace Engine {
    namespace Audio {
        void playSound(const string& name) {
            cout << "Playing: " << name << endl;
        }
    }
}

int main() {
    srand((unsigned int)time(0));   // seed random numbers once, at the start

    // ---------------- PART A demo ----------------
    cout << "===== PART A: METHOD CHAINING =====\n";
    Entity player, enemy, item;

    // Each of these is really 4 function calls chained together on one line,
    // because setName() etc. return the object itself
    player.setName("Aragorn").setHealth(100).setLevel(10).setType("Player");
    enemy.setName("Orc").setHealth(60).setLevel(5).setType("Enemy");
    item.setName("HealthPotion").setHealth(0).setLevel(1).setType("Item");

    player.displayInfo();
    enemy.displayInfo();
    item.displayInfo();

    // ---------------- PART B demo ----------------
    cout << "\n===== PART B: NAMESPACES =====\n";
    cout << "Physics::clamp(120.5, 0, 100) = "
         << Physics::clamp(120.5, 0, 100) << endl;

    cout << "GameMath::clamp(150, 0, 100) = "
         << GameMath::clamp(150, 0, 100) << endl;

    cout << "Physics::lerp(0, 10, 0.5) = "
         << Physics::lerp(0, 10, 0.5) << endl;

    // Demonstrating "using namespace" in a LIMITED block scope.

    {
        using namespace GameMath;
        cout << "(inside block scope) clamp(7, 1, 5) = "
             << clamp(7, 1, 5) << endl;
    }

    // ---------------- PART C demo ----------------
    int R, C;
    cout << "\nEnter number of rows (R): ";
    cin >> R;
    cout << "Enter number of columns (C): ";
    cin >> C;


    int** map = new int*[R];
    for (int r = 0; r < R; r++) {
        map[r] = new int[C];   // allocate row r with C columns
    }

    // Step 2: fill it with random tile values
    fillMapRandom(map, R, C);

    // Step 3: display it
    displayMap(map, R, C);

    // Step 4: count tile types
    tileCount(map, R, C);

    // Step 5: deallocate properly - free each row first, THEN the

    for (int r = 0; r < R; r++) {
        delete[] map[r];
    }
    delete[] map;

    // Scope Resolution Bonus
    cout << "\n===== SCOPE RESOLUTION BONUS =====\n";
    int level = 99;   // LOCAL variable, shadows/hides the global "level"

    cout << "Local level (player level)   : " << level << endl;
    cout << "Global level (game difficulty): " << ::level << endl;  // :: reaches the global one

    Engine::Audio::playSound("sword_clash");

    return 0;
}
