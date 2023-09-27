_G.mmath = {}

function mmath.add(x, y)
	-- this has to be a global function
	-- otherwise it cannot be used outside this file
	return x + y
end

function mmath.power(a, b)
	return a ^ b
end

return mmath
