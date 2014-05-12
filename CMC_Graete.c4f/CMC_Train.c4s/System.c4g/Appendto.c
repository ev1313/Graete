#strict 2

#appendto *

protected func Hit()
{
	if((GetY()+GetDefHeight(GetID())/2) >= 530) 
	{
  	  SetXDir(150);
	  SetYDir(-2);
	}
	
	if(GetX() >= LandscapeWidth()-15)	
	  RemoveObject(); 
	_inherited(...);
}
