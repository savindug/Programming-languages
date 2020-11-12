:- initialization(main).

fizzbuzz(No) :- No mod 3 =:= 0, No mod 5 =:= 0, write('FizzBuzz').
fizzbuzz(No) :- No mod 3 =:= 0, write('Fizz').
fizzbuzz(No) :- No mod 5 =:= 0, write('Buzz').
fizzbuzz(No) :- write(No).

main :-
    forall(
        between(1, 100, X), 
        (fizzbuzz(X),nl)
        ).