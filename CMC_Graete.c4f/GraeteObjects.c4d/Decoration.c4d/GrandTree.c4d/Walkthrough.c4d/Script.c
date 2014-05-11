/*-- Vorsprung --*/

#strict 2

func Initialize() {
   SetSolidMask(0,30,60,60);
   SetAction("Pig");
  return(1);
}

func Set(i) {
   
  if(i > 2) return(0);
  SetPhase(i);
  SetSolidMask(i*60,30 ,60,60);
   
   return(1);
   }
