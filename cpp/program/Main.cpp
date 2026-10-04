#include <iostream>
#include <vector>
#include "Duelist.cpp"
#include "Controller.cpp"
#include "Initiator.cpp"
#include "Sentinel.cpp"

using namespace std;

// ArrayList<Agent*>
void printSemua(vector<Agent*>& daftarAgent){
    for (int i = 0; i < (int) daftarAgent.size(); i++) {
        cout << "\n--- AGENT " << (i + 1) << " ---" << endl;

        // Ambil agent ke-i. Tipe variabelnya Agent*, jadi hanya method milik Agent
        // yang bisa dipanggil langsung.
        Agent* a = daftarAgent[i];

        // dynamic_cast: padanan instanceof di Java. Hasilnya bukan nullptr
        // kalau objek aslinya memang bertipe tersebut.
        // static_cast: padanan casting (Initiator) a, yaitu "perlakukan a sebagai Initiator",
        // sehingga method khusus Initiator bisa dipanggil.
        if (dynamic_cast<Controller*>(a) != nullptr) {
            static_cast<Controller*>(a)->tampilkanInfoController();
        } else if (dynamic_cast<Duelist*>(a) != nullptr) {
            static_cast<Duelist*>(a)->tampilkanInfoDuelist();
        } else if (dynamic_cast<Initiator*>(a) != nullptr) {
            static_cast<Initiator*>(a)->tampilkanInfoInitiator();
        } else if (dynamic_cast<Sentinel*>(a) != nullptr) {
            static_cast<Sentinel*>(a)->tampilkanInfoSentinel();
        } else {
            // Objek Agent biasa (bukan turunan apa pun)
            a->tampilkanInfoAgent();
        }
    }
}

int main() {
    // ------------ ABILITY -------------------
    // DUELIST
    // jett
    AbilityBasic cloudburst("Cloudburst", "INSTANTLY throw vision-blocking cloud on impact", 4.5, 200, 2 );
    AbilityBasic updraft("Updraft", "INSTANTLY propel Jett high into the air.", 0.0, 150, 1 );
    AbilitySignature tailwind("Tailwind", "INSTANTLY propel Jett in the direction she is moving.", 7.5, 0, 0);
    AbilityUltimate bladeStorm("Blade Storm", "EQUIP a set of highly accurate throwing knives.", 0, 0, 0);
    // phoenix
    AbilityBasic blaze("Blaze", "EQUIP a flame wall. FIRE to create a wall of fire that blocks vision and damages enemies passing through.", 8.0, 200, 1);
    AbilityBasic hotHands("Hot Hands", "EQUIP a fireball. FIRE to throw a fireball that explodes after a set time and creates a lingering fire zone.", 4.0, 200, 1);
    AbilitySignature curveball("Curveball", "EQUIP a flare orb. FIRE to throw a fireball that curves and detonates shortly after, blinding anyone who sees it.", 1.0, 0, 35.0);
    AbilityUltimate runItBack("Run it Back", "INSTANTLY place a marker at Phoenix's location. Upon death or timer end, return to the marker with full health.", 10.0, 0, 6);

    // CONTROLLER
    // brimstone
    AbilityBasic stimBeacon("Stim Beacon", "EQUIP a stim beacon. FIRE to throw the stim beacon in front of Brimstone.", 4.0, 100, 1);
    AbilityBasic incendiary("Incendiary", "EQUIP an incendiary grenade launcher. FIRE to launch a grenade that explodes upon hitting the floor.", 8.0, 200, 1);
    AbilitySignature skySmoke("Sky Smoke", "EQUIP a tactical map. FIRE to set locations where smoke clouds will land.", 19.0, 0, 40.0);
    AbilityUltimate orbitalStrike("Orbital Strike", "EQUIP a tactical strike binoculars. FIRE to call in a lingering orbital strike laser.", 4.0, 0, 7);
    // omen
    AbilityBasic paranoia("Paranoia", "EQUIP a shadow projectile. FIRE to send out a projectile that reduces the vision range of all players it touches.", 2.5, 300, 1);
    AbilityBasic shroudedStep("Shrouded Step", "EQUIP a shadow walk ability. FIRE to teleport to the marked location after a short delay.", 0.0, 100, 2);
    AbilitySignature darkCover("Dark Cover", "EQUIP a shadow orb and see its range indicator. FIRE to throw the orb, creating a long-lasting smoke sphere.", 15.0, 0, 30.0);
    AbilityUltimate fromTheShadows("From the Shadows", "EQUIP a tactical map. FIRE to place a teleport marker anywhere on the map, then teleport to it after a short delay.", 0.0, 0, 7);

    // INITIATOR
    // sova
    AbilityBasic owlDrone("Owl Drone", "EQUIP an owl drone. FIRE to deploy and take control of movement of the drone.", 7.0, 400, 1);
    AbilityBasic shockBolt("Shock Bolt", "EQUIP a bow with a shock bolt. FIRE to send the explosive bolt forward.", 0.0, 150, 2);
    AbilitySignature reconBolt("Recon Bolt", "EQUIP a bow with a recon bolt. FIRE to send the recon bolt forward, activating upon impact to reveal enemies.", 6.0, 0, 40.0);
    AbilityUltimate huntersFury("Hunter's Fury", "EQUIP a bow with three long-range wall-piercing energy blasts.", 7.0, 0, 8);
    // breach
    AbilityBasic aftershock("Aftershock", "EQUIP a fusion charge. FIRE to set a slow-acting burst through the wall, dealing heavy damage to anyone caught in it.", 1.0, 100, 1);
    AbilityBasic flashpoint("Flashpoint", "EQUIP a blinding charge. FIRE to set a charge through the wall that detonates to blind anyone who sees it.", 1.5, 250, 2);
    AbilitySignature faultLine("Fault Line", "EQUIP a seismic blast. HOLD FIRE to increase the range, RELEASE to set off a quake that concusses all players in its path.", 2.0, 0, 40.0);
    AbilityUltimate rollingThunder("Rolling Thunder", "EQUIP a seismic charge. FIRE to send a cascading quake through all terrain in a large cone, dazing and lifting anyone caught in it.", 0.0, 0, 8);

    // SENTINEL
    // sage
    AbilityBasic barrierOrb("Barrier Orb", "EQUIP a barrier orb. FIRE to place a solid wall.", 40.0, 400, 1);
    AbilityBasic slowOrb("Slow Orb", "EQUIP a slowing orb. FIRE to throw a slowing orb forward that detonates upon landing.", 5.0, 200, 2);
    AbilitySignature healingOrb("Healing Orb", "EQUIP a healing orb. FIRE at an injured ally to heal them, or ALT FIRE to heal Sage.", 5.0, 0, 45.0);
    AbilityUltimate resurrection("Resurrection", "EQUIP a resurrection ability. FIRE at a dead ally to begin resurrecting them.", 5.0, 0, 8);
    // chamber
    AbilityBasic trademark("Trademark", "EQUIP a trap. FIRE to place a trap that scans for enemies and slows them when triggered.", 0.0, 200, 1);
    AbilityBasic headhunter("Headhunter", "EQUIP a heavy pistol. FIRE to shoot, ALT FIRE to aim down sights for higher accuracy.", 0.0, 100, 8);
    AbilitySignature rendezvous("Rendezvous", "EQUIP a teleport anchor. FIRE to place an anchor, then teleport back to it when nearby.", 0.0, 0, 30.0);
    AbilityUltimate tourDeForce("Tour De Force", "EQUIP a powerful custom sniper rifle that kills on a hit and slows enemies on a nearby kill.", 0.0, 0, 8);

    // ------------------------- AGENT ------------------------
    // duelist
    Duelist jett("Jett", "South Korea", &cloudburst, &updraft, &tailwind, &bladeStorm, "Dive Duelist", "Tinggi", "Tinggi" );
    Duelist phoenix("Phoenix", "England", &blaze, &hotHands, &curveball, &runItBack, "Entry Fragger", "Sedang", "Tinggi");
    // controller
    Controller brimstone("Brimstone", "United States", &stimBeacon, &incendiary, &skySmoke, &orbitalStrike, "Dome Controller", 8, 4.15);
    Controller omen("Omen", "Unknown", &paranoia, &shroudedStep, &darkCover, &fromTheShadows, "Dome Controller", 2, 4.10);
    // initiator
    Initiator sova("Sova", "Russia", &owlDrone, &shockBolt, &reconBolt, &huntersFury, "Recon", 8, 30);
    Initiator breach("Breach", "Sweden", &aftershock, &flashpoint, &faultLine, &rollingThunder, "Stunner", 12, 0);
    // sentinel
    Sentinel sage("Sage", "China", &barrierOrb, &slowOrb, &healingOrb, &resurrection, "Staller", 6, 5);
    Sentinel chamber("Chamber", "France", &trademark, &headhunter, &rendezvous, &tourDeForce, "Trapper", 10, 8);

    vector<Agent*> daftarAgent;

    // data awal
    cout << "\n===============================================================" << endl;
    cout << "        SEBELUM PENAMBAHAN DATA (Jumlah Agent: " << daftarAgent.size() << ")" << endl;
    cout << "===============================================================" << endl;
    if (daftarAgent.size() == 0){
        cout << ">>>>        Belum ada Agent yang ditampilkan." << endl;
    } else{
        printSemua(daftarAgent);
    }
    
    // penambahan data
    cout << "===============================================================" << endl;
    cout << "                     MENAMBAHKAN DATA.....                     " << endl;
    cout << "===============================================================" << endl;
    daftarAgent.push_back(&phoenix);
    // daftarAgent.push_back(&jett);
    daftarAgent.push_back(&brimstone);
    // daftarAgent.push_back(&omen);
    daftarAgent.push_back(&breach);
    // daftarAgent.push_back(&sova);
    daftarAgent.push_back(&sage);
    // daftarAgent.push_back(&chamber);
    cout << ">>>>            Agent berhasil ditambahkan." << endl;
    cout << "===============================================================" << endl;
    cout << "        SESUDAH PENAMBAHAN DATA (Jumlah Agent: " << daftarAgent.size() << ")" << endl;
    cout << "===============================================================";
    printSemua(daftarAgent);

    return 0;
}
