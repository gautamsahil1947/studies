--> corouteins

local routein_1 = coroutine.create(function()
	for i = 1, 10 do
		print("(Routein 1) " .. i)
		if i == 5 then
			coroutine.yield()
		end
	end
end)

local routein_func = function()
	for i = 1, 10 do
		print("(Routein 2) " .. i)
	end
end

local routein_2 = coroutine.create(routein_func)
coroutine.resume(routein_1)
-- print(coroutine.status(routein_1))
coroutine.resume(routein_2)

if coroutine.status(routein_1) == "suspended" then
	coroutine.resume(routein_1)
end
print(coroutine.status(routein_1))
