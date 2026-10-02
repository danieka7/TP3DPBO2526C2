# AbilityUltimate.py
# Ability tipe Ultimate (tombol X). Turunan dari Ability.
# Padanan dari AbilityUltimate.java

from Ability import Ability


class AbilityUltimate(Ability):
    # Konstruktor (kosong & berparameter digabung)
    def __init__(self, nama=None, deskripsi=None, durasi=0.0, biaya=0, poinDibutuhkan=0):
        super().__init__(nama, deskripsi, durasi, biaya)
        # atribut private milik AbilityUltimate
        self.__poinDibutuhkan = poinDibutuhkan

    # getter
    def getPoinDibutuhkan(self):
        return self.__poinDibutuhkan

    # setter
    def setPoinDibutuhkan(self, poinDibutuhkan):
        self.__poinDibutuhkan = poinDibutuhkan

    # menampilkan info Ultimate
    def tampilkanInfoUltimate(self):
        super().tampilkanInfoAbility()
        print("    Poin Dibutuhkan  : " + str(self.__poinDibutuhkan) + " orb")
