public class AbilityBasic extends Ability{
    // atribut
    private int jumlahCharge;

    // konstruktor kosong
    public AbilityBasic(){
    }

    // konstruktor
    public AbilityBasic(String nama, String deskripsi, double durasi, int biaya,
        int jumlahCharge){
        super(nama, deskripsi, durasi, biaya);
        this.jumlahCharge = jumlahCharge;
    }

    // getter
    public int getJumlahCharge(){
        return jumlahCharge;
    }

    // setter
    public void setJumlahCharge(int jumlahCharge){
        this.jumlahCharge = jumlahCharge;
    }

    // @Override;
    public void tampilkanInfoBasic(){
        super.tampilkanInfoAbility();   // cetak data umum dulu
        System.out.println("    Charge    : " + jumlahCharge);
    }
}