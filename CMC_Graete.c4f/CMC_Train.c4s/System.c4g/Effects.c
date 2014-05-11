/* Effects */

#strict 2

global func FxBackgroundTimer()
{
	SetSkyParallax(1, 20, 20, 100, 0, SkyPar_Keep, SkyPar_Keep);
	return 1;
}

global func FxSoundFadeOutStart(object pObj, int iNr, int iTemp, int iStartVol, int iEndVol, string szSound, int iFade)
{
	EffectVar(0, pObj, iNr) = iStartVol;
	EffectVar(1, pObj, iNr) = iEndVol;
	EffectVar(2, pObj, iNr) = szSound;
	EffectVar(3, pObj, iNr) = iFade;
	
	if(szSound == " ") // Kein Sound angegeben? Fehler loggen. 
	{
		Log("Fehler: AddEffect(\"SoundFadeOut\",[...]) braucht als 9. Parameter den Sound-String!");
		RemoveEffect("SoundFadeOut",pObj,iNr);
	}
		
	if(iFade == 0)
		EffectVar(3, pObj, iNr) = 1;
	if(iStartVol == 0)
		EffectVar(0, pObj, iNr) = 100;
	return 1;
}

global func FxSoundFadeOutTimer(object pObj, int iNr)
{
	var vol;
	if( EffectVar(0, pObj, iNr) >= EffectVar(1, pObj, iNr) + EffectVar(3, pObj, iNr) )
		EffectVar(0, pObj, iNr) -= EffectVar(3, pObj, iNr);
	
	vol = EffectVar(0, pObj, iNr);
	SoundLevel(EffectVar(2, pObj, iNr), vol);
	
	if(EffectVar(0, pObj, iNr) == EffectVar(1, pObj, iNr))
		return -1;
	
	return 1;
}
