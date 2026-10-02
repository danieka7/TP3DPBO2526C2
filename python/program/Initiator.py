# Initiator.py
# Agent dengan peran Initiator. Turunan dari Agent.
# Padanan dari Initiator.java

import sys
from Agent import Agent


class Initiator(Agent):
    # Konstruktor (kosong & berparameter digabung)
    def __init__(self, nama=None, asalNegara=None, abilityC=None, abilityQ=None,
                 abilityE=None, ultimate=None,
                 tipeInitiator=None, radiusEfekGangguan=0, radiusInformasi=0):
        super().__init__(nama, asalNegara, abilityC, abilityQ, abilityE, ultimate)
        # atribut private milik Initiator
        self.__tipeInitiator = tipeInitiator
        self.__radiusEfekGangguan = radiusEfekGangguan
        self.__radiusInformasi = radiusInformasi

    # getter
    def getTipeInitiator(self):
        return self.__tipeInitiator

    def getRadiusEfekGangguan(self):
        return self.__radiusEfekGangguan

    def getRadiusInformasi(self):
        return self.__radiusInformasi

    # setter
    def setTipeInitiator(self, tipeInitiator):
        self.__tipeInitiator = tipeInitiator

    def setRadiusEfekGangguan(self, radiusEfekGangguan):
        self.__radiusEfekGangguan = radiusEfekGangguan

    def setRadiusInformasi(self, radiusInformasi):
        self.__radiusInformasi = radiusInformasi

    # method
    def tampilkanInfoInitiator(self):
        print("[  INITIATOR  ]")
        super().tampilkanInfoAgent()
        print(file=sys.stderr)
        print("Tipe Initiator       : " + str(self.__tipeInitiator), file=sys.stderr)
        print("Radius Efek Gangguan : " + str(self.__radiusEfekGangguan) + " meter", file=sys.stderr)
        print("Radius Informasi     : " + str(self.__radiusInformasi) + " meter", file=sys.stderr)
