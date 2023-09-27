local function addTableValues(x, y)
	return x.num + y.num
end

local metatable = {
	__add = addTableValues,
	__sub = function(x, y) -- this is an anonyamus function here
		return x.num - y.num
	end,
	-- __add means +
	-- __mul
	-- __div
	-- __mod
	-- __pow
	-- __len
	-- __eq
	-- __lt lessss than
	-- __gt
	-- __ge
}

local t1 = { num = 50 }
setmetatable(t1, metatable) -- whenever t1 is involved
local t2 = { num = 10 }
local ans = t1 + t2
print(ans)
-- error as lua doesn't know how to use + with tables
