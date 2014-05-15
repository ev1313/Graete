/*-- HZCK Appendto --*/

#strict 2

#appendto HZCK

protected func Hit()
{
	if((GetY()+GetDefHeight(HZCK)/2) >= 530) { FakeDeath(this); }
	
	_inherited(...);
}
