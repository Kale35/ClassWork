;Define a variable
(define x 4)

;Define a function
(define (square x) (* x x))

;if statement
(define (abs x)
    (if(< x 0)
        (- x)   
        x
         ))

;lists 
(list 4 6 3)

;length of list
(length (list 4 6 5))

;sort(least to greatest)
(sort < (list 4 3 2))

;define list(Enter 'my-list' to display list)
(define my-list (list 1 2 3 4 5))

;car function(displays first value)
(car my-list)

;cdr function(displays everything but first value)
(cdr my-list)

;sum function(gets sum of values in list)
(sum (my-list))