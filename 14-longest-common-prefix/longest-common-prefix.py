class Solution(object):
    def longestCommonPrefix(self, strs):
        l=strs
        l.sort()
        c=l[0]
        l=l[1:]
        pre=""
        i=0
        while i in range(len(c)):
            firstchar=c[i]
            F=0
            for j in range(len(l)):
                var=l[j]
                firstcharother=var[i]
                if(firstchar!=firstcharother):
                    F=1
                    break
            if F==0:
                pre=pre+firstchar
            else:
                break
            i=i+1
        return pre
        