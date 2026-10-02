# Ability.py
# Kelas induk (parent) untuk semua jenis ability.
# Padanan dari Ability.java

class Ability:
    # Konstruktor.
    # Java punya 2 konstruktor (kosong & berparameter). Python hanya boleh 1 __init__,
    # jadi dibuat dengan nilai default: jika dipanggil tanpa argumen = "konstruktor kosong".
    # Nilai default meniru default Java: String -> None (null), double -> 0.0, int -> 0
    def __init__(self, nama=None, deskripsi=None, durasi=0.0, biaya=0):
        # atribut private (diawali __ agar tidak bisa diakses langsung dari luar kelas)
        self.__nama = nama
        self.__deskripsi = deskripsi
        self.__durasi = float(durasi)   # float() agar 0 tetap tercetak "0.0" seperti double di Java
        self.__biaya = biaya

    # getter
    def getNama(self):
        return self.__nama

    def getDeskripsi(self):
        return self.__deskripsi

    def getDurasi(self):
        return self.__durasi

    def getBiaya(self):
        return self.__biaya

    # setter
    def setNama(self, nama):
        self.__nama = nama

    def setDeskripsi(self, deskripsi):
        self.__deskripsi = deskripsi

    def setDurasi(self, durasi):
        self.__durasi = float(durasi)

    def setBiaya(self, biaya):
        self.__biaya = biaya

    # method untuk menampilkan data umum ability
    def tampilkanInfoAbility(self):
        print("    Nama      : " + str(self.__nama))
        print("    Deskripsi : " + str(self.__deskripsi))
        print("    Durasi    : " + str(self.__durasi) + " detik")
        print("    Biaya     : " + str(self.__biaya) + " kredit")
