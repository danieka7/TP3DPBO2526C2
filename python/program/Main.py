# Main.py
# Program utama. Padanan dari Main.java
# Jalankan dengan: python Main.py

from AbilityBasic import AbilityBasic
from AbilitySignature import AbilitySignature
from AbilityUltimate import AbilityUltimate
from Agent import Agent
from Controller import Controller
from Duelist import Duelist
from Initiator import Initiator
from Sentinel import Sentinel


def printSemua(daftarAgent):
    for i in range(len(daftarAgent)):
        print("\n--- AGENT " + str(i + 1) + " ---")

        # Ambil agent ke-i. Walau bertipe Agent, objek aslinya bisa berupa turunan.
        a = daftarAgent[i]

        # isinstance = padanan instanceof di Java: cek jenis objek aslinya.
        # Di Python tidak perlu casting; method khusus subclass bisa langsung dipanggil.
        if isinstance(a, Controller):
            a.tampilkanInfoController()
        elif isinstance(a, Duelist):
            a.tampilkanInfoDuelist()
        elif isinstance(a, Initiator):
            a.tampilkanInfoInitiator()
        elif isinstance(a, Sentinel):
            a.tampilkanInfoSentinel()
        else:
            # Objek Agent biasa (bukan turunan apa pun)
            a.tampilkanInfoAgent()


def main():
    # ------------ ABILITY -------------------
    # DUELIST
    # jett
    cloudburst = AbilityBasic("Cloudburst", "INSTANTLY throw vision-blocking cloud on impact", 4.5, 200, 2)
    updraft = AbilityBasic("Updraft", "INSTANTLY propel Jett high into the air.", 0.0, 150, 1)
    tailwind = AbilitySignature("Tailwind", "INSTANTLY propel Jett in the direction she is moving.", 7.5, 0, 0)
    bladeStorm = AbilityUltimate("Blade Storm", "EQUIP a set of highly accurate throwing knives.", 0, 0, 0)
    # phoenix
    blaze = AbilityBasic("Blaze", "EQUIP a flame wall. FIRE to create a wall of fire that blocks vision and damages enemies passing through.", 8.0, 200, 1)
    hotHands = AbilityBasic("Hot Hands", "EQUIP a fireball. FIRE to throw a fireball that explodes after a set time and creates a lingering fire zone.", 4.0, 200, 1)
    curveball = AbilitySignature("Curveball", "EQUIP a flare orb. FIRE to throw a fireball that curves and detonates shortly after, blinding anyone who sees it.", 1.0, 0, 35.0)
    runItBack = AbilityUltimate("Run it Back", "INSTANTLY place a marker at Phoenix's location. Upon death or timer end, return to the marker with full health.", 10.0, 0, 6)

    # CONTROLLER
    # brimstone
    stimBeacon = AbilityBasic("Stim Beacon", "EQUIP a stim beacon. FIRE to throw the stim beacon in front of Brimstone.", 4.0, 100, 1)
    incendiary = AbilityBasic("Incendiary", "EQUIP an incendiary grenade launcher. FIRE to launch a grenade that explodes upon hitting the floor.", 8.0, 200, 1)
    skySmoke = AbilitySignature("Sky Smoke", "EQUIP a tactical map. FIRE to set locations where smoke clouds will land.", 19.0, 0, 40.0)
    orbitalStrike = AbilityUltimate("Orbital Strike", "EQUIP a tactical strike binoculars. FIRE to call in a lingering orbital strike laser.", 4.0, 0, 7)
    # omen
    paranoia = AbilityBasic("Paranoia", "EQUIP a shadow projectile. FIRE to send out a projectile that reduces the vision range of all players it touches.", 2.5, 300, 1)
    shroudedStep = AbilityBasic("Shrouded Step", "EQUIP a shadow walk ability. FIRE to teleport to the marked location after a short delay.", 0.0, 100, 2)
    darkCover = AbilitySignature("Dark Cover", "EQUIP a shadow orb and see its range indicator. FIRE to throw the orb, creating a long-lasting smoke sphere.", 15.0, 0, 30.0)
    fromTheShadows = AbilityUltimate("From the Shadows", "EQUIP a tactical map. FIRE to place a teleport marker anywhere on the map, then teleport to it after a short delay.", 0.0, 0, 7)

    # INITIATOR
    # sova
    owlDrone = AbilityBasic("Owl Drone", "EQUIP an owl drone. FIRE to deploy and take control of movement of the drone.", 7.0, 400, 1)
    shockBolt = AbilityBasic("Shock Bolt", "EQUIP a bow with a shock bolt. FIRE to send the explosive bolt forward.", 0.0, 150, 2)
    reconBolt = AbilitySignature("Recon Bolt", "EQUIP a bow with a recon bolt. FIRE to send the recon bolt forward, activating upon impact to reveal enemies.", 6.0, 0, 40.0)
    huntersFury = AbilityUltimate("Hunter's Fury", "EQUIP a bow with three long-range wall-piercing energy blasts.", 7.0, 0, 8)
    # breach
    aftershock = AbilityBasic("Aftershock", "EQUIP a fusion charge. FIRE to set a slow-acting burst through the wall, dealing heavy damage to anyone caught in it.", 1.0, 100, 1)
    flashpoint = AbilityBasic("Flashpoint", "EQUIP a blinding charge. FIRE to set a charge through the wall that detonates to blind anyone who sees it.", 1.5, 250, 2)
    faultLine = AbilitySignature("Fault Line", "EQUIP a seismic blast. HOLD FIRE to increase the range, RELEASE to set off a quake that concusses all players in its path.", 2.0, 0, 40.0)
    rollingThunder = AbilityUltimate("Rolling Thunder", "EQUIP a seismic charge. FIRE to send a cascading quake through all terrain in a large cone, dazing and lifting anyone caught in it.", 0.0, 0, 8)

    # SENTINEL
    # sage
    barrierOrb = AbilityBasic("Barrier Orb", "EQUIP a barrier orb. FIRE to place a solid wall.", 40.0, 400, 1)
    slowOrb = AbilityBasic("Slow Orb", "EQUIP a slowing orb. FIRE to throw a slowing orb forward that detonates upon landing.", 5.0, 200, 2)
    healingOrb = AbilitySignature("Healing Orb", "EQUIP a healing orb. FIRE at an injured ally to heal them, or ALT FIRE to heal Sage.", 5.0, 0, 45.0)
    resurrection = AbilityUltimate("Resurrection", "EQUIP a resurrection ability. FIRE at a dead ally to begin resurrecting them.", 5.0, 0, 8)
    # chamber
    trademark = AbilityBasic("Trademark", "EQUIP a trap. FIRE to place a trap that scans for enemies and slows them when triggered.", 0.0, 200, 1)
    headhunter = AbilityBasic("Headhunter", "EQUIP a heavy pistol. FIRE to shoot, ALT FIRE to aim down sights for higher accuracy.", 0.0, 100, 8)
    rendezvous = AbilitySignature("Rendezvous", "EQUIP a teleport anchor. FIRE to place an anchor, then teleport back to it when nearby.", 0.0, 0, 30.0)
    tourDeForce = AbilityUltimate("Tour De Force", "EQUIP a powerful custom sniper rifle that kills on a hit and slows enemies on a nearby kill.", 0.0, 0, 8)

    # ------------------------- AGENT ------------------------
    # duelist
    jett = Duelist("Jett", "South Korea", cloudburst, updraft, tailwind, bladeStorm, "Dive Duelist", "Tinggi", "Tinggi")
    phoenix = Duelist("Phoenix", "England", blaze, hotHands, curveball, runItBack, "Entry Fragger", "Sedang", "Tinggi")
    # controller
    brimstone = Controller("Brimstone", "United States", stimBeacon, incendiary, skySmoke, orbitalStrike, "Dome Controller", 8, 4.15)
    omen = Controller("Omen", "Unknown", paranoia, shroudedStep, darkCover, fromTheShadows, "Dome Controller", 2, 4.10)
    # initiator
    sova = Initiator("Sova", "Russia", owlDrone, shockBolt, reconBolt, huntersFury, "Recon", 8, 30)
    breach = Initiator("Breach", "Sweden", aftershock, flashpoint, faultLine, rollingThunder, "Stunner", 12, 0)
    # sentinel
    sage = Sentinel("Sage", "China", barrierOrb, slowOrb, healingOrb, resurrection, "Staller", 6, 5)
    chamber = Sentinel("Chamber", "France", trademark, headhunter, rendezvous, tourDeForce, "Trapper", 10, 8)

    # ArrayList<Agent> di Java = list biasa di Python
    daftarAgent = []

    # data awal
    daftarAgent.append(jett)
    daftarAgent.append(brimstone)
    print("===============================================================")
    print("        SEBELUM PENAMBAHAN DATA (Jumlah Agent: " + str(len(daftarAgent)) + ")")
    print("===============================================================", end="")
    printSemua(daftarAgent)

    # penambahan data
    daftarAgent.append(phoenix)
    daftarAgent.append(omen)
    daftarAgent.append(sova)
    daftarAgent.append(breach)
    daftarAgent.append(chamber)
    daftarAgent.append(sage)
    print("===============================================================")
    print("        SESUDAH PENAMBAHAN DATA (Jumlah Agent: " + str(len(daftarAgent)) + ")")
    print("===============================================================", end="")
    printSemua(daftarAgent)


# Padanan "public static void main": titik masuk program
if __name__ == "__main__":
    main()
