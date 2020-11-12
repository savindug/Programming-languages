      
        program fizzbuzz
            
            implicit none
            
            integer :: counter

            do counter=1,100
            
                if ((mod(REAL(counter), 3.0) == 0) .and. (mod(REAL(counter), 5.0) == 0)) then
                    write(*,'(A)',advance='no') 'fizzbuzz'
                else if (mod(REAL(counter), 3.0) == 0) then
                    write(*,'(A)',advance='no') 'fizz'
                else if (mod(REAL(counter), 5.0) == 0) then
                    write(*,'(A)',advance='no') 'buzz'
                else
                    write(*,'(I0)',advance='no') counter
                end if
                    print*   
            end do

        end program fizzbuzz
      
