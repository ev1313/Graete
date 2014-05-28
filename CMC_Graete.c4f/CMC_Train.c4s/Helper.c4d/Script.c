#strict 2

protected func Initialize() {
  
  return 1;
}

public func LoopWheel() {
	SoundLevel("TrainW.ogg",80,this);
	return 1;
}

public func Foo()
{
	AddEffect("Foo",this,101,1,0,GetID());
	return 1;
}

protected func FxFooStart(object pObj, int iNr)
{
	var rnd = Random(3);
	rnd++;
	if(rnd == 1) EffectVar(0,pObj,iNr) = 1;
	if(rnd == 2) EffectVar(0,pObj,iNr) = 2;
	
	Sound(Format("TrainH%d.ogg",rnd),0,pObj,100);
	return 1;
}

protected func FxFooTimer(object pObj, int iNr, int iTime)
{
	var foo = EffectVar(0,pObj,iNr);
	SetPosition(GetX(pObj)+5,0,pObj);
	if(iTime >= 120 && foo == 1)
	{
		EffectVar(0,pObj,iNr) = 3;
		SoundLevel("TrainWLoop*.ogg",100,pObj);
	}
	
	if(iTime >= 210 && foo == 2)
	{
		SoundLevel("TrainW.ogg",100,pObj);
		EffectVar(0,pObj,iNr) = 3;
	}
	
	if(GetX(pObj) >= LandscapeWidth())
		return -1;
	
	return 1;
}

protected func Damage(int iChange, int iByPlr)
{
	return 0;
}
