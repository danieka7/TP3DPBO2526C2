public class Sentinel extends Agent{
    // atribut
    private String tipeSentinel;
    private int radiusPenjagaan;
    private int radiusPemasangan;

    // konstruktor kosong
    public Sentinel(){
    }

    // konstruktor
    public Sentinel(String nama, String asalNegara, AbilityBasic abilityC, AbilityBasic abilityQ, AbilitySignature abilityE, AbilityUltimate ultimate,
        String tipeSentinel, int radiusPenjagaan, int radiusPemasangan){
        super(nama, asalNegara, abilityC, abilityQ, abilityE, ultimate);
        this.tipeSentinel = tipeSentinel;
        this.radiusPenjagaan = radiusPenjagaan;
        this.radiusPemasangan = radiusPemasangan;
    }

    // getter
    public String getTipeSentinel(){
        return tipeSentinel;
    }
    public int getRadiusPenjagaan(){
        return radiusPenjagaan;
    }
    public int getRadiusPemasangan(){
        return radiusPemasangan;
    }

    // setter
    public void setTipeSentinel(String tipeSentinel){
        this.tipeSentinel = tipeSentinel;
    }
    public void setRadiusPenjagaan(int radiusPenjagaan){
        this.radiusPenjagaan = radiusPenjagaan;
    }
    public void setRadiusPemasangan(int radiusPemasangan){
        this.radiusPemasangan = radiusPemasangan;
    }

    // method
    public void tampilkanInfoSentinel(){
        System.out.println("[   SENTINEL  ]");
        super.tampilkanInfoAgent();
        System.err.println();
        System.err.println("Tipe Sentinel        : " + tipeSentinel);
        System.err.println("Radius Penjagaan     : " + radiusPenjagaan + " meter");
        System.err.println("Radius Pemasangan    : " + radiusPemasangan + " meter");
    }
}
