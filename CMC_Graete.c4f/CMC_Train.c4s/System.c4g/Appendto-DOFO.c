/*-- Nebliger Wind --*/

#strict 2

#appendto DOFO

//hier gibt es keinen zufälligen Wind 

public func FxIntPushTimer(object pTarget, int iEffectNumber, int iEffectTime)
{
  PushParticles("Fog",+20);
}
