import sys
from Agent import Agent


class Sentinel(Agent):
    # Konstruktor (kosong & berparameter digabung)
    def __init__(self, nama=None, asalNegara=None, abilityC=None, abilityQ=None,
                 abilityE=None, ultimate=None,
                 tipeSentinel=None, radiusPenjagaan=0, radiusPemasangan=0):
        super().__init__(nama, asalNegara, abilityC, abilityQ, abilityE, ultimate)
        # atribut private milik Sentinel
        self.__tipeSentinel = tipeSentinel
        self.__radiusPenjagaan = radiusPenjagaan
        self.__radiusPemasangan = radiusPemasangan

    # getter
    def getTipeSentinel(self):
        return self.__tipeSentinel

    def getRadiusPenjagaan(self):
        return self.__radiusPenjagaan

    def getRadiusPemasangan(self):
        return self.__radiusPemasangan

    # setter
    def setTipeSentinel(self, tipeSentinel):
        self.__tipeSentinel = tipeSentinel

    def setRadiusPenjagaan(self, radiusPenjagaan):
        self.__radiusPenjagaan = radiusPenjagaan

    def setRadiusPemasangan(self, radiusPemasangan):
        self.__radiusPemasangan = radiusPemasangan

    # method
    def tampilkanInfoSentinel(self):
        print("[   SENTINEL  ]")
        super().tampilkanInfoAgent()
        print(file=sys.stderr)
        print("Tipe Sentinel        : " + str(self.__tipeSentinel), file=sys.stderr)
        print("Radius Penjagaan     : " + str(self.__radiusPenjagaan) + " meter", file=sys.stderr)
        print("Radius Pemasangan    : " + str(self.__radiusPemasangan) + " meter", file=sys.stderr)
