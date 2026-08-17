CXX = g++
CXXFLAGS = -g -std=c++11 -Wall -Wextra
TARGET = wayfarer
SOURCES = main.cpp \
          BiomeFactory.cpp \
          BroomStick.cpp \
          CheapestRoute.cpp \
          DesertFactory.cpp \
          DesertNPC.cpp \
          DesertObstacle.cpp \
          DesertTerrain.cpp \
          Dragon.cpp \
          DragonDecorator.cpp \
          ElfsDecorator.cpp \
          FastestRoute.cpp \
          Foot.cpp \
          ForestFactory.cpp \
          ForestNPC.cpp \
          ForestObstacle.cpp \
          ForestTerrain.cpp \
          GameManager.cpp \
          Horse.cpp \
          Location.cpp \
          MapElementDecorator.cpp \
          MountainDecorator.cpp \
          NPC.cpp \
          Obstacle.cpp \
          OceanFactory.cpp \
          OceanNPC.cpp \
          OceanObstacle.cpp \
          OceanTerrain.cpp \
          RainDecorator.cpp \
          Region.cpp \
          RouteStrategy.cpp \
          ScenicRoute.cpp \
          ShortestRoute.cpp \
          Terrain.cpp \
          Traveller.cpp \
          Trip.cpp \
          Wagon.cpp
OBJECTS = $(SOURCES:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(TARGET)

run: $(TARGET)
	./$(TARGET)


