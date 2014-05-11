/*-- Decay --*/

#strict 2

public func Initialize()
{/*
  var rnd = Random(4)+1;
  if(rnd != 1)
    SetGraphics(Format("%d",rnd));
  else
    SetGraphics(); */
}

public func Set(number)  {


    if(number > 4) return(0);
    if(number == 1) SetGraphics();
     else SetGraphics(Format("%d", number));
     
    return(1);
    }
