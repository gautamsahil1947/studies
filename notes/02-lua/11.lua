-- for-loop
for i = 1, 10 do
	-- create a variable i, and set it to 1
	-- to till 10 inclusively
	print(i)
end

print("-----------------")

for i = 0, 10, 2 do
	-- this time keep a gap of 2
	-- between two iterations
	print(i)
end

for i = 10, 1, -1 do
	-- it compares the values of i and the next var
	-- if they are not out of order, therefore if
	-- there is no -1, then it will show error
	print(i)
end

print("------------------------")
local start_val, end_val, step_val = 1, 10, 1
for i = start_val, end_val, step_val do
	print(i)
end

local arr = { 2, 3, 4, 5, 6 }
for i = 1, #arr do
	print(arr[i])
	-- this shows that arrays are not
	-- 0 indexed in lua
end
