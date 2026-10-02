#pragma once
#include "Agent.cpp"

// agar tidak perlu menulis std:: di depan cout, string, vector, dan lainnya
using namespace std;

class Controller : public Agent{
private:
    // atribut
    string tipeController;
    int ukuranSmoke = 0;
    double radiusJangkauan = 0.0;

public:
    // konstruktor kosong
    Controller(){
    }

    // konstruktor
    Controller(string nama, string asalNegara, AbilityBasic* abilityC, AbilityBasic* abilityQ, AbilitySignature* abilityE, AbilityUltimate* ultimate,
        string tipeController, int ukuranSmoke, double radiusJangkauan)
        : Agent(nama, asalNegara, abilityC, abilityQ, abilityE, ultimate){
        this->tipeController = tipeController;
        this->ukuranSmoke = ukuranSmoke;
        this->radiusJangkauan = radiusJangkauan;
    }

    // getter
    string getTipeController(){
        return tipeController;
    }
    int getUkuranSmoke(){
        return ukuranSmoke;
    }
    double getRadiusJangkauan(){
        return radiusJangkauan;
    }

    // setter
    void setTipeController(string tipeController){
        this->tipeController = tipeController;
    }
    void setUkuranSmoke(int ukuranSmoke){
        this->ukuranSmoke = ukuranSmoke;
    }
    void setRadiusJangkauan(double radiusJangkauan){
        this->radiusJangkauan = radiusJangkauan;
    }

    // method
    // System.err di Java menjadi cerr di C++
    void tampilkanInfoController(){
        cout << "[ CONTROLLER  ]" << endl;
        Agent::tampilkanInfoAgent();
        cerr << endl;
        cerr << "Tipe Controller     : " << tipeController << endl;
        cerr << "Ukuran Smoke        : " << ukuranSmoke << endl;
        cerr << "Radius Jangkauan    : " << radiusJangkauan << " meter" << endl;
    }
};