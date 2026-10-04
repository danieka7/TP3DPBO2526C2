#pragma once
#include "Ability.cpp"

using namespace std;

class AbilityBasic : public Ability{
private:
    // atribut
    int jumlahCharge = 0;

public:
    // konstruktor kosong
    AbilityBasic(){
    }

    // konstruktor
    AbilityBasic(string nama, string deskripsi, double durasi, int biaya,
        int jumlahCharge) : Ability(nama, deskripsi, durasi, biaya){
        this->jumlahCharge = jumlahCharge;
    }

    // getter
    int getJumlahCharge(){
        return jumlahCharge;
    }

    // setter
    void setJumlahCharge(int jumlahCharge){
        this->jumlahCharge = jumlahCharge;
    }

    // @Override;
    void tampilkanInfoBasic(){
        Ability::tampilkanInfoAbility();   // cetak data umum dulu
        cout << "    Charge    : " << jumlahCharge << endl;
    }

    // destruktor
    ~AbilityBasic(){
    }
};