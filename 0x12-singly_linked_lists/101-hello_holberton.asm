global    main
          extern    printf

main:                                       ; This is called by the C library startup code
          mov       edi, format
	  xor	    eax, eax
          call      printf
	  mov       eax, 0
          ret
format:
          db        `Hello, Holberton\n`, 0
