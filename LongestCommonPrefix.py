class LongestCommonPrefix:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        strs.sort(key = lambda x:len(x))
        prefix = strs[0]
        for i in range(len(strs[0]),0,-1):
            if all([prefix[:i] == strs[j][:i] for j in range(1,len(strs))]):
                return(prefix[:i])
        return ""
