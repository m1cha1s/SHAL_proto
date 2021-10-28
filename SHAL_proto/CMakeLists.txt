# CMakeList.txt: projekt CMake dla elementu SHAL_proto, dołącz źródło i zdefiniuj
# tutaj logikę specyficzną dla projektu.
#
cmake_minimum_required (VERSION 3.8)

# Dodaj źródło do pliku wykonywalnego tego projektu.
add_executable (SHAL_proto "SHAL_proto.cpp" "SHAL_proto.h" "SHAL/SHAL_mmu/SHAL_mmu.cpp" "SHAL/SHAL_mmu/SHAL_mmu.h")

# TODO: Dodaj testy i zainstaluj elementy docelowe w razie potrzeby.

add_subdirectory("SHAL")