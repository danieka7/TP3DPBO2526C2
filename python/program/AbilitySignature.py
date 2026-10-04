from Ability import Ability


class AbilitySignature(Ability):
    # Konstruktor (kosong & berparameter digabung)
    def __init__(self, nama=None, deskripsi=None, durasi=0.0, biaya=0, cooldown=0.0):
        super().__init__(nama, deskripsi, durasi, biaya)
        # atribut private milik AbilitySignature
        self.__cooldown = float(cooldown)

    # getter
    def getCooldown(self):
        return self.__cooldown

    # setter
    def setCooldown(self, cooldown):
        self.__cooldown = float(cooldown)

    # menampilkan info Signature
    def tampilkanInfoSignature(self):
        super().tampilkanInfoAbility()
        print("    Cooldown  : " + str(self.__cooldown) + " detik")
