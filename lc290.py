class Solution:
    def wordPattern(self, pattern: str, str: str) -> bool:
        return (list(map(str.split(" ").index,str.split(" ")))==list(map(pattern.index,pattern)))