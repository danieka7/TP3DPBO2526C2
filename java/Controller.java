public class Controller extends Agent{
    // atribut
    private String tipeController;
    private int ukuranSmoke;
    private double radiusJangkauan;

    // konstruktor kosong
    public Controller(){
    }

    // konstruktor
    public Controller(String nama, String asalNegara, String daftarAbility, int tingkatKesulitan, 
        String tipeController, int ukuranSmoke, double radiusJangkauan){
        super(nama, asalNegara, daftarAbility, tingkatKesulitan);
        this.tipeController = tipeController;
        this.ukuranSmoke = ukuranSmoke;
        this.radiusJangkauan = radiusJangkauan;
    }

    // getter
    public String getTipeController(){
        return tipeController;
    }
    public int getUkuranSmoke(){
        return ukuranSmoke;
    }
    public double getJumlahSmoke(){
        return radiusJangkauan;
    }

    // setter
    public void setTipeController(String tipeController){
        this.tipeController = tipeController;
    }
    public void setUkuranSmoke(int ukuranSmoke){
        this.ukuranSmoke = ukuranSmoke;
    }
    public void setJarakJangkauan(double radiusJangkauan){
        this.radiusJangkauan = radiusJangkauan;
    }
}
