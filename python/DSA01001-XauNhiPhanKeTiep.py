
def Next(s):
    s = s[::-1]
    result = ''
    carry = 1
    for i in range(len(s)):
        if s[i] == '1' and carry == 1:
            result += '0'
        elif s[i] == '0' and carry == 1:
            result += '1'
            carry = 0
        else:
            result += s[i]
    return result[::-1]
def main():
    t = int(input())
    for _ in range(t):
        s = input()
        print(Next(s),end='\n')    

main()