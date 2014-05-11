/*-- Eiszapfen --*/

#strict

local phase;

func Initialize() {
  SetAction("Hanging");
  SetPhase(phase=Random(4));
}

func Hit() {
  var obj;
//  if(GetAction()ne"Falling") return(1);
  Sound("RockBreak*");
  Sound("Blast2",0,0,50);
  // links oben
  ObjectSetAction(obj=CreateObject(_ICP,-4,-4,-1),"Exist");
  SetPhase(phase*2,obj);
  SetRDir(Random(20)-10,obj);
  SetSpeed(Random(30)-15,-Random(35)+10,obj);
  // rechts oben
  ObjectSetAction(obj=CreateObject(_ICP,3,-4,-1),"Exist");
  SetPhase(phase*2+1,obj);
  SetRDir(Random(20)-10,obj);
  SetSpeed(Random(30)-15,-Random(35)+10,obj);
  // unten
  ObjectSetAction(obj=CreateObject(_ICP,0,12,-1),"LameExist");
  SetPhase(phase,obj);
  SetRDir(Random(20)-10,obj);
  SetSpeed(Random(10)-15,-Random(35)+10,obj);
	
  RemoveObject();
}
