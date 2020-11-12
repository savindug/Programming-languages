1 to: 100 do: [
    :num |
    
    fizz := false.
    buzz := false.

    num \\ 3 == 0 ifTrue: [
         fizz := true
    ].

    num \\ 5 == 0 ifTrue: [
       buzz := true
    ].

    (num \\ 3 ~= 0) & (num \\ 5 ~= 0) ifTrue: [
        num printNl
    ].
    

    
    (buzz == true) & (fizz == true) ifTrue: [
        Transcript show: 'fizzbuzz' displayString; cr
    ].
    fizz == true ifTrue: [
        Transcript show: 'fizz' displayString; cr
    ].
    buzz == true ifTrue: [
        Transcript show: 'buzz' displayString; cr
    ].

] 