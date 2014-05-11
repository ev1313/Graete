/*-- Gras bleibt schön da :D --*/

#strict

#appendto GRAS

// Bei nahen Explosionen
public func OnShockwaveHit(iLevel,iX,iY)
{
 var con=(40*GetCon())/100;
 iLevel=40+iLevel/2;
 for(var cnt=0;cnt<15+Random(10);cnt++)
  CreateParticle("GrassBlade",RandomX(-con/2,con/2),-1,RandomX(-iLevel/3 ,iLevel/3),RandomX(-2*iLevel/3,-iLevel/3),30+Random(30),RGB(255,255,255),0,0);
 return(1);
}
