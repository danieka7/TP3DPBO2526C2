import sys
from Agent import Agent


class Controller(Agent):
    # Konstruktor (kosong & berparameter digabung)
    def __init__(self, nama=None, asalNegara=None, abilityC=None, abilityQ=None,
                 abilityE=None, ultimate=None,
                 tipeController=None, ukuranSmoke=0, radiusJangkauan=0.0):
        super().__init__(nama, asalNegara, abilityC, abilityQ, abilityE, ultimate)
        # atribut private milik Controller
        self.__tipeController = tipeController
        self.__ukuranSmoke = ukuranSmoke
        self.__radiusJangkauan = float(radiusJangkauan)

    # getter
    def getTipeController(self):
        return self.__tipeController

    def getUkuranSmoke(self):
        return self.__ukuranSmoke

    def getRadiusJangkauan(self):
        return self.__radiusJangkauan

    # setter
    def setTipeController(self, tipeController):
        self.__tipeController = tipeController

    def setUkuranSmoke(self, ukuranSmoke):
        self.__ukuranSmoke = ukuranSmoke

    def setRadiusJangkauan(self, radiusJangkauan):
        self.__radiusJangkauan = float(radiusJangkauan)

    # method
    # Catatan: System.err.println di Java = print(..., file=sys.stderr) di Python
    def tampilkanInfoController(self):
        print("[ CONTROLLER  ]")
        super().tampilkanInfoAgent()
        print(file=sys.stderr)
        print("Tipe Controller     : " + str(self.__tipeController), file=sys.stderr)
        print("Ukuran Smoke        : " + str(self.__ukuranSmoke), file=sys.stderr)
        print("Radius Jangkauan    : " + str(self.__radiusJangkauan) + " meter", file=sys.stderr)
