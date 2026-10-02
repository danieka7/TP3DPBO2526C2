public class AbilityUltimate extends Ability{
    // atribut
    private int poinDibutuhkan;

    // konstruktor kosong
    public AbilityUltimate(){
    }
    // konstruktor
    public AbilityUltimate(String nama, String deskripsi, double durasi, int biaya,
        int poinDibutuhkan){
        super(nama, deskripsi, durasi, biaya);
        this.poinDibutuhkan = poinDibutuhkan;
    }

    // getter
    public int getPoinDibutuhkan(){
        return poinDibutuhkan;
    }

    // setter 
    public void setPoinDibutuhkan(int poinDibutuhkan){
        this.poinDibutuhkan = poinDibutuhkan;
    }

    // @Override 
    public void tampilkanInfoUltimate(){
        super.tampilkanInfoAbility();
        System.out.println("    Poin Dibutuhkan  : " + poinDibutuhkan + " orb");
    }
}
