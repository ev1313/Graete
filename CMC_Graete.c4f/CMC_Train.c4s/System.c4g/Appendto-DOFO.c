/*-- Nebliger Wind --*/

#strict 2

#appendto DOFO

//hier gibt es keinen zufälligen Wind 

protected func Timer()
{
  //Effektmanager beachten
  if(!GetEffectData(EFSM_Fog)) return;

  //Nebel erstellen
  DoFog();

  //Bewegung des Windes
  if(!GetEffect("IntPush",this))
    AddEffect("IntPush", this, 50, 1, this, GetID(), 35*(3+Random(10)));
}

public func FxIntPushTimer(object pTarget, int iEffectNumber, int iEffectTime)
{
  PushParticles("Fog",+20);
}
