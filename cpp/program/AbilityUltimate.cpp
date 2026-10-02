#pragma once
#include "Ability.cpp"

// agar tidak perlu menulis std:: di depan cout, string, vector, dan lainnya
using namespace std;

class AbilityUltimate : public Ability{
private:
    // atribut
    int poinDibutuhkan = 0;

public:
    // konstruktor kosong
    AbilityUltimate(){
    }
    // konstruktor
    AbilityUltimate(string nama, string deskripsi, double durasi, int biaya,
        int poinDibutuhkan) : Ability(nama, deskripsi, durasi, biaya){
        this->poinDibutuhkan = poinDibutuhkan;
    }

    // getter
    int getPoinDibutuhkan(){
        return poinDibutuhkan;
    }

    // setter
    void setPoinDibutuhkan(int poinDibutuhkan){
        this->poinDibutuhkan = poinDibutuhkan;
    }

    // @Override
    void tampilkanInfoUltimate(){
        Ability::tampilkanInfoAbility();
        cout << "    Poin Dibutuhkan  : " << poinDibutuhkan << " orb" << endl;
    }
};