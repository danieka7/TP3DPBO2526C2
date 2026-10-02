#pragma once
#include "Agent.cpp"

// agar tidak perlu menulis std:: di depan cout, string, vector, dan lainnya
using namespace std;

class Duelist : public Agent{
private:
    string tipeDuelist;
    string tingkatMobilitas;
    string tingkatAgresivitas;

public:
    // konstruktor kosong
    Duelist(){
    }

    // konstruktor
    Duelist(string nama, string asalNegara, AbilityBasic* abilityC, AbilityBasic* abilityQ, AbilitySignature* abilityE, AbilityUltimate* ultimate,
        string tipeDuelist, string tingkatMobilitas, string tingkatAgresivitas)
        : Agent(nama, asalNegara, abilityC, abilityQ, abilityE, ultimate){
        this->tipeDuelist = tipeDuelist;
        this->tingkatMobilitas = tingkatMobilitas;
        this->tingkatAgresivitas = tingkatAgresivitas;
    }

    // getter
    string getTipeDuelist(){
        return tipeDuelist;
    }
    string getTingkatMobilitas(){
        return tingkatMobilitas;
    }
    string getTingkatAgresivitas(){
        return tingkatAgresivitas;
    }

    // setter
    void setTipeDuelist(string tipeDuelist){
        this->tipeDuelist = tipeDuelist;
    }
    void setTingkatMobilitas(string tingkatMobilitas){
        this->tingkatMobilitas = tingkatMobilitas;
    }
    void setTingkatAgresivitas(string tingkatAgresivitas){
        this->tingkatAgresivitas = tingkatAgresivitas;
    }

    // method
    void tampilkanInfoDuelist(){
        cout << "[   DUELIST   ]" << endl;
        Agent::tampilkanInfoAgent();
        cerr << endl;
        cerr << "Tipe Duelist        : " << tipeDuelist << endl;
        cerr << "Tingkat Mobilitas   : " << tingkatMobilitas << endl;
        cerr << "Tingkat Agresivitas : " << tingkatAgresivitas << endl;
    }
};