N=int(input("請輸入N:"))
def func(n):
  if n==1:return 1 #終止條件
  return n * func(n-1) #函式呼叫函示
ans=func(N)
print(ans)