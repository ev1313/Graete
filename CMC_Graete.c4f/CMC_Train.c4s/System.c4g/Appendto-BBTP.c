#strict 2

#appendto BBTP

protected func Hit()
{
	if((GetY()+GetDefHeight(BBTP)/2) >= 530) { Detonate(); }
	_inherited(...);
}
