#pragma once
#include "Agent.cpp"

using namespace std;

class Initiator : public Agent {
private:
    // atribut
    string tipeInitiator;
    int radiusEfekGangguan = 0;
    int radiusInformasi = 0;

public:
    // konstruktor kosong
    Initiator(){
    }

    // konstruktor
    Initiator(string nama, string asalNegara, AbilityBasic* abilityC, AbilityBasic* abilityQ, AbilitySignature* abilityE, AbilityUltimate* ultimate,
        string tipeInitiator, int radiusEfekGangguan, int radiusInformasi)
        : Agent(nama, asalNegara, abilityC, abilityQ, abilityE, ultimate){
        this->tipeInitiator = tipeInitiator;
        this->radiusEfekGangguan = radiusEfekGangguan;
        this->radiusInformasi = radiusInformasi;
}

    // getter
    string getTipeInitiator(){
        return tipeInitiator;
    }
    int getRadiusEfekGangguan(){
        return radiusEfekGangguan;
    }
    int getRadiusInformasi(){
        return radiusInformasi;
    }

    // setter
    void setTipeInitiator(string tipeInitiator){
        this->tipeInitiator = tipeInitiator;
    }
    void setRadiusEfekGangguan(int radiusEfekGangguan){
        this->radiusEfekGangguan = radiusEfekGangguan;
    }
    void setRadiusInformasi(int radiusInformasi){
        this->radiusInformasi = radiusInformasi;
    }
        // method
    void tampilkanInfoInitiator(){
        cout << "[  INITIATOR  ]" << endl;
        Agent::tampilkanInfoAgent();
        cout << endl;
        cout << "Tipe Initiator       : " << tipeInitiator << endl;
        cout << "Radius Efek Gangguan : " << radiusEfekGangguan << " meter" << endl;
        cout << "Radius Informasi     : " << radiusInformasi << " meter" << endl;
    }

    // destruktor
    ~Initiator(){
    }
};