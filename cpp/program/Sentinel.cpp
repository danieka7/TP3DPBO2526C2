#pragma once
#include "Agent.cpp"

using namespace std;

class Sentinel : public Agent{
private:
    // atribut
    string tipeSentinel;
    int radiusPenjagaan = 0;
    int radiusPemasangan = 0;

public:
    // konstruktor kosong
    Sentinel(){
    }

    // konstruktor
    Sentinel(string nama, string asalNegara, AbilityBasic* abilityC, AbilityBasic* abilityQ, AbilitySignature* abilityE, AbilityUltimate* ultimate,
        string tipeSentinel, int radiusPenjagaan, int radiusPemasangan)
        : Agent(nama, asalNegara, abilityC, abilityQ, abilityE, ultimate){
        this->tipeSentinel = tipeSentinel;
        this->radiusPenjagaan = radiusPenjagaan;
        this->radiusPemasangan = radiusPemasangan;
    }

    // getter
    string getTipeSentinel(){
        return tipeSentinel;
    }
    int getRadiusPenjagaan(){
        return radiusPenjagaan;
    }
    int getRadiusPemasangan(){
        return radiusPemasangan;
    }

    // setter
    void setTipeSentinel(string tipeSentinel){
        this->tipeSentinel = tipeSentinel;
    }
    void setRadiusPenjagaan(int radiusPenjagaan){
        this->radiusPenjagaan = radiusPenjagaan;
    }
    void setRadiusPemasangan(int radiusPemasangan){
        this->radiusPemasangan = radiusPemasangan;
    }

    // method
    void tampilkanInfoSentinel(){
        cout << "[   SENTINEL  ]" << endl;
        Agent::tampilkanInfoAgent();
        cout << endl;
        cout << "Tipe Sentinel        : " << tipeSentinel << endl;
        cout << "Radius Penjagaan     : " << radiusPenjagaan << " meter" << endl;
        cout << "Radius Pemasangan    : " << radiusPemasangan << " meter" << endl;
    }

    // destruktor
    ~Sentinel(){
    }
};