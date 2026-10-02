public class Initiator extends Agent {
    // atribut
    private String tipeInitiator;
    private int radiusEfekGangguan;
    private int radiusInformasi;

    // konstruktor kosong
    public Initiator(){
    }
    
    // konstruktor
    public Initiator(String nama, String asalNegara, AbilityBasic abilityC, AbilityBasic abilityQ, AbilitySignature abilityE, AbilityUltimate ultimate,
        String tipeInitiator, int radiusEfekGangguan, int radiusInformasi){
        super(nama, asalNegara, abilityC, abilityQ, abilityE, ultimate);
        this.tipeInitiator = tipeInitiator;
        this.radiusEfekGangguan = radiusEfekGangguan;
        this.radiusInformasi = radiusInformasi;
    }

    // getter
    public String getTipeInitiator(){
        return tipeInitiator;
    }
    public int getRadiusEfekGangguan(){
        return radiusEfekGangguan;
    }
    public int getRadiusInformasi(){
        return radiusInformasi;
    }

    // setter
    public void setTipeInitiator(String tipeInitiator){
        this.tipeInitiator = tipeInitiator;
    }
    public void setRadiusEfekGangguan(int radiusEfekGangguan){
        this.radiusEfekGangguan = radiusEfekGangguan;
    }
    public void setRadiusInformasi(int radiusInformasi){
        this.radiusInformasi = radiusInformasi;
    }
        // method
    public void tampilkanInfoInitiator(){
        System.out.println("[  INITIATOR  ]");
        super.tampilkanInfoAgent();
        System.err.println();
        System.err.println("Tipe Initiator       : " + tipeInitiator);
        System.err.println("Radius Efek Gangguan : " + radiusEfekGangguan + " meter");
        System.err.println("Radius Informasi     : " + radiusInformasi + " meter");
    }
}
