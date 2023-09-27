-- Tables in lua

local x, y, z = 10, 20, 30

local sahil = { 10, 15, 20 }
print(sahil[0]) --> nil
print(sahil[1]) --> 1 indexed not 0

local arr = { 10, true, "Hello, world", 2.4 }
print(#arr) --> length of an array
-- table.sort(arr) --> gives error
print(arr[1])

for i = 1, #arr do
	print(arr[i])
end
table.insert(sahil, 2, "lol")
table.remove(arr, 3)
print(table.concat(sahil, " "))
