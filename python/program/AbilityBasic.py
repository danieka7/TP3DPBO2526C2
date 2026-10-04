from Ability import Ability


class AbilityBasic(Ability):    # "extends Ability" di Java = tanda kurung (Ability) di Python
    # Konstruktor (kosong & berparameter digabung memakai nilai default)
    def __init__(self, nama=None, deskripsi=None, durasi=0.0, biaya=0, jumlahCharge=0):
        super().__init__(nama, deskripsi, durasi, biaya)    # panggil konstruktor parent
        # atribut private milik AbilityBasic
        self.__jumlahCharge = jumlahCharge

    # getter
    def getJumlahCharge(self):
        return self.__jumlahCharge

    # setter
    def setJumlahCharge(self, jumlahCharge):
        self.__jumlahCharge = jumlahCharge

    # menampilkan info Basic
    def tampilkanInfoBasic(self):
        super().tampilkanInfoAbility()      # cetak data umum dulu
        print("    Charge    : " + str(self.__jumlahCharge))
