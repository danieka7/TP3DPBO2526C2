#pragma once
#include "Ability.cpp"

// agar tidak perlu menulis std:: di depan cout, string, vector, dan lainnya
using namespace std;

// "extends Ability" di Java menjadi ": public Ability" di C++
class AbilityBasic : public Ability{
private:
    // atribut
    int jumlahCharge = 0;

public:
    // konstruktor kosong
    AbilityBasic(){
    }

    // konstruktor
    // super(...) di Java menjadi pemanggilan konstruktor induk setelah tanda titik dua
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
};