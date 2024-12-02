class Solution(object):
    def isPrefixOfWord(self, sentence, searchWord):
        ws=sentence.split()
        for i,w in enumerate(ws):
            if w.startswith(searchWord):
                return i+1
            
        return -1
        """
        :type sentence: str
        :type searchWord: str
        :rtype: int
        """
        