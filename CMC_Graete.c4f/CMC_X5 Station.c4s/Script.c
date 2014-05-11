/*-- X5-Station --*/

#strict
#include CSTD

static aFlag;

func Initialize()
{
  //Flaggen(!)
  aFlag = [];
  //Starttitel und Musikliste zusammenstellen
  SetPlayList("CMC_Base Groove.ogg;CMC_Offensive.ogg;CMC_Firehawk.ogg;CMC_Getaway.ogg;CMC_Moving Squad.ogg;CMC_Friendly Unit.ogg;");
  Music("CMC_Slow Motion.ogg");
  CreateObject(KTPL, 853, 580, -1); // Kätzchenplatzier-Hilfsobjektteil für Konsole
  return(1);
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
   {CreateFlag(1,769,228,GetTeamColor(1));}
   if(aTeams[2] == true)
   {CreateFlag(2,235,717,GetTeamColor(2));}
   if(aTeams[3] == true)
   {CreateFlag(3,1551,246,GetTeamColor(3));}
   if(aTeams[4] == true)
   {CreateFlag(4,2081,479,GetTeamColor(4));}
  }

  //HTF-Spielziel
  if (FindObject(GHTF))
  {
   //Flaggenposten
   var flag = CreateObject(OFPL, 1280,739, -1);
   flag->~Set("$Flag3$");
  }


  //OP-Spielziel
  if(FindObject(GOCC))
  {
   //Flaggen
   aFlag[0] = CreateObject(OFPL,769,228,NO_OWNER);
   aFlag[0] -> AddSpawnPoint(894,150);
   aFlag[0] -> AddSpawnPoint(824,220);
   aFlag[0] -> AddSpawnPoint(741,211);
   aFlag[0] -> AddSpawnPoint(529,168);
   if(aTeams[1] == true)
   {
    aFlag[0]->Set("$Flag1$",100,2);
    aFlag[0]->Capture(1,1);
   }
   else
   {
    aFlag[0]->Set("$Flag1$",0,2);
   }

   aFlag[1] = CreateObject(OFPL,235,717,NO_OWNER);
   aFlag[1] -> AddSpawnPoint(367,707);
   aFlag[1] -> AddSpawnPoint(372,819);
   aFlag[1] -> AddSpawnPoint(205,558);
   if(aTeams[1] == true)
   {
    aFlag[1]->Set("$Flag2$",100,2);
    aFlag[1]->Capture(2,1);
   }
   else
   {
    aFlag[1]->Set("$Flag2$",0,2);
   }


   aFlag[2] = CreateObject(OFPL,1280,739,NO_OWNER);
   aFlag[2] -> AddSpawnPoint(980,711);
   aFlag[2] -> AddSpawnPoint(1331,729);
   aFlag[2] -> AddSpawnPoint(1101,739);
   if(aTeams[1] == true)
   {
    aFlag[2]->Set("$Flag3$",0,2);
   }

   aFlag[3] = CreateObject(OFPL,1551,246,NO_OWNER);
   aFlag[3] -> AddSpawnPoint(1790,210);
   aFlag[3] -> AddSpawnPoint(1416,185);
   aFlag[3] -> AddSpawnPoint(1830,149);
   aFlag[3] -> AddSpawnPoint(1452,239);
  if(aTeams[2] == true)
   {
    aFlag[3]->Set("$Flag4$",100,2);
    aFlag[3]->Capture(3,1);
   }
   else
   {
    aFlag[3]->Set("$Flag4$",0,2);
   }


   aFlag[4] = CreateObject(OFPL,2081,479,NO_OWNER);
   aFlag[4] -> AddSpawnPoint(2171,468);
   aFlag[4] -> AddSpawnPoint(1962,468);
   aFlag[4] -> AddSpawnPoint(2051,559);
   aFlag[4] -> AddSpawnPoint(2195,619);
   if(aTeams[2] == true)
   {
    aFlag[4]->Set("$Flag5$",100,2);
    aFlag[4]->Capture(4,1);
   }
   else
   {
    aFlag[4]->Set("$Flag5$",0,2);
   }
 }

  //Base Assault-Spielziel
  if(FindObject(GBAS))
  {
   RemoveAll(PTNK);
   RemoveAll(XTNK);
   RemoveAll(CLVM);
   RemoveAll(LBPC);

   //Zielobjekte
   //Alpha
   AddAssaultTarget(PTNK, 934, 160, 500, 1, "$Flag1$", 0, [[824, 220], [741, 211], [529, 140]]);

   //Beta
   AddAssaultTarget(XTNK, 401, 720, 500, 2, "$Flag2$", 0, [[367, 707], [372, 819], [205, 558]]);

   //Gamma
   AddAssaultTarget(CLVM, 2137, 481, 500, 3, GetName(0, CLVM), 0, [[1962, 468], [2051, 549], [2195, 619]]);

   //Delta
   AddAssaultTarget(LBPC, 1860, 163, 500, 4, "$Flag3$", 0, [[1790, 210], [1416, 185], [1830, 149]]);
  }
  
  CreateObject(DARK);
  ScriptGo(1);
}


/* Relaunch */

public func RelaunchPosition(& iX, & iY, int iTeam)
{
  //DM/LMS/CTF/HTF-Spielziel
  if(FindObject(GTDM) || FindObject(GLMS) || FindObject(GCTF) || FindObject(GHTF))
  {
   if(iTeam == 1)
   {
    var rand = Random(2);
    if(!rand)
     { iX = 891; iY = 149; }
    if(!--rand)
     { iX = 790; iY = 220; }
    return(1);
   }
   if(iTeam == 2)
   {
    var rand = Random(2);
    if(!rand)
     { iX = 261; iY = 710; }
    if(!--rand)
     { iX = 366; iY = 710; }
    return(1);
   }

   if(iTeam == 3)
   {
    var rand = Random(2);
    if(!rand)
     { iX = 1817; iY = 149; }
    if(!--rand)
     { iX = 1551; iY = 234; }
    return(1);
   }

   if(iTeam == 4)
   {
    var rand = Random(2);
    if(!rand)
     { iX = 2093; iY = 468; }
    if(!--rand)
     { iX = 2042; iY = 568; }
    return(1);
   }



  }

  //Startsicht
  iX = 1770; iY = 654;
}
