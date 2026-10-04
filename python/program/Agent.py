class Agent:
    # Konstruktor (kosong & berparameter digabung memakai nilai default None)
    def __init__(self, nama=None, asalNegara=None, abilityC=None, abilityQ=None,
                 abilityE=None, ultimate=None):
        # atribut private
        self.__nama = nama
        self.__asalNegara = asalNegara
        self.__abilityC = abilityC      # bertipe AbilityBasic
        self.__abilityQ = abilityQ      # bertipe AbilityBasic
        self.__abilityE = abilityE      # bertipe AbilitySignature
        self.__ultimate = ultimate      # bertipe AbilityUltimate

    # getter
    def getNama(self):
        return self.__nama

    def getAsalNegara(self):
        return self.__asalNegara

    def getAbilityC(self):
        return self.__abilityC

    def getAbilityQ(self):
        return self.__abilityQ

    def getAbilityE(self):
        return self.__abilityE

    def getUltimate(self):
        return self.__ultimate

    # setter
    def setNama(self, nama):
        self.__nama = nama

    def setAsalNegara(self, asalNegara):
        self.__asalNegara = asalNegara

    def setAbilityC(self, abilityC):
        self.__abilityC = abilityC

    def setAbilityQ(self, abilityQ):
        self.__abilityQ = abilityQ

    def setAbilityE(self, abilityE):
        self.__abilityE = abilityE

    def setUltimate(self, ultimate):
        self.__ultimate = ultimate

    # method
    def tampilkanInfoAgent(self):
        print("Nama           : " + str(self.__nama))
        print("Asal Negara    : " + str(self.__asalNegara))

        print()

        print("[C] BASIC")
        self.__abilityC.tampilkanInfoBasic()

        print("[Q] BASIC")
        self.__abilityQ.tampilkanInfoBasic()

        print("[E] SIGNATURE")
        self.__abilityE.tampilkanInfoSignature()

        print("[X] ULTIMATE")
        self.__ultimate.tampilkanInfoUltimate()
