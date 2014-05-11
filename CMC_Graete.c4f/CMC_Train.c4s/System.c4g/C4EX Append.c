#strict 2

#appendto C4EX

protected func Hit()
{
	if((GetY()+GetDefHeight(C4EX)/2) >= 530) { Trigger(); }
	return 1;
}
