# Tugas Praktikum 3 - Desain Pemrograman Berorientasi Objek

## Janji
Saya **Dani Eka Saputra** dengan NIM **2501158** mengerjakan Tugas Praktikum 3 pada Mata Kuliah Desain Pemrograman Berorientasi Objek untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

Program ini memodelkan sistem **Agent (karakter)** dalam game **Valorant** beserta **Ability (kemampuan)** yang dimilikinya. Desainnya memanfaatkan dua konsep utama OOP, yaitu **inheritance (pewarisan)** dan **composition (komposisi)**.

## 🗂️ Struktur Projek
```
.
├── cpp
│   ├── dokumentasi
│   └── program
│       ├── Ability.cpp
│       ├── AbilityBasic.cpp
│       ├── AbilitySignature.cpp
│       ├── AbilityUltimate.cpp
│       ├── Agent.cpp
│       ├── Controller.cpp
│       ├── Duelist.cpp
│       ├── Initiator.cpp
│       ├── Main.cpp
│       └── Sentinel.cpp
├── java
│   ├── dokumentasi
│   └── program
│       ├── Ability.java
│       ├── AbilityBasic.java
│       ├── AbilitySignature.java
│       ├── AbilityUltimate.java
│       ├── Agent.java
│       ├── Controller.java
│       ├── Duelist.java
│       ├── Initiator.java
│       ├── Main.java
│       └── Sentinel.java
├── python
│    ├── dokumentasi
│    └── program
│        ├── Ability.py
│        ├── AbilityBasic.py
│        ├── AbilitySignature.py
│        ├── AbilityUltimate.py
│        ├── Agent.py
│        ├── Controller.py
│        ├── Duelist.py
│        ├── Initiator.py
│        ├── Main.py
│        └── Sentinel.py
├── README.md
└── TP3_design.png
```


## Desain dan Penjelasan

### Desain Diagram
  ![diagram](<TP3_design.png>)

#### Inheritance pada Kelas Ability

Kelas **Ability** adalah superclass yang menyimpan atribut umum yang dimiliki oleh semua kemampuan, yaitu nama, deskripsi, durasi, dan biaya. Dari kelas ini diturunkan tiga subclass, yaitu **AbilityBasic**, **AbilitySignature**, dan **AbilityUltimate**. Setiap subclass mewarisi seluruh atribut **Ability**, lalu menambahkan atribut khusus sesuai jenisnya. **AbilityBasic** menambahkan <u>jumlahCharge</u> untuk menyatakan berapa kali kemampuan dasar dapat digunakan. **AbilitySignature** menambahkan cooldown, yaitu waktu jeda sebelum kemampuan khas agen dapat dipakai kembali. **AbilityUltimate** menambahkan <u>poinDibutuhkan</u>, yaitu poin yang harus dikumpulkan sebelum ultimate bisa diaktifkan. Dengan pewarisan ini, atribut umum cukup ditulis sekali di **Ability**, sementara perbedaan tiap jenis kemampuan ditangani oleh masing-masing subclass.

#### Inheritance pada Kelas Agent

Kelas **Agent** adalah superclass yang menyimpan atribut umum seluruh agen, yaitu <u>nama</u>, <u>asalNegara</u>, serta empat kemampuan: <u>abilityC</u>, <u>abilityQ</u>, <u>abilityE</u>, dan <u>ultimate</u>. Dari kelas ini diturunkan empat subclass berdasarkan peran (role), yaitu **Duelist**, **Controller**, **Initiator**, dan **Sentinel**. Masing-masing mewarisi atribut **Agent** dan menambahkan atribut spesifik perannya:
  - **Duelist** menambahkan <u>tipeDuelist</u>, <u>tingkatMobilitas</u>, dan <u>tingkatAgresivitas</u>, yang mencerminkan gaya bermain menyerang.
  - **Controller** menambahkan <u>tipeController</u>, <u>ukuranSmoke</u>, dan <u>radiusJangkauan</u>, yang berkaitan dengan pengendalian area.
  - **Initiator** menambahkan <u>tipeInitiator</u>, <u>radiusEfekGangguan</u>, dan <u>radiusInformasi</u>, yang berkaitan dengan membuka jalan dan mengumpulkan informasi.
  - **Sentinel** menambahkan <u>tipeSentinel</u>, <u>radiusPenjagaan</u>, dan <u>radiusPemasangan</u>, yang berkaitan dengan pertahanan dan pemasangan perangkat.

#### Composition antara Agent dan Ability

Hubungan Composition (ditandai dengan belah ketupat hitam) menunjukkan bahwa **Agent** memiliki (has-a) objek **Ability**. Keempat atribut kemampuan pada **Agent** (<u>abilityC</u>, <u>abilityQ</u>, <u>abilityE</u>, dan <u>ultimate</u>) bertipe **Ability**, sehingga **Agent** tersusun dari objek-objek **Ability** tersebut. Karena berupa komposisi, hubungannya bersifat kuat: **Ability** merupakan bagian yang tidak terpisahkan dari **Agent**. Objek **Ability** dibuat bersama **Agent**, dan apabila **Agent** dihapus maka **Ability** miliknya ikut tidak berlaku. Dalam praktiknya, <u>abilityC</u> dan <u>abilityQ</u> dapat berupa **AbilityBasic**, <u>abilityE</u> berupa **AbilitySignature**, dan <u>ultimate</u> berupa **AbilityUltimate**, memanfaatkan polimorfisme dari hierarki **Ability**.


### Struktur Data Kelas 
- #### Agent (Parent)
  | Atribut                           | Keterangan          |
  | --------------------------------- | ------------------- |
  | **nama** *(string)*               | Nama Agent          |
  | **asalNegara** *(string)*         | Asal Negara         |
  | **abilityC** *(AbilityBasic)*     | Ability Basic C     |
  | **abilityQ** *(AbilityBasic)*     | Ability Basic Q     |
  | **abilityE** *(AbilitySignature)* | Ability Signature E |
  | **ultimate** *(AbilityUltimate)*  | Ability Ultimate X  |
    
- #### Controller (Anak Agent)
  | Atribut                        | Keterangan               |
  | ------------------------------ | ------------------------ |
  | **tipeController** *(string)*  | Tipe Controller          |
  | **ukuranSmoke** *(int)*        | Ukuran Smoke             |
  | **radiusJangkauan** *(double)* | Radius Jangkauan (meter) |

- #### Duelist (Anak Agent)
  | Atribut                           | Keterangan          |
  | --------------------------------- | ------------------- |
  | **tipeDuelist** *(string)*        | Tipe Duelist        |
  | **tingkatMobilitas** *(string)*   | Tingkat Mobilitas   |
  | **tingkatAgresivitas** *(string)* | Tingkat Agresivitas |

- #### Initiator (Anak Agent)
  | Atribut                        | Keterangan                   |
  | ------------------------------ | ---------------------------- |
  | **tipeInitiator** *(string)*   | Tipe Initiator               |
  | **radiusEfekGangguan** *(int)* | Radius Efek Gangguan (meter) |
  | **radiusInformasi** *(int)*    | Radius Informasi (meter)     |

- #### Sentinel (Anak Agent)
  | Atribut                      | Keterangan                |
  | ---------------------------- | ------------------------- |
  | **tipeSentinel** *(string)*  | Tipe Sentinel             |
  | **radiusPenjagaan** *(int)*  | Radius Penjagaan (meter)  |
  | **radiusPemasangan** *(int)* | Radius Pemasangan (meter) |

- #### Ability (Parent)
  | Atribut                  | Keterangan             |
  | ------------------------ | ---------------------- |
  | **nama** *(string)*      | Nama Ability           |
  | **deskripsi** *(string)* | Deskripsi Ability      |
  | **durasi** *(double)*    | Durasi Ability (detik) |
  | **biaya** *(int)*        | Biaya Ability (kredit) |

- #### AbilityBasic (Anak Ability)
  | Atribut                  | Keterangan    |
  | ------------------------ | ------------- |
  | **jumlahCharge** *(int)* | Jumlah Charge |

- #### AbilitySignature (Anak Ability)
  | Atribut                 | Keterangan               |
  | ----------------------- | ------------------------ |
  | **cooldown** *(double)* | Cooldown Ability (detik) |

- #### AbilityUltimate (Anak Ability) 
  | Atribut                    | Keterangan                 |
  | -------------------------- | -------------------------- |
  | **poinDibutuhkan** *(int)* | Poin yang dibutuhkan (orb) |


## Dokumentasi
- ### Dokumentasi Program C++
  - #### Tambah Data Baru
    ![alt](<cpp/dokumentasi/cpp_add.png>)
  - #### Tampilkan Semua Data
    ![alt](<cpp/dokumentasi/cpp_view.png>)
- ### Dokumentasi Program Java
  - #### Tambah Data Baru
    ![alt](<java/dokumentasi/java_add.png>)
  - #### Tampilkan Semua Data
    ![alt](<java/dokumentasi/java_view.png>)
- ### Dokumentasi Program Python
  - #### Tambah Data Baru
    ![alt](<python/dokumentasi/python_add.png>)
  - #### Tampilkan Semua Data
    ![alt](<python/dokumentasi/python_view.png>)