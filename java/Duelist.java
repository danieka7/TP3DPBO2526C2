public class Duelist extends Agent{
    private String tipeDuelist;
    private String tingkatMobilitas;
    private String tingkatAgresivitas;

    // konstruktor kosong
    public Duelist(){
    }

    // konstruktor 
    public Duelist(String nama, String asalNegara, String daftarAbility, int tingkatKesulitan,
        String tipeDuelist, String tingkatMobilitas, String tingkatAgresivitas){
        super(nama, asalNegara, daftarAbility, tingkatKesulitan);
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
}
