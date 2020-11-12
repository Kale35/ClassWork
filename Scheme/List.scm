;Pairs list
(cons '1 '2)
(cons '1 '(2 3 4))
(cons '(1 2 3) '(4 5 6))

;Returns first member of list or dottted pair
(car '(123 456 789))
(car '(first second third))
(car '(this (is no) more difficult))

;Returns list without first item or second member of dotted pair
(cdr '(1 2 3))
(cdr '(The Holiday is coming))
(cdr (cdr '(a b c d e f)))

;returns a list constructed from arguments
(list '(123 456 789))
(list 'a 'b 'c 'd 'e)
(list )

;Quiz will have mass expression to convert to scheme