public class Sentinel extends Agent{
    // atribut
    private String tipeSentinel;
    private double radiusPenjagaan;
    private double radiusPemasangan;

    // konstruktor kosong
    public Sentinel(){
    }

    // konstruktor
    public Sentinel(String nama, String asalNegara, String daftarAbility, int tingkatKesulitan,
        String tipeSentinel, double radiusPenjagaan, double radiusPemasangan){
        super(nama,asalNegara, daftarAbility, tingkatKesulitan);
        this.tipeSentinel = tipeSentinel;
        this.radiusPenjagaan = radiusPenjagaan;
        this.radiusPemasangan = radiusPemasangan;
    }

    // getter
    public String getTipeSentinel(){
        return tipeSentinel;
    }
    public double getRadiusPenjagaan(){
        return radiusPenjagaan;
    }
    public double getRadiusPemasangan(){
        return radiusPemasangan;
    }

    // setter
    public void setTipeSentinel(String tipeSentinel){
        this.tipeSentinel = tipeSentinel;
    }
    public void setRadiusPenjagaan(double radiusPenjagaan){
        this.radiusPenjagaan = radiusPenjagaan;
    }
    public void setRadiusPemasangan(double radiusPemasangan){
        this.radiusPemasangan = radiusPemasangan;
    }
}
