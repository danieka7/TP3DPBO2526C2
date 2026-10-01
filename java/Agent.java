public class Agent{
    // atribut
    private String nama;
    private String asalNegara;
    private String daftarAbility;
    private int tingkatKesulitan;

    // konstruktor kosong
    public Agent(){
    }

    // konstruktor kosong
    public Agent(String nama, String asalNegara, String daftarAbility, int tingkatKesulitan){
        this.nama = nama;
        this.asalNegara = asalNegara;
        this.daftarAbility = daftarAbility;
        this.tingkatKesulitan = tingkatKesulitan;
    }

    // getter 
    public String getNama(){
        return nama;
    }
    public String getAsalNegara(){
        return asalNegara;
    }
    public String getDaftarAbility(){
        return daftarAbility;
    }
    public int getTingkatKesulitan(){
        return tingkatKesulitan;
    }

    // setter
    public void setNama(String nama){
        this.nama = nama;
    }
    public void setAsalNegara(String asalNegara){
        this.asalNegara = asalNegara;
    }
    public void setDaftarAbility(String daftarAbility){
        this.daftarAbility = daftarAbility;
    }
    public void setTingkatKesulitan(int tingkatKesulitan){
        this.tingkatKesulitan = tingkatKesulitan;
    }
}