/*-- CMC - Luftherrschaft --*/

#strict
#include CSTD

static aFlag,idheight;

func MaxTime() { return 180; }

func ChooserRuleConfig()
{
  var array = [RWDS, NOFF, WPST, NODR, NSPC];
  return array;
}

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

func ChooserRuleConfig()
{
  //Standardregelsatz: Belohnungssystem, Kein FriendlyFire, Waffen bleiben, Arena
  return [RWDS,NOFF,WPST,NODR];
}

func CreateFurniture()
{
	//Nebel platzieren
  for(var i;i<260;++i) 
    CreateParticle("Fog",Random(LandscapeWidth()),RandomX(LandscapeHeight()/2),RandomX(3,9),0,RandomX(1000,1500));
    
  Log("$CreatingFurniture$");
  
  //Lautsprecher
  // CreateObject(SE4K, 970, 815, -1)->Set("Announce*.ogg",1700,200);
}

public func PlaceSome(c, ida)
{
 for(var i = 0; i < c; i++)
  PlaceSpawnpoint(ida,Random(LandscapeWidth()),Random(LandscapeHeight()));
}

func CreateEquipment()
{
  Log("$CreatingEquipment$");
  PlaceSome(5,ABOX);
  PlaceSome(1,GBOX);
  PlaceSome(1,MIAP);
  PlaceSome(2,FRAG);
  PlaceSome(2,SGRN);
  PlaceSome(4,FGRN);
  PlaceSome(1,MNGN);
  PlaceSome(1,RTLR);
  PlaceSome(2,PPGN);
  PlaceSome(2,SMGN);
  PlaceSome(2,RSHL);
  PlaceSome(2,DGNN);
  PlaceSome(1,ASTR);
  PlaceSome(1,BBTP);
  PlaceSome(2,C4PA);
  PlaceSome(1,CDBT);
  PlaceSome(2,PGRN);
}

/* Regelwähler */

public func ChooserFinished()
{
  inherited();

  //Teams abfragen
  var aTeams = [false,false,false,false,false];
  for(var i = 0; i < GetPlayerCount(); i++)
    aTeams[GetPlayerTeam(GetPlayerByIndex(i))] = true;


  //HTF-Spielziel
  if (FindObject(GHTF))
  {
   //Flaggenposten
   var flag = CreateObject(OFPL, LandscapeWidth() / 2,LandscapeHeight() / 2, -1);
   flag->~Set("$Flag1$");
  }
}

public func RelaunchClonk(int iPlr, object pCursor)
{
  //Clonkerstellung
  var pClonk = CreateObject(PCMK, 10, 10, iPlr);
  if(pCursor)
    GrabObjectInfo(pCursor, pClonk);
  else
    MakeCrewMember(pClonk, iPlr);

  DoEnergy(+150, pClonk);
  SetCursor(iPlr, pClonk);
  SetPlrView(iPlr, pClonk);

  //Clonknamen anzeigen
  PlayerMessage(iPlr, Format("@%s", GetName(pClonk)), pClonk);

  return pClonk;
}

public func RelaunchPlayer(int iPlr, object pCrew, object pKiller, int iTeam, bool bFirst)
{
  //Kein ordentlicher Spieler?
  if(GetOwner(pCrew) == NO_OWNER || iPlr == NO_OWNER || !GetPlayerName(iPlr))
    return;

  //Kein Team?
  if(!iTeam) iTeam = GetPlayerTeam(iPlr);

  //Falscher Cursor?
  if (!pCrew || !pCrew->~IsClonk())
    pCrew = GetCrew(iPlr);

  //Reject?
  if(!bFirst)
    if(RejectRelaunch(iPlr,iTeam))
      return;

  //Clonk tot?
  if(!GetAlive(pCrew))
    pCrew = RelaunchClonk(iPlr, pCrew);

  //Ausrüsten
  OnClonkEquip(pCrew);

  //Zufallsposition setzen
  var iX, iY;
  RelaunchPosition(iX, iY, iTeam);

  if(Contained(pCrew))
    SetPosition(iX, iY, Contained(pCrew));
  else
    SetPosition(iX, iY, pCrew);
	
  if(!bFirst){
	var pBlimp = CreateObject(BLMP, iX, iY + 10,iPlr);
	ObjectSetAction(pCrew, "Push", pBlimp);
  }
  
  if(!FindObject(MCSL) && !FindObject(CHOS))
    GameCallEx("OnClassSelection",pCrew);
}

/* Relaunch */

public func RelaunchPosition(& iX, & iY, int iTeam)
{
  //Startsicht
  iX = RandomX(100,LandscapeWidth()-200); 
  iY = RandomX(100,LandscapeHeight()-200);
}

func Script0()
{
  CreateParticle("Fog",0,Random(LandscapeHeight()/2),RandomX(3,9),0,RandomX(1000,1500)); 
}

func Script4()
{
  return(goto(0));
}
