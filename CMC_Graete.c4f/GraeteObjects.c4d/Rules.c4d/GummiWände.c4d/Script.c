/*-- Gummizelle! --*/

#strict

protected func Initialize(){

 SetPosition();
 return(1);}

protected func Check(){

 
  // Links
  while(Var()=FindObject(0,0,0,15,LandscapeHeight(),0,0,0,0,Var()))
       if(GetXDir(Var()) < 0)
          SetXDir(-(GetXDir(Var())),Var()) && Sound("Punch*");



  // Rechts
  while(Var()=FindObject(0,LandscapeWidth()-15,0,15,LandscapeHeight(),0,0,0,0,Var()))
       if(GetXDir(Var()) > 0)
          SetXDir(-(GetXDir(Var())),Var()) && Sound("Punch*");


  // Oben
  while(Var()=FindObject(0,0,0,LandscapeWidth(),10,0,0,0,0,Var()))
       if(GetYDir(Var(),10) < 0)
          SetYDir(-(GetYDir(Var())),Var()) && Sound("Punch*");



  // Unten
  while(Var()=FindObject(0,0,LandscapeHeight()-15,LandscapeWidth(),15,0,0,0,0,Var()))
       if(GetCategory(Var()) != 264200)
         if(GetCategory(Var()) != 3332)
           if(GetYDir(Var(),10) > 50)
              SetYDir(-(((GetYDir(Var()))*2)/3),Var()) && Sound("Punch*");
  return(1);}