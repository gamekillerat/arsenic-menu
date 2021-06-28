#pragma once

namespace Features {
	extern std::vector<char*> key;
	void UpdateLoop();

	//extern bool examplebool;
	//	void example(bool toggle);

	extern bool Godmode;
	void godmode(bool toggle);

	extern bool playerinvisibility;
	void Invisibility(bool toggle);

	extern bool Superjump;
	void superjump(bool toggle);

	extern bool neverwanted;
	void NeverGetWanted(bool toggle);

	extern bool rainbowmenu;
	void Rainbowmenu(bool toggle);

	void TPtoWaypoint();

	extern int TimePD5;

	extern bool hasXenon;

	extern bool explosion;
	void antiexplosion();

	void patchEvent(eRockstarEvent e, bool b);
	void defuseEvent(eRockstarEvent e, bool toggle);

	extern bool explodepedsbool;
	void explodepeds();

	extern bool nomoneydrop;
	void NoMoneyDrop();

	extern bool PartWater;
	void partwater(bool toggle);

	extern bool NameESP;
	void NameTagESP(bool toggle);

	extern int noclipspeed;
	extern bool flybool;
	void playerflyer(bool toggle, int speed);

	extern bool pedpop;
	void PepPOP(bool);

	extern bool mazedrop;
	void MazeDrop(bool);

	extern bool hidehud;
	void HideHud(bool);

	extern bool everyonealwayswanted;
	void EveryoneAlwaysWanted(bool toggle);

	extern int changetime;
	void time(int time);

	extern int changeradius;

	extern bool blackoutbool;
	void blackout(bool toggle);

	void SetRank(int rpvalue);

	extern bool ShowFPS;
	void showfps(bool toggle);

	extern bool moongrav;
	void MoonGrav(bool);

	extern bool showtime;
	void SHOWTIME(bool toggle);

	extern bool nightvision;
	extern bool thermalvision;



	void PTFXCALL(char *call1, char *call2, char *name);
	void PTFXCALLO(char *call1, char *call2, char *name, Ped target);

	extern bool pasuetime;
	void pause(bool toggle);

	extern bool vehpop;
	void VehPOP(bool);

	extern int hudr;
	extern int hudg;
	extern int hudb;
	void hudcolour();

	extern bool coords;
	void ShowCoords(bool toggle);



	extern bool insanewater;
	void InsaneWater(bool);

	extern bool ConeDrop;
	void conedrop(bool);

	extern bool chillarddrop;
	void ChillardDROP(bool);

	extern bool SlowMo;
	void slowmo(bool toggle);

	extern bool pedcoll;
	void PedColl(bool);

	extern bool drunk;
	void Drunk(bool);

	extern bool blockcleartask;
	void BlockClearTask();

	extern bool DeleteObjectLoop;
	void deleteobjectloop();

	extern bool Superr;
	void SuperDooper(bool toggle);

	extern bool SonicRun;
	void RunSonic(bool toggle);

	extern float customRun;
	extern bool customrun;
	void CustomRun(bool);

	extern bool fastswim;
	void RunFast(bool toggle);
	void SwimFast(bool toggle);

	void visionstuff(bool toggle);
	void nightvisionvoid(bool toggle);

	void spawn_object(std::string obj);
	extern bool freezeobject;

	extern bool chaosbool;
	void chaosmode();

	extern bool NoInvites;
	void noinvites();

	extern bool mpbypass;
	void bypasser(bool toggle);

	extern bool deletenearbyvehiclesbool;
	void deletenearbyvehicles();

	extern bool deletenearbypeds;
	void deletenearbypedsbool();

	extern int Levels[8000];

	extern bool lobbyraper;
	void raperlobber(bool toggle);

	extern bool att;

	void WEATHERtacks();
	void WANTEDLEVEL();

	extern bool explodenearbyvehiclesbool;
	void explodenearbyvehicles();

	extern bool killpedsbool;
	void killpeds();

	void WANTEDLEVELL();

	extern bool WANTED;
	extern bool WEATHER;
	extern bool explosion;

	extern bool profire;
	void antiexplosion();
	void antifire();

	void LoadInfoplayer(char* playerName, Player p);
	extern int l;
	extern int l1;
	extern int l2;
	extern int l3;
	extern int l4;
	extern int l5;
	extern int l6;

	extern bool spectate[32];
	void specter(Player target);
	extern float accelerationmultiplier;
	extern float brakesmultiplier;
	extern float suspensionseight;
	extern float accelerationfloat;
	extern float brakeforcefloat;
	extern float tractionfloat;
	extern float deformfloat;
	extern float upshiftfloat;
	extern float suspensionfloat;

	void animatePlayer(Player target, char* dict, char* anim);
	void animateallPlayer(char* dict, char* anim);
	void clearanimateallPlayer();

	void teleportallcoordsns(Vector3 target);

	extern void teleporttocoords(Player player, Vector3 target);

	void teleportallcoords(Vector3 target);

	extern bool esper;
	void esp(Player target);

	void OnlinePlayerInfo(char * playerName, Player p);

	void Expmeels(bool toggle);
	
	extern bool remote;

	extern bool driftmode;
	void drifter(bool toggle);

	extern bool infammo;
	void noreloadv(bool toggle);

	extern bool orbool;
	void OffRadar(bool toggle);
	
	extern bool osk;
	void OSKR(bool toggle);

	extern bool report;
	void inforemote();
	void reattacks();

	void SetMultipliers();

	void kickvotes();

	extern bool orbitalcanon;
	void orbcaninf(bool toggle);

	extern bool rbgun;
	void RBGuner(bool toggle);

	void remoweapons();

	extern bool moneyGun;
	void MoneyGun(bool);

	extern bool TeleportGun;
	void teleportgun(bool);

	extern bool revweapons;

	extern bool watergun;
	void WaterGun(bool);

	extern bool Gravity;
	void GravityGun(bool toggle);

	extern bool flaregun;
	void FlareGun(bool);

	extern bool tennisballgun;
	void TennisBallGun(bool);

	Vehicle SpawnVehicle(char* modelg, Vector3 coords, bool tpinto, float heading);

	extern bool grenadegun;
	void GrenadeGun(bool);

	extern int drivespeed;
	extern int drivestyle;

	extern int pricustomred;
	extern int pricustomgreen;
	extern int pricustomblue;
	extern int seccustomred;
	extern int seccustomgreen;
	extern int seccustomblue;
	extern bool setcustompricolour;
	extern bool setcustomseccolour;

	extern bool snowballgun;
	void SnowBallGun(bool);

	extern bool unlimitedorbitalcannon;
	void UnlimitedORbitalCannon(bool);

	void antiattacks();

	extern bool fireworkgun;
	void FireWorkGun(bool);

	extern bool slowmoaim;
	void SLOWMOAIM(bool toggle);

	extern bool WANTED_LEVEL;

	extern bool rocketgun;
	void RocketGun(bool);

	extern bool RAGDOLL;

	extern bool TAUNT;

	extern bool NETWORK;

	extern bool NETWORKCRC;
	void REQUESTEVENT();
	void PLAYERTAUNT();
	void INCREMENT();
	void NETWORK_CRC();

	void StealthDropintee();

	extern bool votes;
	void kickvotes();
	extern bool bypass;

	void ToggleXenon(int VehID);

	void BypassOnlineVehicleKick();

	extern bool toBank;

	extern bool playernoragdoll;
	void NoRagdoll(bool toggle);

	void spawn_vehicle(std::string vehicle);
	void spawn_vehicle2(char* toSpawn, Vector3 ourCoords);

	extern bool spawnwithblip;

	extern bool cargodmodebool;
	void cargodmode();

	extern bool enginealwaysonbool;
	void enginealwayson(bool toggle);

	extern bool boostbool;
	void carboost(bool toggle);

	void trapcage(Ped ped);

	void doAnimation(char* anim, char* animid);

	void LoadObjects(int Hash, float x, float y, float z, float Pitch, float Roll, float Yaw);

	void clearanim();

	extern bool PTLoopedO[35];
	void PTLopperO(Player target);

	extern bool explosiveammo;
	void expammo(bool toggle);

	bool cstrcmp(const char* s1, const char* s2);

	extern bool PTLooped;

	void trapall();

	extern bool playertenkped;

	void PTFXCALLO(char *call1, char *call2, char *name, Player target);

	extern int attachobj[100];
	extern int nuattach;

	void RequestControlOfid(Entity netid);

	extern int TimePD;
	extern int TimePD1;
	extern int TimePD2;
	extern int TimePD3;
	extern int TimePD4;
	extern int TimePD5;
	extern int TimePD6;
	extern int TimePD7;
	extern int TimePD8;

	void attachobjects2(char* object);

	void Freezer(Player target);

	extern bool fuckedhandling[32];
	void fuckhandling(Player player);

	extern bool moneydropp2k;
	void dildmoney(bool toogle);

	void maxvehicle();

	extern bool exploder[32];
	void explodeloop(Player target);

	extern bool spectate[32];

	void specter(Player target);

	extern bool savenewdrop2[35];
	void cashdrop2(Player target);

	extern bool spawnincar;
	extern bool spawnmaxed;


	void flipup();

	extern bool freezed[35];

	extern bool Stealthloop15;
	void stealthloopfifteen(bool toggle);

	extern bool StealthLooptoggler[35];
	void StealthLoopre(Player player);

	extern bool playerwaterloop[35];
	void WaterLoop(Player target);


	extern bool nStealthLooptogglerall;
	void nStealthLoopreall();
	extern bool nStealthLooptoggler[35];

	namespace Online {
		extern int selectedPlayer;
		void TeleportToPlayer(Player player);

		extern int teleporttowaypoint;
		void Teleporttowaypoint(Player player);
	}
	
}

bool RequestNetworkControl(uint vehID);

void RGBFade();
