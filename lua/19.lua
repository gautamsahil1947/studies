local function sum(...) -- infininte number of inputs
	print(...)
	print()
	local sums = 0
	-- for key, value in pairs({ ... }) do
	for _, value in pairs({ ... }) do
		sums = sums + value
		print(value)
	end
	return sums
end

print(sum(100, 200, 300, 400))

-- while looping inside the arguments, key is the index
-- and the value is the value at that index. indices start at 1
--
-- we can make the key _ if we are not using it
