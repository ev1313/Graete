#strict 2

func Initialize() {

  SetSolidMask(0,0,51,30);
  return(1);
  }
  
func Set(i)  {
   
  if(i == 1) {
    SetAction("PicOne");
    SetSolidMask(0,0,51,30);
    return(1);
    }
  
  if(i == 2) {
    SetAction("PicTwo");
    SetSolidMask(51,0,83-51,30);
    return(1);
    }
  
  if(i == 3) {
    SetAction("PicThree");
    SetSolidMask(83,0,147-83,30);
    return(1);
    }
    
  return(0);
  }
