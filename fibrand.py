def fibrand(seed1, seed2, times):
	timecount = 1
	a = seed1
	b = seed2
	while timecount < times:
		a, b = b, a+b
	return b
