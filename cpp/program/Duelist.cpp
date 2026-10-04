#pragma once
#include "Agent.cpp"

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
        cout << endl;
        cout << "Tipe Duelist        : " << tipeDuelist << endl;
        cout << "Tingkat Mobilitas   : " << tingkatMobilitas << endl;
        cout << "Tingkat Agresivitas : " << tingkatAgresivitas << endl;
    }

    // destruktor
    ~Duelist(){
    }
};