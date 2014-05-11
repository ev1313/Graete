/*-- Neues Objekt --*/

#strict

func Initialize() {
   
  return(1);
}

func Hit() {
  var obj;
//  if(GetAction()ne"Falling") return(1);
  Sound("RockBreak*");
  // unten
	
  RemoveObject();
}
