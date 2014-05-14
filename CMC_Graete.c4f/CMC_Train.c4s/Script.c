/*-- Train --*/

 #strict 2
 #include CSTD

 static aFlag,idheight;

 /* Initalisierung, es ist an der Zeit aufzuräumen! */

 func Initialize()
 {
   SetSkyParallax(1, 20,20, 500,0, SkyPar_Keep, SkyPar_Keep);
   AddEffect("Background",0,101,1);   

   //Flaggen
   aFlag = [];
   //Wartemusik einstellen
   SetWaitingMusic();
   //Einrichtung plazieren
   CreateInterior();
   //Equipment plazieren
   CreateEquipment();
   //Ausrüstung plazieren
   CreateEquipment();
   //Dekoration plazieren
   CreateDecoration();
   //Script starten
   ScriptGo(1);
  DrawMaterialQuad("WallB",0,539,0,540,LandscapeWidth(),540,LandscapeWidth(),539);
  return(1);
 }

 /* Plazierungslisten */

 func CreateInterior()
 {
   Log("$CreatingInterior$");

  //Rampen
  DrawMaterialQuad("Wall-Plate",620, 370, 610, 360, 610, 360, 610, 370,true);
  DrawMaterialQuad("Wall-Plate",950, 370, 940, 360, 940, 360, 940, 370,true);
  DrawMaterialQuad("Wall-Plate",1280, 370, 1270, 360, 1270, 360, 1270, 370,true);
  DrawMaterialQuad("Wall-Plate",1610, 370, 1600, 360, 1600, 360, 1600, 370,true);
  DrawMaterialQuad("Wall-Plate",1940, 370, 1930, 360, 1930, 360, 1930, 370,true);
  DrawMaterialQuad("Wall-Plate",2270, 370, 2260, 360, 2260, 360, 2260, 370,true);
  DrawMaterialQuad("Wall-Plate",2600, 370, 2590, 360, 2590, 360, 2590, 370,true);
  DrawMaterialQuad("Wall-Plate",2930, 370, 2920, 360, 2920, 360, 2920, 370,true);
  DrawMaterialQuad("Wall-Plate",3200, 370, 3190, 360, 3190, 360, 3190, 370,true);
  DrawMaterialQuad("Wall-Plate",650, 370, 660, 360, 660, 360, 660, 370,true);
  DrawMaterialQuad("Wall-Plate",1310, 370, 1320, 360, 1320, 360, 1320, 370,true);
  DrawMaterialQuad("Wall-Plate",1640, 370, 1650, 360, 1650, 360, 1650, 370,true);
  DrawMaterialQuad("Wall-Plate",1970, 370, 1980, 360, 1980, 360, 1980, 370,true);
  DrawMaterialQuad("Wall-Plate",2300, 370, 2310, 360, 2310, 360, 2310, 370,true);
  DrawMaterialQuad("Wall-Plate",2630, 370, 2640, 360, 2640, 360, 2640, 370,true);
  DrawMaterialQuad("Wall-Plate",2960, 370, 2970, 360, 2970, 360, 2970, 370,true);
  DrawMaterialQuad("Wall-Plate",980, 370, 990, 360, 990, 360, 990, 370,true);
  DrawMaterialQuad("Wall-Plate",430, 390, 290, 424, 290, 424,430, 360,true);   
  DrawMaterialQuad("Wall-Plate",450, 380, 460, 380, 460, 380, 450, 390 ,true);
  DrawMaterialQuad("BackWall-Plate",370, 444, 290, 480, 290, 480, 430, 500,true);
  DrawMaterialQuad("Wall-Plate",330, 520, 290, 480, 290, 480, 370, 500 ,true);  
  DrawMaterialQuad("BackWall-Plate",290, 423, 290, 460, 370, 458, 360, 408 ,true);  
  
  //Leitern
  CreateObject(LADR, 635, 520, -1)->Set(19);
  CreateObject(LADR, 965, 520, -1)->Set(19);
  CreateObject(LADR,1295, 520, -1)->Set(19);
  CreateObject(LADR,1625, 520, -1)->Set(19);
  CreateObject(LADR,1955, 520, -1)->Set(19);
  CreateObject(LADR,2285, 520, -1)->Set(19);
  CreateObject(LADR,2615, 520, -1)->Set(19);
  CreateObject(LADR,2945, 520, -1)->Set(19);
  CreateObject(LADR,1747, 455, -1)->Set(2);
  CreateObject(LADR,1835, 455, -1)->Set(2);

  //Glasscheiben
  CreateObject(PANE, 292, 481, -1);
  CreateObject(PANE, 292, 452, -1);
  CreateObject(PANE,3198, 480, -1);
  CreateObject(PANE,3198, 451, -1);
  CreateObject(PANE,3198, 422, -1);

  //Bodenlucken
  CreateObject(H24K,1345, 370, -1);
  CreateObject(H24K,2005, 370, -1);
  CreateObject(H24K,2235, 370, -1);
  CreateObject(H24K,1675, 370, -1);

  //Palletten
  CreateObject(PLLT, 3110, 500, -1);
  CreateObject(PLLT, 2180, 500, -1);

  //Container
  CreateObject(CON1, 1850, 500, -1);
  CreateObject(CON1, 1725, 500, -1);
  CreateObject(CON1, 2125, 500, -1);

  //Metallkisten
  CreateObject(MWCR, 760, 440, -1)->AutoRespawn();
  CreateObject(MWCR,1450, 500, -1)->AutoRespawn();

  // Kisten
  CreateObject(WCR2,2400, 440, -1)->AutoRespawn();
  CreateObject(WCR2,2423, 440, -1)->AutoRespawn();
   
  //Verbandskisten
  CreateObject(BECR, 380, 500, -1)->AutoRespawn();
  CreateObject(BECR, 1100, 440, -1)->AutoRespawn();
  CreateObject(BECR, 2040, 440, -1)->AutoRespawn();

  //Explosivkiste
  CreateObject(XWCR, 2406, 423, -1)->AutoRespawn();

  //Toxinfässer
  CreateObject(TBRL, 870, 500, -1)->AutoRespawn();
  CreateObject(TBRL, 885, 500, -1)->AutoRespawn();
  CreateObject(TBRL,2422, 420, -1)->AutoRespawn();

  //Benzinfässer
  CreateObject(PBRL,1422, 440, -1)->AutoRespawn();
  CreateObject(PBRL,2445, 440, -1)->AutoRespawn();
  CreateObject(PBRL,2436, 440, -1)->AutoRespawn();

  //Explosivfässer
  CreateObject(XBRL,2870, 440, -1)->AutoRespawn();
  CreateObject(XBRL, 400, 500, -1)->AutoRespawn();
  CreateObject(XBRL,1807, 680, -1)->AutoRespawn();
  CreateObject(XBRL,3000, 500, -1)->AutoRespawn();

  //Phosphorfässer
  CreateObject(HBRL, 2880, 440, -1)->AutoRespawn();
  CreateObject(HBRL, 2380, 440, -1)->AutoRespawn();
  CreateObject(HBRL, 2200, 440, -1)->AutoRespawn();
  CreateObject(HBRL, 1465, 500, -1)->AutoRespawn();

  // Labortüren
  CreateObject(LBDR, 615, 500, -1);
  CreateObject(LBDR, 655, 500, -1);
  CreateObject(LBDR, 945, 500, -1);
  CreateObject(LBDR, 985, 500, -1);
  CreateObject(LBDR,1275, 500, -1);
  CreateObject(LBDR,1315, 500, -1);
  CreateObject(LBDR,1605, 500, -1);
  CreateObject(LBDR,1645, 500, -1);
  CreateObject(LBDR,1935, 500, -1);
  CreateObject(LBDR,1975, 500, -1);
  CreateObject(LBDR,2265, 500, -1);
  CreateObject(LBDR,2305, 500, -1);
  CreateObject(LBDR,2595, 500, -1);
  CreateObject(LBDR,2635, 500, -1);
  CreateObject(LBDR,2925, 500, -1);
  CreateObject(LBDR,2965, 500, -1);
  CreateObject(LBDR,2635, 440, -1);
  CreateObject(LBDR,2925, 440, -1);
  
  //Dragninautomaten
  CreateObject(DGND, 2680, 500, -1);
  CreateObject(DGND, 820, 500, -1);

  // Sounds

  // Zug
  CreateObject(HE5G, 635, 520, -1)->LoopWheel();
  CreateObject(HE5G, 965, 520, -1)->LoopWheel();
  CreateObject(HE5G,1295, 520, -1)->LoopWheel();
  CreateObject(HE5G,1625, 520, -1)->LoopWheel();
  CreateObject(HE5G,1955, 520, -1)->LoopWheel();
  CreateObject(HE5G,2285, 520, -1)->LoopWheel();
  CreateObject(HE5G,2615, 520, -1)->LoopWheel();
  CreateObject(HE5G,2945, 520, -1)->LoopWheel();
  CreateObject(HE5G,3100, 520, -1)->LoopWheel();
  CreateObject(HE5G,3400, 520, -1)->LoopWheel();

  //Lautsprecher
  CreateObject(SE4K, 540, 454, -1)->Set("Announce*.ogg",3000,200);
  CreateObject(SE4K, 2124, 452, -1)->Set("Announce*.ogg",3000,200);
 
  //Sandbags
  CreateObject(SBBA, 1156, 360, -1)->Right();
  CreateObject(SBBA, 1094, 360, -1);
  CreateObject(SBBA, 2486, 360, -1)->Right();
  CreateObject(SBBA, 2424, 360, -1);
 }

 func CreateEquipment()
 {
  Log("$CreatingEquipment$");
  //Alle Objekte folglich von links oben nach rechts unten

  //Munitionskisten (Kugeln)
  CreateObject (AMCT, 560, 500, -1)->Set(ABOX);
  CreateObject (AMCT,3150, 500, -1)->Set(ABOX);

  //Munitionskiste (Granaten)
  CreateObject (AMCT,1880, 430, -1)->Set(GBOX);

  //Munitionskisten (Splittergranaten)
  CreateObject(AMCT,1405, 440,-1)->Set(FRAG);
  CreateObject(AMCT,2165, 440,-1)->Set(FRAG);

  //Munitionskiste (Feldgranaten)
  CreateObject(AMCT,1690, 430,-1)->Set(FGRN);

  //Automaten
  var store = CreateObject(WPVM, 1790, 500,-1);
  store->AddWare(C4PA,-1);
  store->AddWare(FAPK,-1);
  store->AddWare(CDBT,-1);
  store->AddWare(BWTH,-1);
  store->AddWare(RSHL,-1);
  store->AddWare(ATWN,-1);
  store->AddWare(FGRN,-1);
  store->AddWare(FRAG,-1);
  store->AddWare(PGRN,-1);
  store->AddWare(SGRN,-1);
  store->AddWare(STUN,-1);
  store->AddWare(SRBL,-1);

 }

func Script1()
{
	for(var obj in FindObjects(Find_ID(LCKR)))
	{
		if(Random(3) == 1) { CreateContents(RndID(),obj); }
	}
	return 1;
}

 func CreateDecoration()
 {
   Log("$CreatingDecoration$");

  //Pflanzen
  CreateObject(PLNT,1130, 480, -1);
  CreateObject(PLNT,2500, 480, -1);

  //Decken Lichter
  CreateObject(CLGH, 510, 384, -1);
  CreateObject(CLGH, 820, 384, -1);
  CreateObject(CLGH, 1790, 384, -1);
  CreateObject(CLGH, 2790, 384, -1);
  CreateObject(CLGH, 3060, 384, -1);
  CreateObject(CLGH, 2450, 384, -1);
  CreateObject(CLGH, 2120, 384, -1);
  CreateObject(CLGH, 1470, 384, -1);
  CreateObject(CLGH, 1120, 384, -1);
  
  //Apparaturen
  CreateObject(GADG, 1145, 485, -1);
  CreateObject(GADG, 1113, 485, -1);
    
  //GetränkeAutomaten
  CreateObject(VGMN, 3020, 500, -1);
  CreateObject(VGMN, 3050, 500, -1);
  CreateObject(VGMN, 2060, 500, -1)->Set(2);
  CreateObject(VGMN, 2030, 500, -1)->Set(2);


  //Laborlichter
  CreateObject(LLGH,1760, 450, -1);
  CreateObject(LLGH,1820, 450, -1);
 
  //Ausgangslicht
  CreateObject(ETLT,3170, 430, -1);  

  //Labortische
  CreateObject(LTBL, 1191, 490, -1);  
  
  //Operationstisch
  CreateObject(OPTB, 2412, 495, -1);

  // Screens
  CreateObject(SCR3, 405, 460, -1)->SetClrModulation(RGB(250,10,10));
  var screen = CreateObject(SCR3, 540, 460, -1);
  screen->SetClrModulation(RGB(255,255,255));
  screen->SetPhase(5);
  screen = CreateObject(SCR3, 1500, 425, -1);
  screen->SetPhase(10);
  CreateObject (SCR5, 2125, 425, -1);
  CreateObject (SCA2, 470, 470, -1);
  CreateObject (SCA1, 698, 435 -1)->SetAction("CMC");
  CreateObject (SCA2, 3110, 450 -1)->SetAction("Clonk");
  CreateObject (SCA1, 2755, 433-1)->SetAction("Medic");

  //Monitore
  CreateObject(MNI2, 465, 490, -1);
  
  // Glastische
  CreateObject(GTBL,1130, 500, -1);
  CreateObject(GTBL,2500, 500, -1);
  CreateObject(GTBL, 465, 500, -1);

  // Spinde
  CreateObject(LCKR, 740, 500, -1);
  CreateObject(LCKR, 755, 500, -1);
  CreateObject(LCKR, 770, 500, -1);
  CreateObject(LCKR, 785, 500, -1);
  CreateObject(LCKR,2750, 500, -1);
  CreateObject(LCKR,2765, 500, -1);
  CreateObject(LCKR,2780, 500, -1);
  CreateObject(LCKR,2795, 500, -1);
  CreateObject(LCKR,2070, 440, -1);
  CreateObject(LCKR,1440, 440, -1);

  //Gitter
  CreateObject(ENGT,1345, 430, -1)->SetCon(50);
  CreateObject(ENGT,2235, 430, -1)->SetCon(50);
  CreateObject(ENGT, 2005, 430, -1)->SetCon(50);

  //Infoschilder
  CreateObject(WLSN, 1230, 430, -1)->Set("A");
  CreateObject(WLSN, 1790, 415, -1)->Set("B");
  CreateObject(WLSN, 2340, 430, -1)->Set("C");
  CreateObject(WLSN, 3000, 430, -1)->Set("D");
  CreateObject(WLSN, 910, 495, -1)->Set("Bio");
  CreateObject(WLSN,  2560, 430, -1)->Set("Explosives");

  // Ventilator
  CreateObject(VEN3,1790, 450, -1)->SetCon(20);

  // Geländer
  CreateObject(RAI2, 635-18, 500, -1);
  CreateObject(RAI2, 965-18, 500, -1);
  CreateObject(RAI2,1295-18, 500, -1);
  CreateObject(RAI2,1625-18, 500, -1);
  CreateObject(RAI2,1955-18, 500, -1);
  CreateObject(RAI2,2285-18, 500, -1);
  CreateObject(RAI2,2615-18, 500, -1);
  CreateObject(RAI2,2945-18, 500, -1);

  //Flaschen
  CreateObject(BOTL, 3020, 500, -1);
  CreateObject(BOTL, 3030, 500, -1);
  CreateObject(BOTL, 2720, 440, -1);
  CreateObject(BOTL, 2484, 487, -1);
  CreateObject(BOTL, 1116, 440, -1);
  CreateObject(BOTL, 1120, 440, -1);

  // Betten
  CreateObject(BED2, 800, 440, -1);
  CreateObject(BED2, 890, 440, -1);
  CreateObject(BED2,2690, 440, -1);
  CreateObject(BED2,2800, 440, -1);

  // Kommoden
  CreateObject(LCOM, 760, 440, -1);
  CreateObject(LCOM, 845, 440, -1);
  CreateObject(LCOM,2850, 440, -1);
  CreateObject(LCOM,2715, 500, -1);

  // Toilettenkabinen
  CreateObject(TOIC,1010, 440, -1);
  CreateObject(TOIC,1030, 440, -1);
  CreateObject(TOIC,1050, 440, -1);
  CreateObject(TOIC,1070, 440, -1);
  CreateObject(TOIC,2530, 440, -1);
  CreateObject(TOIC,2510, 440, -1);
  CreateObject(TOIC,2490, 440, -1);

  // Waschbecken
  CreateObject(WSHB,2470, 440, -1);
  CreateObject(WSHB,1170, 430, -1);
}

 /* Regelwähler */

 public func ChooserFinished()
 {
   inherited();
   
   //Starttitel und Musikliste zusammenstellen
   SetPlayList("CMC_Base Groove.ogg;CMC_Firehawk.ogg;CMC_Friendly Unit.ogg;CMC_Getaway.ogg;CMC_Deep Universe.ogg;CMC_Eurocorps.ogg;CMC_Moving Squad.ogg;CMC_Offensive.ogg;CMC_Rock Go On.ogg;CMC_Showtime.ogg;CMC_Slow Motion.ogg;CMC_Striking Force.ogg;CMC_No Good.ogg;CMC_Obsession.ogg;CMC_Your Eyes.ogg");
   Music("CMC_Eurocorps.ogg");

   //Teams abfragen
   var aTeams = [false,false,false,false,false];
   for(var i = 0; i < GetPlayerCount(); i++)
     aTeams[GetPlayerTeam(GetPlayerByIndex(i))] = true;

   //CTF-Spielziel
   if(FindObject(GCTF))
   {
    if(aTeams[1] == true)
    {CreateFlag(1, 520, 500,GetTeamColor(1));}
    if(aTeams[2] == true)
    {CreateFlag(2,3060, 500,GetTeamColor(2));}
   }

    //MR-Spielziel
  if(FindObject(GMNR))
  {
   //Geldsäcke
   AddMoneySpawn(1050, 430, [15]);
   AddMoneySpawn(1790, 430, [20]);
   AddMoneySpawn(2500, 430, [15]);
   }

   //OP-Spielziel
   if(FindObject(GOCC))
   {
    //Waffenautomat entfernen  
    RemoveAll(WPVM);      

    aFlag[0] = CreateObject(OFPL, 530, 500,NO_OWNER);
    aFlag[0] -> AddSpawnPoint( 460, 340);
    aFlag[0] -> AddSpawnPoint( 770, 420);
    aFlag[0] -> AddSpawnPoint( 800, 340);
    if(aTeams[1] == true)
    {
     aFlag[0]->Set("$Flag1$",100,2);
     aFlag[0]->Capture(1,1);
    }
    else
    {
     aFlag[0]->Set("$Flag1$",0,2);
    }

    aFlag[1] = CreateObject(OFPL,1120, 360,NO_OWNER);
    aFlag[1] -> AddSpawnPoint( 900, 420);
    aFlag[1] -> AddSpawnPoint(1175, 420);
    aFlag[1] -> AddSpawnPoint(1345, 480);
    aFlag[1]->Set("$Flag2$",0,2);

    aFlag[2] = CreateObject(OFPL,1790, 500,NO_OWNER);
    aFlag[2] -> AddSpawnPoint(1790, 340);
    aFlag[2] -> AddSpawnPoint(1500, 420);
    aFlag[2] -> AddSpawnPoint(2050, 420);
    aFlag[2]->Set("$Flag3$",0,2);

    aFlag[3] = CreateObject(OFPL,2450, 360,NO_OWNER);
    aFlag[3] -> AddSpawnPoint(2170, 430);
    aFlag[3] -> AddSpawnPoint(2550, 430);
    aFlag[3] -> AddSpawnPoint(2545, 485);
    aFlag[3]->Set("$Flag4$",0,2);

    aFlag[4] = CreateObject(OFPL,3070, 500,NO_OWNER);
    aFlag[4] -> AddSpawnPoint(3080, 340);
    aFlag[4] -> AddSpawnPoint(2680, 425);
    aFlag[4] -> AddSpawnPoint(2900, 345);
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
   //Base Assault-Spielziel
   if(FindObject(GBAS))
   {
    //Da stört ein einzelner Automat :o
    RemoveAll(VGMN);
    CreateObject(VGMN, 3020, 500, -1);
    CreateObject(VGMN, 2060, 500, -1)->Set(2);
    CreateObject(VGMN, 2030, 500, -1)->Set(2);
    
    //Zielobjekte
    AddAssaultTarget(CMSN, 530, 500, 600, 1, "$Flag1$", 0, [[460, 340], [770, 420], [800, 340]]);
    AddAssaultTarget(CCP2,1120, 360, 300, 1, "$Flag2$", 1, [[900, 420], [1175, 420], [1345, 480]]);

    AddAssaultTarget(CMSN,2450, 360, 600, 2, "$Flag4$", 2, [[2170, 430], [2550, 430], [2545, 485]]);
    AddAssaultTarget(CCP2,3065, 500, 300, 2, "$Flag5$", 3, [[3080, 340], [2680, 425], [2900, 345]]);
   }
   //HTF-Spielziel
   if (FindObject(GHTF))
   {
    //Waffenautomat entfernen
    RemoveAll(WPVM); 

    //Weg mit dem Zeugs!
     RemoveAll(AMCT);
  
    //Und her mit dem Handlicheren!
    if(!FindObject(NOAM))
   {
    //Kugeln
    PlaceSpawnpoint(ABOX, 1690, 420);
     
    //Granaten
    PlaceSpawnpoint(GBOX, 1880, 420);    

    //Raketen
    PlaceSpawnpoint(MBOX, 1789, 350);
    }

   //Teamgrenzen
   CreateObject(BRDR, 1295, 0, -1)->Set(0,1,0,1,1);
   CreateObject(BRDR, 2285, 0, -1)->Set(1,1,0,1,2);
    
   //Flaggenposten
    var flag = CreateObject(OFPL, 1790,500, -1);
    flag->~Set("$Flag3$");
   }
 }

 /* Relaunch */

 public func RelaunchPosition(& iX, & iY, int iTeam)
 {
   //DM/LMS /CTF /GMNR-Spielziel
   if(FindObject(GTDM) || FindObject(GLMS) || FindObject(GCTF) || FindObject(GHTF)  || FindObject(GMNR))
   {
   if(iTeam == 1)
   {
    return [[515, 490], [490, 350], [700, 490]];
   }
   if(iTeam == 2)
   {
    return [[3170, 490], [3100, 350], [2890, 490]];
   }
   return(1);
  }

   //Startsicht
   iX = LandscapeWidth()/2; iY = LandscapeHeight()/2;
 }

 func Script420()
{
	CreateObject(HE5G,400,370,-1)->Foo();
  return(goto(1));
 }
func RndID()
{
	var rID;
	var rnd = Random(7);
	if(!rnd) { rID = ABOX; }
	if(rnd == 1) { rID = GBOX; }
	//if(rnd == 2) { rID = DGNN; }
	if(rnd == 2) { rID = FGRN; }
	if(rnd == 3) { rID = FRAG; }
	if(rnd == 4) { rID = PGRN; }
	if(rnd == 5) { rID = SGRN; }
	if(rnd == 6) { rID = STUN; }
	
	return rID;
 }
}
