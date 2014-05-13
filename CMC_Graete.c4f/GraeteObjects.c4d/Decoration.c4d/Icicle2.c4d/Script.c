/*-- Eiszapfen --*/

#strict 2

func Initialize() 
{
  return(1);
}

func Hit() 
{
  Sound("RockBreak*");
  
  RemoveObject();
}
