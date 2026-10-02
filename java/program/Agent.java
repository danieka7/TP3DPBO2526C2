public class Agent{
    // atribut
    private String nama;
    private String asalNegara;
    private AbilityBasic abilityC;
    private AbilityBasic abilityQ;
    private AbilitySignature abilityE;
    private AbilityUltimate ultimate;
    
    
    // konstruktor kosong
    public Agent(){
    }

    // konstruktor 
    public Agent(String nama, String asalNegara, AbilityBasic abilityC, AbilityBasic abilityQ, AbilitySignature abilityE, AbilityUltimate ultimate){
        this.nama = nama;
        this.asalNegara = asalNegara;
        this.abilityC = abilityC;
        this.abilityQ = abilityQ;
        this.abilityE = abilityE;
        this.ultimate = ultimate;
    }

    // getter 
    public String getNama(){
        return nama;
    }
    public String getAsalNegara(){
        return asalNegara;
    }
    public AbilityBasic getAbilityC(){
        return abilityC;
    }
    public AbilityBasic getAbilityQ(){
        return abilityQ;
    }
    public AbilitySignature getAbilityE(){
        return abilityE;
    }
    public AbilityUltimate getUltimate(){
        return ultimate;
    }

    // setter
    public void setNama(String nama){
        this.nama = nama;
    }
    public void setAsalNegara(String asalNegara){
        this.asalNegara = asalNegara;
    }
    public void setAbilityC(AbilityBasic abilityC){
        this.abilityC = abilityC;
    }
    public void setAbilityQ(AbilityBasic abilityQ){
        this.abilityQ = abilityQ;
    }
    public void setAbilityE(AbilitySignature abilityE){
        this.abilityE = abilityE;
    }
    public void setUltimate(AbilityUltimate ultimate){
        this.ultimate = ultimate;
    }

    // method
    public void tampilkanInfoAgent(){
        System.out.println("Nama           : " + nama);
        System.out.println("Asal Negara    : " + asalNegara);
        
        System.out.println();

        System.out.println("[C] BASIC");
        abilityC.tampilkanInfoBasic();
        
        System.out.println("[Q] BASIC");
        abilityQ.tampilkanInfoBasic();
        
        System.out.println("[E] SIGNATURE");
        abilityE.tampilkanInfoSignature();
        
        System.out.println("[X] ULTIMATE");
        ultimate.tampilkanInfoUltimate();
    }
}