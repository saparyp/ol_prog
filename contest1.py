import sys

input_data = sys.stdin.read().split()

if not input_data:
    sys.exit()

t = int(input_data[0])
results = []
cur_index = 1

for _ in range(t):
    nums = list(map(int, input_data[cur_index : cur_index + 7]))
    cur_index += 7
    total_sum = sum(nums) 
    max_val = max(nums)
    answer = 2 * max_val - total_sum #меняем знак оставшихся чисел вычитанием полной суммы
    results.append(str(answer))

print("\n".join(results))
