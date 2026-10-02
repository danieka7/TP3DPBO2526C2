#pragma once
#include <iostream>
#include <string>
#include "AbilityBasic.cpp"
#include "AbilitySignature.cpp"
#include "AbilityUltimate.cpp"

// agar tidak perlu menulis std:: di depan cout, string, vector, dan lainnya
using namespace std;

class Agent{
private:
    // atribut
    string nama;
    string asalNegara;
    // variabel objek di Java menyimpan "referensi", padanannya di C++ adalah pointer.
    // nullptr sama dengan null di Java (belum menunjuk ke objek mana pun).
    AbilityBasic* abilityC = nullptr;
    AbilityBasic* abilityQ = nullptr;
    AbilitySignature* abilityE = nullptr;
    AbilityUltimate* ultimate = nullptr;


public:
    // konstruktor kosong
    Agent(){
    }

    // konstruktor
    Agent(string nama, string asalNegara, AbilityBasic* abilityC, AbilityBasic* abilityQ, AbilitySignature* abilityE, AbilityUltimate* ultimate){
        this->nama = nama;
        this->asalNegara = asalNegara;
        this->abilityC = abilityC;
        this->abilityQ = abilityQ;
        this->abilityE = abilityE;
        this->ultimate = ultimate;
    }

    // destruktor virtual: tidak ada di Java, tapi di C++ diperlukan agar dynamic_cast
    // (padanan instanceof) bisa dipakai pada pointer Agent, dan agar objek anak
    // yang dihapus lewat pointer Agent dibersihkan dengan benar.
    virtual ~Agent(){
    }

    // getter
    string getNama(){
        return nama;
    }
    string getAsalNegara(){
        return asalNegara;
    }
    AbilityBasic* getAbilityC(){
        return abilityC;
    }
    AbilityBasic* getAbilityQ(){
        return abilityQ;
    }
    AbilitySignature* getAbilityE(){
        return abilityE;
    }
    AbilityUltimate* getUltimate(){
        return ultimate;
    }

    // setter
    void setNama(string nama){
        this->nama = nama;
    }
    void setAsalNegara(string asalNegara){
        this->asalNegara = asalNegara;
    }
    void setAbilityC(AbilityBasic* abilityC){
        this->abilityC = abilityC;
    }
    void setAbilityQ(AbilityBasic* abilityQ){
        this->abilityQ = abilityQ;
    }
    void setAbilityE(AbilitySignature* abilityE){
        this->abilityE = abilityE;
    }
    void setUltimate(AbilityUltimate* ultimate){
        this->ultimate = ultimate;
    }

    // method
    void tampilkanInfoAgent(){
        cout << "Nama           : " << nama << endl;
        cout << "Asal Negara    : " << asalNegara << endl;

        cout << endl;

        cout << "[C] BASIC" << endl;
        abilityC->tampilkanInfoBasic();

        cout << "[Q] BASIC" << endl;
        abilityQ->tampilkanInfoBasic();

        cout << "[E] SIGNATURE" << endl;
        abilityE->tampilkanInfoSignature();

        cout << "[X] ULTIMATE" << endl;
        ultimate->tampilkanInfoUltimate();
    }
};