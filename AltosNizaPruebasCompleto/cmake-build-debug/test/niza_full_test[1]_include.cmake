if(EXISTS "D:/jmlop/Desktop/Universidad/Tercer Semestre/OOP/AltosNizaPruebasCompleto/cmake-build-debug/test/niza_full_test[1]_tests.cmake")
  include("D:/jmlop/Desktop/Universidad/Tercer Semestre/OOP/AltosNizaPruebasCompleto/cmake-build-debug/test/niza_full_test[1]_tests.cmake")
else()
  add_test(niza_full_test_NOT_BUILT niza_full_test_NOT_BUILT)
endif()