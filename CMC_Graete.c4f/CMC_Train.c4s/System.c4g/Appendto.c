#strict 2

#appendto *

protected func Hit()
{
	if((GetY()+GetDefHeight(GetID())/2) >= 530) 
	{
  	  SetXDir(200);
	  SetYDir(-2);
	}
	
	if(GetX() >= LandscapeWidth()-20)	
	  RemoveObject(); 
	_inherited(...);
}
