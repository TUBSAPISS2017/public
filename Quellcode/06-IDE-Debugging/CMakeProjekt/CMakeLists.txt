PROJECT (BeispielProjekt)
SET (Sources main.cpp eins.cpp zwei.cpp)
SET (Headers eins.h zwei.h)

ADD_EXECUTABLE(Beispiel ${Sources} ${Headers})
TARGET_LINK_LIBRARIES(Beispiel)