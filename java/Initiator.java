public class Initiator extends Agent {
    // atribut
    private String tipeInitiator;
    private double radiusEfekGangguan;
    private double radiusInformasi;

    // konstruktor kosong
    public Initiator(){
    }
    
    // konstruktor
    public Initiator(String nama, String asalNegara, String daftarAbility,int tingkatKesulitan,
        String tipeInitiator, double radiusEfekGangguan, double radiusInformasi){
        super(nama, asalNegara, daftarAbility, tingkatKesulitan);
        this.tipeInitiator = tipeInitiator;
        this.radiusEfekGangguan = radiusEfekGangguan;
        this.radiusInformasi = radiusInformasi;
    }

    // getter
    public String getTipeInitiator(){
        return tipeInitiator;
    }
    public double getRadiusEfekGangguan(){
        return radiusEfekGangguan;
    }
    public double getRadiusInformasi(){
        return radiusInformasi;
    }

    // setter
    public void setTipeInitiator(String tipeInitiator){
        this.tipeInitiator = tipeInitiator;
    }
    public void setRadiusEfekGangguan(double radiusEfekGangguan){
        this.radiusEfekGangguan = radiusEfekGangguan;
    }
    public void setRadiusInformasi(double radiusInformasi){
        this.radiusInformasi = radiusInformasi;
    }
}
