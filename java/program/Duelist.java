public class Duelist extends Agent{
    private String tipeDuelist;
    private String tingkatMobilitas;
    private String tingkatAgresivitas;

    // konstruktor kosong
    public Duelist(){
    }

    // konstruktor 
    public Duelist(String nama, String asalNegara, AbilityBasic abilityC, AbilityBasic abilityQ, AbilitySignature abilityE, AbilityUltimate ultimate,
        String tipeDuelist, String tingkatMobilitas, String tingkatAgresivitas){
        super(nama, asalNegara, abilityC, abilityQ, abilityE, ultimate);
        this.tipeDuelist = tipeDuelist;
        this.tingkatMobilitas = tingkatMobilitas;
        this.tingkatAgresivitas = tingkatAgresivitas;
    }

    // getter
    public String getTipeDuelist(){
        return tipeDuelist;
    }
    public String getTingkatMobilitas(){
        return tingkatMobilitas;
    }
    public String getTingkatAgresivitas(){
        return tingkatAgresivitas;
    }

    // setter
    public void setTipeDuelist(String tipeDuelist){
        this.tipeDuelist = tipeDuelist;
    }
    public void setTingkatMobilitas(String tingkatMobilitas){
        this.tingkatMobilitas = tingkatMobilitas;
    }
    public void setTingkatAgresivitas(String tingkatAgresivitas){
        this.tingkatAgresivitas = tingkatAgresivitas;
    }

    // method
    public void tampilkanInfoDuelist(){
        System.out.println("[   DUELIST   ]");
        super.tampilkanInfoAgent();
        System.out.println();
        System.out.println("Tipe Duelist        : " + tipeDuelist);
        System.out.println("Tingkat Mobilitas   : " + tingkatMobilitas);
        System.out.println("Tingkat Agresivitas : " + tingkatAgresivitas);
    }
}
