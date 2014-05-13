/*-- Decay --*/

#strict 2

public func Set(number)  
{
	if(number > 4) return(0);
    if(number == 1) 
		SetGraphics();
	else 
		SetGraphics(Format("%d", number));
     
    return(1);
}
