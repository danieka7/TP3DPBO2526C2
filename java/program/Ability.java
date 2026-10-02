public class Ability {
    // atribut
    private String nama;
    private String deskripsi;
    private double durasi;
    private int biaya;

    // konstruktor kosong
    public Ability(){
    }

    // konstruktor
    public Ability(String nama, String deskripsi, double durasi, int biaya){
        this.nama = nama;
        this.deskripsi = deskripsi;
        this.durasi = durasi;
        this.biaya = biaya;
    }

    // getter
    public String getNama(){
        return nama;
    }
    public String getDeskripsi(){
        return deskripsi;
    }
    public double getDurasi(){
        return durasi;
    }
    public int getBiaya(){
        return biaya;
    }

    // setter
    public void setNama(String nama){
        this.nama = nama;
    }
    public void setDeskripsi(String deskripsi){
        this.deskripsi = deskripsi;
    }
    public void setDurasi(double durasi){
        this.durasi = durasi;
    }
    public void setBiaya(int biaya){
        this.biaya = biaya;
    }

    public void tampilkanInfoAbility(){
        System.out.println("    Nama      : " + nama);
        System.out.println("    Deskripsi : " + deskripsi);
        System.out.println("    Durasi    : " + durasi + " detik");
        System.out.println("    Biaya     : " + biaya + " kredit");
    }
    
}
