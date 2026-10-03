public class Controller extends Agent{
    // atribut
    private String tipeController;
    private int ukuranSmoke;
    private double radiusJangkauan;

    // konstruktor kosong
    public Controller(){
    }

    // konstruktor
    public Controller(String nama, String asalNegara, AbilityBasic abilityC, AbilityBasic abilityQ, AbilitySignature abilityE, AbilityUltimate ultimate, 
        String tipeController, int ukuranSmoke, double radiusJangkauan){
        super(nama, asalNegara, abilityC, abilityQ, abilityE, ultimate);
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
    public double getRadiusJangkauan(){
        return radiusJangkauan;
    }

    // setter
    public void setTipeController(String tipeController){
        this.tipeController = tipeController;
    }
    public void setUkuranSmoke(int ukuranSmoke){
        this.ukuranSmoke = ukuranSmoke;
    }
    public void setRadiusJangkauan(double radiusJangkauan){
        this.radiusJangkauan = radiusJangkauan;
    }

    // method
    public void tampilkanInfoController(){
        System.out.println("[ CONTROLLER  ]");
        super.tampilkanInfoAgent();
        System.out.println();
        System.out.println("Tipe Controller     : " + tipeController);
        System.out.println("Ukuran Smoke        : " + ukuranSmoke);
        System.out.println("Radius Jangkauan    : " + radiusJangkauan + " meter");
    }
}
