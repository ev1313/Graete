/*-- Occupation 2.0 --*/

#strict 2
#appendto GOCC

private func StartTickets()		{return 500;}		//Standardticketzahl

private func ChangeStartTickets(id dummy, int iChange)
{
  //Stand verändern (maximal 1000 Tickets)
  iStartTickets = BoundBy(iStartTickets+iChange,100,1000);
  //Sound
  Sound("Grab", 1,0,0,1);
  //Menü wieder öffnen
  var iSel = 1;
  if(iChange == -1) iSel = 2;
  OpenGoalMenu(0, iSel);
}

public func ChooserFinished()
{
  var i = AddEffect("IntGOCC",this,100,180,this,GetID());
  inherited(...);
}

protected func FxIntGOCCStart(pTarget, iEffectNumber)
{
  return 1;
}

protected func FxIntGOCCTimer(pTarget, iEffectNumber)
{
  var aTeamPosts = CreateArray(GetTeamCount());
  var iTeam;
  
  for(var fpost in FindObjects(Find_ID(OFPL)))
    if(iTeam = fpost->GetTeam())
	  aTeamPosts[iTeam-1]++;
  
  for(var i = 0; i<GetTeamCount();i++)
    Log("%d,%d",i,aTeamPosts[i]);
  
  var iHighest = 0;
  for(var loop = 0;loop<GetTeamCount();loop++)
    if(iHighest < aTeamPosts[loop])
	  iHighest = aTeamPosts[loop];
    
  for(loop = 0;loop<GetTeamCount();loop++)
	if(aTeamPosts[loop] < iHighest)
	  DoTickets(loop+1,-iHighest);
  
  return 1;
}