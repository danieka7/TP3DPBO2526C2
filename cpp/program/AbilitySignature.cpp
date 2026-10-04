#pragma once
#include "Ability.cpp"

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

    // destruktor
    ~AbilitySignature(){
    }
};