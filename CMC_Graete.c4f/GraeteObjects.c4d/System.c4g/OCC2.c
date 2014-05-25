/*-- Occupation 2.0 --*/

#strict 2
#appendto GOCC

public func ChooserFinished()
{
  var i = AddEffect("IntGOCC",this,100,1080,this,GetID());
  inherited(...);
}

protected func FxIntGOCCStart(pTarget, iEffectNumber)
{
  return 1;
}

protected func FxIntGOCCTimer(pTarget, iEffectNumber)
{ 
  //alle Flaggenposten durchloopen und allen gegnerischen Teams ein Ticket abziehen
  for(var fpost in FindObjects(Find_ID(OFPL)))
  {
    var iTeam = fpost->GetTeam();
	if(iTeam)
  	  for(var loop = 1;loop<=GetTeamCount();loop++)
	    if(loop != iTeam && GetTickets(loop))
	      DoTickets(loop,-1);
  }
  
  return 1;
}