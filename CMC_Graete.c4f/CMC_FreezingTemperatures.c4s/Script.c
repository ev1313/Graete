/*-- Freezing Temperatures --*/

#strict
#include CSTD

static aFlag,idheight;

func MaxTime() { return 180; }

/* Initalisierung */

func Initialize()
{
  //Starttitel und Musikliste zusammenstellen
  SetPlayList("CMC_Base Groove.ogg;CMC_Firehawk.ogg;CMC_Friendly Unit.ogg;CMC_Getaway.ogg;CMC_Moving Squad.ogg;CMC_Offensive.ogg;CMC_Showtime.ogg;CMC_Slow Motion.ogg;CMC_Striking Force.ogg;CMC_No Good.ogg;CMC_Obsession.ogg");
  Music("CMC_Getaway.ogg");
  //Flaggen
  aFlag = [];
  //Szenario einrichten
  CreateFurniture();
  //Equipment plazieren
  CreateEquipment();
  //Script starten
  ScriptGo(1);
  return(1);
}

/* Plazierungslisten */

func CreateFurniture()
{
	//Nebel platzieren
  for(var i;i<260;++i) 
    CreateParticle("Fog",Random(LandscapeWidth()),RandomX(LandscapeHeight()/2),RandomX(3,9),0,RandomX(1000,1500));
    
  Log("$CreatingFurniture$");

  //Leitern
  CreateObject(LADR, 420, 760, -1)->Set(5);
  CreateObject(LADR, 1400, 890, -1)->Set(15);
  CreateObject(LADR, 1730, 896, -1)->Set(4);
  CreateObject(LADR, 695, 850, -1)->Set(15);
  CreateObject(LADR, 575, 830, -1)->Set(10);

  //Bodenlucken
  CreateObject(H24K, 1795, 290, -1);
  
  CreateObject(H24K, 715, 680, -1);
  CreateObject(H24K, 835, 730, -1);

  //Metallkiste
  CreateObject(MWCR, 400, 710, -1)->AutoRespawn(); 
  CreateObject(MWCR, 1330, 760, -1)->AutoRespawn(); 
  CreateObject(MWCR, 780, 920, -1)->AutoRespawn(); 

  //Kisten
  CreateObject(WCR2, 900, 920, -1);
  CreateObject(WCR2, 1890, 280, -1)->AutoRespawn();
  CreateObject(WCR2, 350, 260, -1)->AutoRespawn();

  //Explosive Kiste
  CreateObject(XWCR, 820, 580, -1)->AutoRespawn();
  CreateObject(XWCR, 1470, 500, -1)->AutoRespawn();

  //Container
  CreateObject(CON1, 1500, 920, -1);

  //Giftfässer
  CreateObject(TBRL, 500, 920, -1)->AutoRespawn();
  CreateObject(TBRL, 1060, 880, -1)->AutoRespawn();

  //Benzinfässer
  CreateObject(PBRL, 1820, 820, -1)->AutoRespawn();
  CreateObject(PBRL, 1210, 760, -1)->AutoRespawn();

  //Explosivfässer
  CreateObject(XBRL, 570, 310, -1)->AutoRespawn();
  CreateObject(XBRL, 700, 550, -1);
  CreateObject(XBRL, 1807, 680, -1);
  CreateObject(XBRL, 1480, 260, -1)->AutoRespawn();

  //Phosphorfässer
  CreateObject(HBRL, 1740, 920, -1)->AutoRespawn();
  CreateObject(HBRL, 830, 810, -1);

  //Benzintank
  CreateObject(XTNK, 640, 530, -1)->AutoRespawn();
  CreateObject(XTNK, 1165, 760, -1)->AutoRespawn();

  //Phosphortank
  CreateObject(PTNK, 880, 920, -1)->AutoRespawn();

	// Gitter
	CreateObject(ENGT, 1890, 470, -1);
	
	// Aufzüge
	CreateObject(LFTP, 155, 550, -1);
	CreateObject(LFTP, 930, 680, -1);
	CreateObject(LFTP, 1890, 560, -1);
	
	// Minivent
	CreateObject(MVNT, 1060, 820, -1);
	
	// Glastische
	CreateObject(GTBL, 230, 810, -1);
	CreateObject(GTBL, 780, 720, -1);
	CreateObject(GTBL, 1040, 720, -1);
	
	// Pflanzen
	CreateObject(PLNT, 780, 705, -1);
	CreateObject(PLNT, 1040, 708, -1);
	CreateObject(PLT2, 165, 760, -1);
	
	// Gasflaschen
	CreateObject(GSBO, 1130, 880, -1);
	CreateObject(GSBO, 1120, 880, -1);
	CreateObject(GSBO, 1110, 880, -1);
	CreateObject(GSBO, 1290, 920, -1);
	
	// Lichter
	CreateObject(CLGH, 870, 824, -1);
	CreateObject(CLGH, 155, 284, -1);
	CreateObject(CLGH, 1890, 294, -1);
	CreateObject(LLGH, 840, 710, -1);
	CreateObject(LLGH, 1000, 710, -1);
	
	// Sequium Türen
	CreateObject(SEDR, 575, 920, -1);
	CreateObject(SEDR, 895, 580, -1);
	CreateObject(SEDR,1375, 800, -1);

	// Hydraulische Schiebetür
	CreateObject(SLDR,1755, 860, -1);
	
	// Risse
	CreateObject(FAUD, 	67, 342, -1);
	CreateObject(FAUD, 360, 614, -1);
	CreateObject(FAUD, 850, 680, -1);
	CreateObject(FAUD,1690, 980, -1);
	CreateObject(FAUD,1488, 316, -1);
	CreateObject(FAUD,1985, 355, -1);
	
	// Clonk Automat - Für eisgekühlte Getränke.
	CreateObject(CLVM, 720, 720, -1);
	
	// Screen
	CreateObject(SCR4,1000, 830, -1);
	
	// Ausgangslicht
	CreateObject(ETLT, 105, 295, -1);
	CreateObject(ETLT,1935, 305, -1);

	// Eiszapfen
  CreateObject(RndIID(), 500, 610+idheight, -1);
  CreateObject(RndIID(), 380, 110+idheight, -1);
  CreateObject(RndIID(), 460, 110+idheight, -1);
  CreateObject(RndIID(), 805, 120+idheight, -1);
  //CreateObject(ICI3, 506, 428, -1);
  CreateObject(RndIID(),1188, 138+idheight, -1);
  CreateObject(RndIID(),1720, 150+idheight, -1);
  CreateObject(RndIID(),1050, 623+idheight, -1);
  CreateObject(RndIID(),1540, 600+idheight, -1);
  
  //Sounds

  //Wind
  CreateObject(SE4K,1400, 290, -1)->Set("WindSound*.ogg",775,250);
  CreateObject(SE4K, 535, 310, -1)->Set("WindSound*.ogg",775,250);
  CreateObject(SE4K,1360, 470, -1)->Set("WindSound*.ogg",775,250);

  //Hallen
  CreateObject(SE4K, 160, 310, -1)->Set("Interior*.ogg",665,105);
  
  CreateObject(SE4K, 240, 680, -1)->Set("Interior*.ogg",665,105);
  
  CreateObject(SE4K, 925, 710, -1)->Set("Interior*.ogg",665,105);
  CreateObject(SE4K, 950, 910, -1)->Set("Interior*.ogg",665,105);

  CreateObject(SE4K,1850, 800, -1)->Set("Interior*.ogg",665,105);
  CreateObject(SE4K,1860, 315, -1)->Set("Interior*.ogg",665,105);
  
  //Lautsprecher
  CreateObject(SE4K, 970, 815, -1)->Set("Announce*.ogg",1700,200);
}

func CreateEquipment()
{
  Log("$CreatingEquipment$");
  //Alle Objekte folglich von links oben nach rechts unten

  //Munitionskisten (Kugeln)
  CreateObject (AMCT, 300, 710, -1)->Set(ABOX);
  CreateObject (AMCT,1800, 860, -1)->Set(ABOX);
  CreateObject (AMCT, 880, 810, -1)->Set(ABOX);

  //Munitionskiste (Granaten)
  CreateObject (AMCT, 1100, 920, -1)->Set(GBOX);
  
  //Munitionskisten (Splittergranaten)
	CreateObject(AMCT, 780, 670,-1)->Set(FRAG);
	CreateObject(AMCT,1350, 840,-1)->Set(FRAG);
	
	//Munitionskiste (Feldgranaten)
	CreateObject(AMCT, 870, 720,-1)->Set(FGRN);
	
	//Munitionskiste (Phosphorgranaten)
	CreateObject(AMCT,1090, 720,-1)->Set(PGRN);
}

/* Regelwähler */

public func ChooserFinished()
{
  inherited();

  //Teams abfragen
  var aTeams = [false,false,false,false,false];
  for(var i = 0; i < GetPlayerCount(); i++)
    aTeams[GetPlayerTeam(GetPlayerByIndex(i))] = true;

  //CTF-Spielziel
  if(FindObject(GCTF))
  {
   if(aTeams[1] == true)
   {CreateFlag(1,510,320,GetTeamColor(1));}
   if(aTeams[2] == true)
   {CreateFlag(2,1760,230,GetTeamColor(2));}
  }

  //OP-Spielziel
  if(FindObject(GOCC))
  {
   aFlag[0] = CreateObject(OFPL,510,320,NO_OWNER);
   aFlag[0] -> AddSpawnPoint(720,320);
   aFlag[0] -> AddSpawnPoint(350,245);
   aFlag[0] -> AddSpawnPoint(200,255);
   if(aTeams[1] == true)
   {
    aFlag[0]->Set("$Flag1$",100,2);
    aFlag[0]->Capture(1,1);
   }
   else
   {
    aFlag[0]->Set("$Flag1$",0,2);
   }

   aFlag[1] = CreateObject(OFPL,350,710,NO_OWNER);
   aFlag[1] -> AddSpawnPoint(285,560);
   aFlag[1] -> AddSpawnPoint(395,695);
   aFlag[1] -> AddSpawnPoint(170,745);
   aFlag[1]->Set("$Flag2$",0,2);

   aFlag[2] = CreateObject(OFPL,960,920,NO_OWNER);
   aFlag[2] -> AddSpawnPoint(840,800);
   aFlag[2] -> AddSpawnPoint(1150,830);
   aFlag[2] -> AddSpawnPoint(900,910);
   aFlag[2]->Set("$Flag3$",0,2);

   aFlag[3] = CreateObject(OFPL,1775,690,NO_OWNER);
   aFlag[3] -> AddSpawnPoint(1800,760);
   aFlag[3] -> AddSpawnPoint(1780,905);
   aFlag[3] -> AddSpawnPoint(1800,670);
   aFlag[3]->Set("$Flag4$",0,2);

   aFlag[4] = CreateObject(OFPL,1750,230,NO_OWNER);
   aFlag[4] -> AddSpawnPoint(1490,250);
   aFlag[4] -> AddSpawnPoint(1740,320);
   aFlag[4] -> AddSpawnPoint(1820,220);
   if(aTeams[2] == true)
   {
    aFlag[4]->Set("$Flag5$",100,2);
    aFlag[4]->Capture(2,1);
   }
   else
   {
    aFlag[4]->Set("$Flag5$",0,2);
   }
  }
  //HTF-Spielziel
  if (FindObject(GHTF))
  {
   //Flaggenposten
   var flag = CreateObject(OFPL, 960,920, -1);
   flag->~Set("$Flag3$");
  }
  //Base Assault-Spielziel
  if(FindObject(GBAS))
  {
   //Zielobjekte
   AddAssaultTarget(CMSN, 510, 320, 400, 1, "$Flag1$", 0, [[720, 320], [350, 245], [200, 255]]);
   AddAssaultTarget(RADR, 350, 710, 500, 1, "$Flag2$", 1, [[285, 560], [395, 695], [170, 745]]);

   AddAssaultTarget(CMSN, 1775, 690, 400, 2, "$Flag4$", 2, [[1800, 760], [1780, 905], [1800, 670]]);
   AddAssaultTarget(RADR, 1750, 230, 500, 2, "$Flag5$", 3, [[1490, 250], [1740, 320], [1820, 220]]);
  }
}

/* Relaunch */

public func RelaunchPosition(& iX, & iY, int iTeam)
{
  //DM/LMS/HTF-Spielziel
  if(FindObject(GTDM) || FindObject(GLMS) || FindObject(GHTF))
  {
   if(iTeam == 1)
   {
    var rand = Random(3);
    if(!rand)
     { iX = 200; iY = 255; }
    if(!--rand)
     { iX = 320; iY = 550; }
    if(!--rand)
     { iX = 550; iY = 310; }
   }
   if(iTeam == 2)
   {
    var rand = Random(3);
    if(!rand)
     { iX = 1910; iY = 270; }
    if(!--rand)
     { iX = 1490; iY = 250; }
    if(!--rand)
     { iX = 1710; iY = 490; }
   }
   return(1);
  }

  //CTF-Spielziel
  if(FindObject(GCTF))
  {
   var rand = Random(2);
   if(iTeam == 1)
   {
    if(!rand)
      { iX = 205; iY = 270; }
    if(!--rand)
      { iX = 350; iY = 240; }
    return(1);
   }
   else
   {
    if(!rand)
      { iX = 1490; iY = 260; }
    if(!--rand)
      { iX = 1915; iY = 280; }
    return(1);
   }
  }

  //Startsicht
  iX = LandscapeWidth()/2; iY = LandscapeHeight()/2;
}

func Script0()
{
  CreateParticle("Fog",0,Random(LandscapeHeight()/2),RandomX(3,9),0,RandomX(1000,1500)); 
}

func Script4()
{
  return(goto(0));
}

func RndIID()
{
	var rnd = Random(3);
	var ID;
	if(!rnd) { ID = _ICI; }
	if(rnd == 1) { ID = ICI2; }
	if(rnd == 2) { ID = ICI3; }
	idheight = GetDefHeight(ID);
	if(ID == ICI3)
		idheight = 30;
	return ID;
}
