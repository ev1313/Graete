/*-- Swamp --*/

#strict 2

public func Initialize()
{
/*
  var rnd;
  if(Random(4))
    rnd = Random(4)+1;
  else
    rnd = 4+Random(4)+1;

  if(rnd != 1)
    SetGraphics(Format("%d",rnd));
  else
    SetGraphics();*/
}

public func Set(number)  {

    if(number > 8) return(0);
    if(number == 1) SetGraphics("Graphics");
     else SetGraphics(Format("Graphics%d", number));
     
    return(1);
    }
