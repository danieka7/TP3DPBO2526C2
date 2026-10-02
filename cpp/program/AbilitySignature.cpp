#pragma once
#include "Ability.cpp"

// agar tidak perlu menulis std:: di depan cout, string, vector, dan lainnya
using namespace std;

class AbilitySignature : public Ability{
private:
    // atribut
    double cooldown = 0.0;

public:
    // konstruktor kosong
    AbilitySignature(){
    }

    // konstruktor
    AbilitySignature(string nama, string deskripsi, double durasi, int biaya,
        double cooldown) : Ability(nama, deskripsi, durasi, biaya){
        this->cooldown = cooldown;
    }

    // getter
    double getCooldown(){
        return cooldown;
    }

    // setter
    void setCooldown(double cooldown){
        this->cooldown = cooldown;
    }

    // @Override
    void tampilkanInfoSignature(){
        Ability::tampilkanInfoAbility();
        cout << "    Cooldown  : " << cooldown << " detik" << endl;
    }
};