/*-- Sky --*/

#strict
#include CSTD

static aFlag;


/* Initialisierung */

func Initialize()
{
  SetWind(100);
  //Starttitel und Musikliste zusammenstellen
  SetPlayList("CMC_Base Groove.ogg;CMC_Firehawk.ogg;CMC_Friendly Unit.ogg;CMC_Getaway.ogg;CMC_Moving Squad.ogg;CMC_Offensive.ogg;CMC_Showtime.ogg;CMC_Slow Motion.ogg;CMC_Striking Force.ogg;CMC_No Good.ogg;CMC_Obsession.ogg");
  Music("CMC_Offensive.ogg");
  //Bildschirmfärbung
  SetGamma(RGB(2,3,10), RGB(131,135,158), RGB(252,253,255) );
  //Flaggen
  aFlag = [];
  //Szenario einrichten
  CreateFurniture();
  //Ausrüstung plazieren
  CreateEquipment();
  return(1);
}

/* Plazierungslisten */

func CreateFurniture()
{
  Log("$CreatingFurniture$");

  //Rampen
  DrawMaterialQuad("Wall-Metal2",677,810,677,826,617,810,677,810,true);
  DrawMaterialQuad("Wall-Metal2",690,811,690,795,750,811,690,811,true);

  DrawMaterialQuad("Wall-Stripes",799,886,799,870,749,886,799,886,true);
  DrawMaterialQuad("Wall-Stripes",791,885,791,901,841,885,791,885,true);

  DrawMaterialQuad("Wall-Stripes",1355,884,1355,900,1305,884,1355,884,true);
  DrawMaterialQuad("Wall-Stripes",1349,886,1349,870,1399,886,1349,886,true);

  DrawMaterialQuad("Wall-Metal2",1458,812,1458,796,1398,812,1458,812,true);
  DrawMaterialQuad("Wall-Metal2",1456,810,1456,826,1506,810,1456,810,true);

  //Aufzüge
  CreateObject(LFTP, 180, 350, -1);
  var liftp = CreateObject(LFTP, 375, 360, -1);
  liftp->DisableVertical();
  var liftp = CreateObject(LFTP, 885, 225, -1);
  liftp->DisableVertical();

  var liftp = CreateObject(LFTP, 540, 720, -1);
  liftp->DisableVertical();
  var liftp = CreateObject(LFTP, 810, 720, -1);
  liftp->DisableVertical();

  var liftp = CreateObject(LFTP, 1340, 720, -1);
  liftp->DisableVertical();
  var liftp = CreateObject(LFTP, 1620, 720, -1);
  liftp->DisableVertical();

  var liftp = CreateObject(LFTP, 1260, 225, -1);
  liftp->DisableVertical();
  var liftp = CreateObject(LFTP, 1770, 360, -1);
  liftp->DisableVertical();
  CreateObject(LFTP, 1965, 350, -1);

  //Leitern
  CreateObject(LADR, 75, 705, -1)->Set(61);

  CreateObject(LADR, 415, 680, -1)->Set(18);
  CreateObject(LADR, 470, 560, -1)->Set(10);
  CreateObject(LADR, 575, 510, -1)->Set(10);
  CreateObject(LADR, 725, 460, -1)->Set(10);

  CreateObject(LADR, 570, 865, -1)->Set(8);
  CreateObject(LADR, 615, 970, -1)->Set(10);
  CreateObject(LADR, 675, 775, -1)->Set(8);
  CreateObject(LADR, 835, 435, -1)->Set(9);
  CreateObject(LADR, 855, 970, -1)->Set(12);
  CreateObject(LADR, 975, 850, -1)->Set(18);

  CreateObject(LADR, 985, 415, -1)->Set(8);
  CreateObject(LADR, 1075, 660, -1)->Set(56);
  CreateObject(LADR, 1160, 415, -1)->Set(8);

  CreateObject(LADR, 1170, 850, -1)->Set(18);
  CreateObject(LADR, 1290, 970, -1)->Set(12);
  CreateObject(LADR, 1315, 435, -1)->Set(9);
  CreateObject(LADR, 1470, 775, -1)->Set(8);
  CreateObject(LADR, 1530, 970, -1)->Set(10);
  CreateObject(LADR, 1575, 865, -1)->Set(8);

  CreateObject(LADR, 1420, 460, -1)->Set(10);
  CreateObject(LADR, 1570, 510, -1)->Set(10);
  CreateObject(LADR, 1675, 560, -1)->Set(10);
  CreateObject(LADR, 1730, 680, -1)->Set(18);

  CreateObject(LADR, 2070, 705, -1)->Set(61);

  //Große Bodenlucken
  CreateObject(H24K, 75, 218, -1);

  CreateObject(H24K, 570, 803, -1);
  CreateObject(H24K, 615, 893, -1);
  CreateObject(H24K, 675, 713, -1);
  CreateObject(H24K, 855, 878, -1);

  CreateObject(H24K, 975, 713, -1);
  CreateObject(H24K, 1170, 713, -1);

  CreateObject(H24K, 1290, 878, -1);
  CreateObject(H24K, 1530, 893, -1);
  CreateObject(H24K, 1470, 713, -1);
  CreateObject(H24K, 1575, 803, -1);

  CreateObject(H24K, 2070, 218, -1);

  //Spinde
  CreateObject(LCKR, 1020, 990, -1);
  CreateObject(LCKR, 1035, 990, -1);
  CreateObject(LCKR, 1050, 990, -1);
  CreateObject(LCKR, 1065, 990, -1);
  CreateObject(LCKR, 1080, 990, -1);
  CreateObject(LCKR, 1095, 990, -1);
  CreateObject(LCKR, 1110, 990, -1);

  //Betten
  CreateObject(BED2, 645, 990, -1);
  CreateObject(BED2, 710, 990, -1);
  CreateObject(BED2, 775, 990, -1);
  CreateObject(BED2, 1350, 990, -1);
  CreateObject(BED2, 1415, 990, -1);
  CreateObject(BED2, 1480, 990, -1);

  //Kommoden
  CreateObject(LCOM, 620, 990, -1);
  CreateObject(LCOM, 680, 990, -1);
  CreateObject(LCOM, 740, 990, -1);
  CreateObject(LCOM, 1385, 990, -1);
  CreateObject(LCOM, 1445, 990, -1);
  CreateObject(LCOM, 1515, 990, -1);

  //Sandsackbarrieren
  CreateObject(SBBA, 390, 570, -1)->Right();
  CreateObject(SBBA, 940, 615, -1);
  CreateObject(SBBA, 1001, 540, -1);
  CreateObject(SBBA, 1145, 540, -1)->Right();
  CreateObject(SBBA, 1205, 615, -1)->Right();
  CreateObject(SBBA, 1755, 570, -1);

  //Explosivkiste
  CreateObject(XWCR, 1145, 705, -1)->AutoRespawn();

  //Metallkisten
  CreateObject(MWCR, 880, 990, -1)->AutoRespawn();
  CreateObject(MWCR, 1000, 705, -1)->AutoRespawn();
  CreateObject(MWCR, 1160, 990, -1)->AutoRespawn();
  CreateObject(MWCR, 1185, 435, -1)->AutoRespawn();
  CreateObject(MWCR, 1445, 687, -1);
  CreateObject(MWCR, 1445, 705, -1)->AutoRespawn();

  //Kisten
  CreateObject(WCR2, 340, 210, -1)->AutoRespawn();
  CreateObject(WCR2, 360, 210, -1)->AutoRespawn();
  CreateObject(WCR2, 900, 870, -1)->AutoRespawn();
  CreateObject(WCR2, 1180, 990, -1)->AutoRespawn();
  CreateObject(WCR2, 1200, 990, -1)->AutoRespawn();
  CreateObject(WCR2, 1220, 970, -1)->AutoRespawn();
  CreateObject(WCR2, 1220, 990, -1)->AutoRespawn();
  CreateObject(WCR2, 1800, 210, -1)->AutoRespawn();
  CreateObject(WCR2, 1820, 210, -1)->AutoRespawn();

  //Stahlbrücken
  CreateObject(_HBR, 262, 222, -1);
  CreateObject(_HBR, 334, 222, -1);
  CreateObject(_HBR, 406, 222, -1);
  CreateObject(_HBR, 478, 222, -1);

  CreateObject(_HBR, 490, 1002, -1);
  CreateObject(_HBR, 1640, 1002, -1);

  CreateObject(_HBR, 1653, 222, -1);
  CreateObject(_HBR, 1725, 222, -1);
  CreateObject(_HBR, 1797, 222, -1);
  CreateObject(_HBR, 1869, 222, -1);

  //Fenster
  CreateObject(WNDW, 490, 888, -1)->Set();
  CreateObject(WNDW, 1655, 888, -1)->Set(1);

  //Explosivtanks
  CreateObject(XTNK, 190, 705, -1)->AutoRespawn();
  CreateObject(XTNK, 250, 705, -1)->AutoRespawn();

  CreateObject(XTNK, 1900, 705, -1)->AutoRespawn();
  CreateObject(XTNK, 1960, 705, -1)->AutoRespawn();

  //Phosphortanks
  CreateObject(PTNK, 440, 210, -1)->AutoRespawn();
  CreateObject(PTNK, 1690, 210, -1)->AutoRespawn();

  //Phosphorfässer
  CreateObject(HBRL, 490, 210, -1)->AutoRespawn();
  CreateObject(HBRL, 500, 210, -1)->AutoRespawn();

  CreateObject(HBRL, 1630, 210, -1)->AutoRespawn();
  CreateObject(HBRL, 1640, 210, -1)->AutoRespawn();

  //Explosivfässer
  CreateObject(XBRL, 180, 705, -1)->AutoRespawn();
  CreateObject(XBRL, 190, 705, -1)->AutoRespawn();
  CreateObject(XBRL, 250, 705, -1)->AutoRespawn();
  CreateObject(XBRL, 260, 705, -1)->AutoRespawn();

  CreateObject(XBRL, 1230, 870, -1)->AutoRespawn();
  CreateObject(XBRL, 1240, 870, -1)->AutoRespawn();

  CreateObject(XBRL, 1890, 705, -1)->AutoRespawn();
  CreateObject(XBRL, 1900, 705, -1)->AutoRespawn();
  CreateObject(XBRL, 1960, 705, -1)->AutoRespawn();
  CreateObject(XBRL, 1970, 705, -1)->AutoRespawn();

  //Benzinfässer
  CreateObject(PBRL, 540, 990, -1)->AutoRespawn();
  CreateObject(PBRL, 970, 435, -1)->AutoRespawn();
  CreateObject(PBRL, 980, 435, -1)->AutoRespawn();
  CreateObject(PBRL, 1595, 885, -1)->AutoRespawn();

  //Gasflaschen
  CreateObject(GSBL, 595, 450, -1)->AutoRespawn();
  CreateObject(GSBL, 1555, 450, -1)->AutoRespawn();

  //Glasscheiben
  CreateObject(_WIN, 147, 255, -1);
  CreateObject(_WIN, 147, 284, -1);
  CreateObject(_WIN, 147, 313, -1);
  CreateObject(_WIN, 147, 342, -1);
  CreateObject(_WIN, 147, 371, -1);
  CreateObject(_WIN, 147, 400, -1);
  CreateObject(_WIN, 147, 429, -1);
  CreateObject(_WIN, 147, 458, -1);
  CreateObject(_WIN, 147, 487, -1);

  CreateObject(_WIN, 1198, 764, -1);
  CreateObject(_WIN, 1038, 285, -1);
  CreateObject(_WIN, 1108, 285, -1);
  CreateObject(_WIN, 947,  764, -1);

  CreateObject(_WIN, 1998, 255, -1);
  CreateObject(_WIN, 1998, 284, -1);
  CreateObject(_WIN, 1998, 313, -1);
  CreateObject(_WIN, 1998, 342, -1);
  CreateObject(_WIN, 1998, 371, -1);
  CreateObject(_WIN, 1998, 400, -1);
  CreateObject(_WIN, 1998, 429, -1);
  CreateObject(_WIN, 1998, 458, -1);
  CreateObject(_WIN, 1998, 487, -1);

  //Container
  CreateObject(CON1, 85, 165, -1);
  CreateObject(CON1, 710, 705, -1)->SetPerspective(2);
  CreateObject(CON1, 2060, 165, -1);

  //Glasröhren
  CreateObject(GLST, 630, 450, -1);
  CreateObject(GLST, 650, 450, -1);

  //Poster
  CreateObject(PSTR, 1170, 670, -1)->SetCon(80);

  //Kartenprojektor
  CreateObject(MPPJ, 1070, 870, -1);

  //Automaten
  CreateObject(CLVM, 1030, 210, -1);
  CreateObject(CLVM, 1245, 990, -1);

  //Feuerlöscher
  CreateObject(FIEX, 140, 560, -1);
  CreateObject(FIEX, 640, 875, -1);
  CreateObject(FIEX, 1100, 200, -1);
  CreateObject(FIEX, 1110, 695, -1);
  CreateObject(FIEX, 1490, 875, -1);
  CreateObject(FIEX, 2000, 560, -1);

  //Satellitenschüssel
  CreateObject(SADH, 1075, 150, -1);

  //Ventillator
  CreateObject(VEN3, 1070, 950, -1)->SetCon(40);

  //Zäune
  CreateObject(FENC, 90, 705, -1);
  CreateObject(FENC, 150, 705, -1);
  CreateObject(FENC, 210, 705, -1);
  CreateObject(FENC, 270, 705, -1);
  CreateObject(FENC, 330, 705, -1);

  CreateObject(FENC, 1005, 435, -1);
  CreateObject(FENC, 1140, 435, -1);

  CreateObject(FENC, 1815, 705, -1);
  CreateObject(FENC, 1875, 705, -1);
  CreateObject(FENC, 1935, 705, -1);
  CreateObject(FENC, 1995, 705, -1);
  CreateObject(FENC, 2055, 705, -1);

  //Lüftungsgitter
  CreateObject(ENGT, 180, 250, -1);
  CreateObject(ENGT, 180, 350, -1);
  CreateObject(ENGT, 180, 450, -1);
  CreateObject(ENGT, 180, 550, -1);
  CreateObject(ENGT, 1045, 760, -1)->SetCon(80);
  CreateObject(ENGT, 1100, 760, -1)->SetCon(80);
  CreateObject(ENGT, 1965, 250, -1);
  CreateObject(ENGT, 1965, 350, -1);
  CreateObject(ENGT, 1965, 450, -1);
  CreateObject(ENGT, 1965, 550, -1);

  //Türen
  CreateObject(SLDR, 950, 870, -1);
  CreateObject(SLDR, 995, 615, -1);
  CreateObject(SLDR, 1040, 435, -1);
  CreateObject(SLDR, 1040, 540, -1);
  CreateObject(SLDR, 1105, 435, -1);
  CreateObject(SLDR, 1105, 540, -1);
  CreateObject(SLDR, 1150, 615, -1);
  CreateObject(SLDR, 1195, 870, -1);

  //Verbundene Türen
  var doorw = CreateObject(ROOM, 1000, 990, -1);
  CreateObject(GAT1, 1070, 745, -1)->Connect(doorw);

  //Tore und Konsolen
  var autod = CreateObject (HNG2, 675, 885, -1);
  CreateObject (CONS, 820, 865, -1)
  ->Set(autod);

  var autod = CreateObject (HNG2, 1470, 885, -1);
  CreateObject (CONS, 1330, 865, -1)
  ->Set(autod);

  //Objekte
  CreateObject(OCHR, 1564, 884, -1);
  CreateObject(OCHR, 565, 884, -1);
  CreateObject(MONI, 938, 979, -1);
  CreateObject(TABL, 934, 989, -1);
  CreateObject(PLT2, 976, 991, -1);
  CreateObject(CHAR, 914, 989, -1);
  CreateObject(OTBL, 1569, 884, -1);
  CreateObject(OTBL, 562, 884, -1);
  CreateObject(CCP1, 1498, 450, -1);
  CreateObject(LCOM, 677, 989, -1);
  CreateObject(FIEX, 1103, 200, -1);
  CreateObject(FIEX, 1112, 697, -1);
  CreateObject(FIEX, 142, 558, -1);
  CreateObject(FIEX, 1990, 560, -1);
  CreateObject(FAUD, 1089, 362, -1);
  CreateObject(SCR4, 1162, 944, -1);

}

func CreateEquipment()
{
  Log("$CreatingEquipment$");
  //Alle Objekte folglich von links oben nach rechts unten

  //Munitionskisten (Kugeln)
  var tmp = CreateObject (AMCT, 115, 210, -1);
  tmp->Set(ABOX);
  tmp->SetGraphics("Normal");

  var tmp = CreateObject (AMCT, 2015, 210, -1);
  tmp->Set(ABOX);
  tmp->SetGraphics("Normal");

  //Munitionskisten (Granaten)
  var tmp = CreateObject (AMCT, 390, 705, -1);
  tmp->Set(GBOX);
  tmp->SetGraphics("Normal");

  var tmp = CreateObject (AMCT, 1755, 705, -1);
  tmp->Set(GBOX);
  tmp->SetGraphics("Normal");

  //Munitionskiste (Feldgranaten)
  var tmp = CreateObject (AMCT, 1245, 435, -1);
  tmp->Set(FGRN);
  tmp->SetGraphics("Normal");

  //Raketen
  PlaceSpawnpoint(MBOX, 915, 805);
  PlaceSpawnpoint(MBOX, 1230, 805);
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
   {CreateFlag(1,300,570,GetTeamColor(1));}
   if(aTeams[2] == true)
   {CreateFlag(2,1855,570,GetTeamColor(2));}
  }

  //HTF-Spielziel
  if (FindObject(GHTF))
  {
   //Flaggenposten
   var flag = CreateObject(OFPL, 1070,705, -1);
   flag->~Set("$Flag3$");
  }

  //OP-Spielziel
  if(FindObject(GOCC))
  {
   //Flaggen
   aFlag[0] = CreateObject(OFPL,300,570,NO_OWNER);
   aFlag[0] -> AddSpawnPoint(135,200);
   aFlag[0] -> AddSpawnPoint(135,695);
   aFlag[0] -> AddSpawnPoint(305,695);
   if(aTeams[1] == true)
   {
    aFlag[0]->Set("$Flag1$",100,2);
    aFlag[0]->Capture(1,1);
   }
   else
   {
    aFlag[0]->Set("$Flag1$",0,2);
   }

   aFlag[1] = CreateObject(OFPL,1855,570,NO_OWNER);
   aFlag[1] -> AddSpawnPoint(2010,200);
   aFlag[1] -> AddSpawnPoint(2010,695);
   aFlag[1] -> AddSpawnPoint(1785,695);
   if(aTeams[1] == true)
   {
    aFlag[1]->Set("$Flag2$",100,2);
    aFlag[1]->Capture(2,1);
   }
   else
   {
    aFlag[1]->Set("$Flag2$",0,2);
   }

   aFlag[2] = CreateObject(OFPL,1070,705,NO_OWNER);
   aFlag[2] -> AddSpawnPoint(1070,770);
   aFlag[2] -> AddSpawnPoint(1070,870);
   if(aTeams[1] == true)
   {
    aFlag[2]->Set("$Flag3$",0,2);
   }

   aFlag[3] = CreateObject(OFPL,1575,990,NO_OWNER);
   aFlag[3] -> AddSpawnPoint(1255,980);
   aFlag[3] -> AddSpawnPoint(1485,875);
   aFlag[3] -> AddSpawnPoint(1455,785);
   aFlag[3]->Set("$Flag4$",0,2);


   aFlag[4] = CreateObject(OFPL,570,990,NO_OWNER);
   aFlag[4] -> AddSpawnPoint(840,980);
   aFlag[4] -> AddSpawnPoint(660,875);
   aFlag[4] -> AddSpawnPoint(695,785);
   aFlag[4]->Set("$Flag5$",0,2);


   aFlag[5] = CreateObject(OFPL,935,435,NO_OWNER);
   aFlag[5] -> AddSpawnPoint(1215,425);
   aFlag[5] -> AddSpawnPoint(1035,200);
   aFlag[5] -> AddSpawnPoint(1110,200);
   aFlag[5]->Set("$Flag6$",0,2);
 }

  //Base Assault-Spielziel
  if(FindObject(GBAS))
  {
   //Zielobjekte
   AddAssaultTarget(CLVM, 600, 990, 500, 1, "$Flag4$", 0, [[840, 980], [660, 875], [695, 785]]);
   AddAssaultTarget(CMSN, 121, 568, 300, 1, "$Flag1$", 1, [[135, 200], [135, 695], [305, 965]]);

   AddAssaultTarget(CLVM, 1553, 990, 500, 2, "$Flag5$", 0, [[1255, 980], [1485, 875], [1455, 785]]);
   AddAssaultTarget(CMSN, 2027, 569, 300, 2, "$Flag2$", 1, [[2010, 200], [2010, 695], [1785, 695]]);
  }

}

/* Relaunch */

public func RelaunchPosition(& iX, & iY, int iTeam)
{
  //DM/LMS/HTF/CTF-Spielziel
  if(FindObject(GTDM) || FindObject(GLMS) || FindObject(GHTF) || FindObject(GCTF))
  {
   if(iTeam == 1)
   {
    var rand = Random(3);
    if(!rand)
     { iX = 360; iY = 695; }
    if(!--rand)
     { iX = 310; iY = 560; }
    if(!--rand)
     { iX = 135; iY = 200; }
   }
   if(iTeam == 2)
   {
    var rand = Random(2);
    if(!rand)
     { iX = 1785; iY = 695; }
    if(!--rand)
     { iX = 1840; iY = 560; }
    if(!--rand)
     { iX = 2000; iY = 200; }
   }
   return(1);
  }

  //Startsicht
  iX = 1072; iY = 555;
}
