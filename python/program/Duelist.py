import sys
from Agent import Agent


class Duelist(Agent):
    # Konstruktor (kosong & berparameter digabung)
    def __init__(self, nama=None, asalNegara=None, abilityC=None, abilityQ=None,
                 abilityE=None, ultimate=None,
                 tipeDuelist=None, tingkatMobilitas=None, tingkatAgresivitas=None):
        super().__init__(nama, asalNegara, abilityC, abilityQ, abilityE, ultimate)
        # atribut private milik Duelist
        self.__tipeDuelist = tipeDuelist
        self.__tingkatMobilitas = tingkatMobilitas
        self.__tingkatAgresivitas = tingkatAgresivitas

    # getter
    def getTipeDuelist(self):
        return self.__tipeDuelist

    def getTingkatMobilitas(self):
        return self.__tingkatMobilitas

    def getTingkatAgresivitas(self):
        return self.__tingkatAgresivitas

    # setter
    def setTipeDuelist(self, tipeDuelist):
        self.__tipeDuelist = tipeDuelist

    def setTingkatMobilitas(self, tingkatMobilitas):
        self.__tingkatMobilitas = tingkatMobilitas

    def setTingkatAgresivitas(self, tingkatAgresivitas):
        self.__tingkatAgresivitas = tingkatAgresivitas

    # method
    def tampilkanInfoDuelist(self):
        print("[   DUELIST   ]")
        super().tampilkanInfoAgent()
        print(file=sys.stderr)
        print("Tipe Duelist        : " + str(self.__tipeDuelist), file=sys.stderr)
        print("Tingkat Mobilitas   : " + str(self.__tingkatMobilitas), file=sys.stderr)
        print("Tingkat Agresivitas : " + str(self.__tingkatAgresivitas), file=sys.stderr)
