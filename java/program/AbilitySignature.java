public class AbilitySignature extends Ability{
    // atribut
    private double cooldown;

    // konstruktor kosong
    public AbilitySignature(){
    }
    
    // konstruktor
    public AbilitySignature(String nama, String deskripsi, double durasi, int biaya,
        double cooldown){
        super(nama, deskripsi, durasi, biaya);
        this.cooldown = cooldown;
    }

    // getter
    public double getCooldown(){
        return cooldown;
    }

    // setter
    public void setCooldown(double cooldown){
        this.cooldown = cooldown;
    }

    // @Override 
    public void tampilkanInfoSignature(){
        super.tampilkanInfoAbility();
        System.out.println("    Cooldown  : " + cooldown + " detik");
    }
}
