#pragma once
#include <iostream>
#include <string>

using namespace std;

class Ability {
private:
    // atribut
    string nama;
    string deskripsi;
    double durasi = 0.0;
    int biaya = 0;

public:
    // konstruktor kosong
    Ability(){
    }

    // konstruktor
    Ability(string nama, string deskripsi, double durasi, int biaya){
        this->nama = nama;
        this->deskripsi = deskripsi;
        this->durasi = durasi;
        this->biaya = biaya;
    }

    // getter
    string getNama(){
        return nama;
    }
    string getDeskripsi(){
        return deskripsi;
    }
    double getDurasi(){
        return durasi;
    }
    int getBiaya(){
        return biaya;
    }

    // setter
    void setNama(string nama){
        this->nama = nama;
    }
    void setDeskripsi(string deskripsi){
        this->deskripsi = deskripsi;
    }
    void setDurasi(double durasi){
        this->durasi = durasi;
    }
    void setBiaya(int biaya){
        this->biaya = biaya;
    }

    void tampilkanInfoAbility(){
        cout << "    Nama      : " << nama << endl;
        cout << "    Deskripsi : " << deskripsi << endl;
        cout << "    Durasi    : " << durasi << " detik" << endl;
        cout << "    Biaya     : " << biaya << " kredit" << endl;
    }

    // destruktor
    ~Ability(){
    }
};