/*------  -Primeval Forest- -----*/

#strict 2
#include CSTD

static aFlag;

func ChooserRuleConfig()
{
  var array = [RWDS, NOFF, WPST, NODR, NSPC];
  return array;
}

func Initialize() {

  //Starttitel und Musikliste zusammenstellen
  SetPlayList("CMC_Base Groove.ogg;CMC_Firehawk.ogg;CMC_Friendly Unit.ogg;CMC_Getaway.ogg;CMC_Moving Squad.ogg;CMC_Offensive.ogg;CMC_Showtime.ogg;CMC_Slow Motion.ogg;CMC_Striking Force.ogg;CMC_No Good.ogg;CMC_Obsession.ogg");
  Music("CMC_Getaway.ogg");
  //Bildschirmfärbung
  
  aFlag = CreateArray();
  
  PlaceFurniture();
  PlaceEquipment();
  _inherited();
  
   return(1);
   }
   
   
func PlaceFurniture()  {
  
  // Großer Baum::
  CreateObject(GR00, 1300,921);
  
  // Lianen::
  CreateObject(VINE, 975 , 562);
  CreateObject(VINE, 936 , 572);
  CreateObject(VINE, 77  , 348);
  CreateObject(VINE, 100 , 345);
  CreateObject(VINE, 140 , 337);
  CreateObject(VINE, 1220, 307);
  
  // Großer Linanenbush am Lager::
  CreateObject(PT02, 85,420);
  
  // Büsche::
  CreateObject(BSH2, 1235, 430);
  CreateObject(BSH2, 1220, 445);
  CreateObject(BSH2, 1173, 472);
  CreateObject(BSH2, 38  , 430);
  CreateObject(BSH2, 856 , 692);
  CreateObject(BSH2, 617 , 490);
  CreateObject(BSH2,  65 , 370);
  CreateObject(BSH2,  47 , 380);
  
  // Keilschrift::
  CreateObject(CSTN, 160 , 602);

  // Gras::
  CreateObject(GRAS, 550 , 660);
  CreateObject(GRAS, 570 , 660);
  CreateObject(GRAS, 520 , 660);  
  CreateObject(GRAS, 315 , 393)->SetCategory(C4D_Foreground);
  
  // Rumhängende Pflanze::
 //  CreateObject(PT01,  45 , 585);  Die Pflanze sieht nicht wirklich gut aus.
  CreateObject(PT01, 520 , 462);
  CreateObject(PT01,1050 , 620);
  
  // "Decay"  und "Swamp"::
  CreateObject(H2DC, 185 , 550);
  CreateObject(H2DC, 145 , 550)->Set(3);
  CreateObject(H2DC,  75 , 570)->Set(2);
         // ----------
  CreateObject(H2SM, 130 , 618);
  CreateObject(H2SM, 1681, 595)->Set(7);
  CreateObject(H2SM, 1507, 260);
  CreateObject(H2SM, 1332, 320)->Set(4);
  CreateObject(H2SM,  333, 571);
  CreateObject(H2SM,  643, 675)->Set(2);
  
  // Obere-Baumetage::
  CreateObject(WKTH, 1285, 320);
  CreateObject(WKTH, 1332, 317)->Set(1);
  CreateObject(WKTH, 1384, 320)->Set(2);
  CreateObject(WKTH, 1507, 260);
  CreateObject(BLKN, 1155, 340);
  
  // Leitern::
  var ladr = CreateObject(LADR, 1470, 520, -1);
  ladr->Set(7, LADR_Left|LADR_Right|LADR_Front|LADR_Additional, "W");
  ladr->SetPosition(1470, 240);
  CreateObject(LADR, 1257, 520, -1)->Set(13, LADR_Left|LADR_Right|LADR_Front|LADR_Additional, "W");
  CreateObject(LADR, 1510, 450, -1)->Set(23, LADR_Left|LADR_Right|LADR_Front|LADR_Additional, "W");
  CreateObject(LADR, 1073, 490, -1)->Set(24, LADR_Left|LADR_Right|LADR_Front|LADR_Additional, "W");
  
  // Pilze::
  CreateObject(MUSH, 1710, 580);
  CreateObject(MUSH, 1665, 576)->Set(1);
  CreateObject(MUSH, 1681, 577)->Set(2);
  CreateObject(MUSH,  643, 660)->Set(2);
  var mush = CreateObject(MUSH,  649, 660);
  mush->Set(1); mush->SetCategory(C4D_Foreground);
  
  // Riesenbusch::
  CreateObject(TR02,  150, 442)->SetCategory(C4D_Background);
  CreateObject(TR02,  778, 450)->SetCategory(C4D_Background);
  CreateObject(TR02, 1190, 470)->SetCategory(C4D_Background);
  CreateObject(TR02, 1210, 470)->SetCategory(C4D_Background);
  
  // Baum1::
  CreateObject(TR01, 613, 480);
  
  // Höhlendeko::
  CreateObject(CVDC, 600,600);
  CreateObject(CVDC, 865,660);
  CreateObject(CVDC, 490,688)->SetAction("PicTwo");
  
  
  // Steinbrocken::
  var brigg = CreateObject(BRA9, 495, 392);
  brigg->SetSolidMask(0,0,1,1);
  brigg->SetCategory(C4D_Background);
  brigg->SetAction("PicOne");
  brigg->SetClrModulation(RGB(255-127, 255-127, 255-127));
  
return(1);
} 

func PlaceEquipment() {
  
   // Munnitionskisten::
   CreateObject(AMCT, 1165, 632)->Set(SGRN);
   CreateObject(H2SM, 1165, 650)->Set(6);
   CreateObject(AMCT,   70, 600)->Set(ABOX);
   CreateObject(AMCT, 1200, 288)->Set(ABOX);
   CreateObject(AMCT, 1507, 240)->Set(FRAG);
   CreateObject(AMCT,  100, 600)->Set(FGRN);
   
   // Fässer::
   CreateObject(PBRL, 75, 430)->AutoRespawn();
   
   // Andere Kisten::
   CreateObject(WCR2,  310, 390);
   }


public func ChooserFinished()
{
  inherited();
  
    // Teams abfragen
  var aTeams = [false,false,false,false,false];
  for(var i = 0; i < GetPlayerCount(); i++)
    aTeams[GetPlayerTeam(GetPlayerByIndex(i))] = true;
  
  
  
  // -------  -Besitznahme- -------- //
  
  if(FindObject(GOCC))
  {
   //Flaggen
   
   // Konfuse Leute fangen rechts an:
   aFlag[0] = CreateObject(OFPL,1450,490,NO_OWNER);
   aFlag[0]->AddSpawnPoint(1590,533);
   aFlag[0]->AddSpawnPoint(1345,530);
   aFlag[0]->Set("$Flag1$",100,2);
   aFlag[0]->Capture(2,1);
   
   // Dann mittig oben:
   aFlag[1] = CreateObject(OFPL,780,435,NO_OWNER);
   aFlag[1]->AddSpawnPoint(840,430);
   aFlag[1]->AddSpawnPoint(720,445);
   aFlag[1]->Set("$Flag2$",0,2);
   
   // Dann versuchen wir es mittig unten:
   aFlag[2] = CreateObject(OFPL,550,660,NO_OWNER);
   aFlag[2]->AddSpawnPoint(645,645);
   aFlag[2]->AddSpawnPoint(510,645);
   aFlag[2]->Set("$Flag3$",0,2);
   
   // Und vlt. auch mal links:
   aFlag[3] = CreateObject(OFPL,115,430,NO_OWNER);
   aFlag[3]->AddSpawnPoint(90, 410);
   aFlag[3]->AddSpawnPoint(130, 410);
   aFlag[3]->Set("$Flag4$",100,2);
   aFlag[3]->Capture(1,1);
    
   // Balkon am Baum:
   aFlag[4] = CreateObject(OFPL, 1155, 287, NO_OWNER);
   aFlag[4]->AddSpawnPoint(1380, 280);
   aFlag[4]->AddSpawnPoint(1500, 218);
   aFlag[4]->Set("$Flag5$",0,2);
  }
  
  //HTF-Spielziel
  if (FindObject(GHTF))
  {
    //Flaggenposten
    var flag = CreateObject(OFPL, 570,660, -1);
    flag->~Set("$Flag3$");
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
    if(FindObject(GHTF))
    {
      iX = 140; 
      iY = 420;
    }
    else
    {
    	var rand = Random(2);
    	if(!rand)
    	  { iX = 140; iY = 420; }
    	if(!--rand)
    	  { iX = 175; iY = 590; }
    }
   }
   if(iTeam == 2)
   {
    var rand = Random(2);
    if(!rand)
     { iX = 1570; iY = 520; }
    if(!--rand)
     { iX = 1380; iY = 280; }
   }
   return(1);
  }

  //Startsicht
  iX = LandscapeWidth()/2; iY = LandscapeHeight()/2;
}
