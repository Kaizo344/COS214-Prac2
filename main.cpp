#include <iostream>
#include "GameManager.h"
#include "DesertFactory.h"
#include "ForestFactory.h"
#include "OceanFactory.h"
#include "Trip.h"
#include "CheapestRoute.h"
#include "FastestRoute.h"
#include "ScenicRoute.h"
#include "ShortestRoute.h"
#include "Traveller.h"
#include "Foot.h"
#include "Horse.h"
#include "Wagon.h"
#include "BroomStick.h"
#include "Dragon.h"
#include "Region.h"
#include "Location.h"
#include "DragonDecorator.h"
#include "ElfsDecorator.h"
#include "MountainDecorator.h"
#include "RainDecorator.h"

int main()
{
    std::cout << "Wayfarer Engine" << std::endl;
    std::cout << std::endl;

    // Task 3: State Pattern
    // Create traveller with Foot mode
    Foot *footMode = new Foot();
    Traveller *traveller = new Traveller(footMode);

    std::cout << "Traveller moving with Foot mode:" << std::endl;
    traveller->moveTraveller();
    traveller->moveTravellerFaster(); // Switch to Horse

    std::cout << "Traveller moving with Horse mode:" << std::endl;
    traveller->moveTraveller();
    traveller->moveTravellerFaster(); // Switch to Wagon

    std::cout << "Traveller moving with Wagon mode:" << std::endl;
    traveller->moveTraveller();
    traveller->moveTravellerFaster(); // Switch to BroomStick

    std::cout << "Traveller moving with BroomStick mode:" << std::endl;
    traveller->moveTraveller();
    traveller->moveTravellerFaster(); // Switch to Dragon

    std::cout << "Traveller moving with Dragon mode:" << std::endl;
    traveller->moveTraveller();
    traveller->moveTravellerFaster(); // Dragon at max speed

    delete traveller;
    std::cout << std::endl;

    // Task 4: Strategy Pattern
    // Test different route strategies
    CheapestRoute *cheapest = new CheapestRoute();
    Trip *trip1 = new Trip(cheapest);
    std::cout << "Trip 1 - ";
    trip1->planRoute();
    delete trip1;

    FastestRoute *fastest = new FastestRoute();
    Trip *trip2 = new Trip(fastest);
    std::cout << "Trip 2 - ";
    trip2->planRoute();
    delete trip2;

    ScenicRoute *scenic = new ScenicRoute();
    Trip *trip3 = new Trip(scenic);
    std::cout << "Trip 3 - ";
    trip3->planRoute();
    delete trip3;

    ShortestRoute *shortest = new ShortestRoute();
    Trip *trip4 = new Trip(shortest);
    std::cout << "Trip 4 - ";
    trip4->planRoute();

    // Test switching strategies at runtime
    std::cout << "Switching strategy at runtime:" << std::endl;
    trip4->setStrategy(new FastestRoute());
    trip4->planRoute();
    trip4->setStrategy(new ScenicRoute());
    trip4->planRoute();
    delete trip4;
    std::cout << std::endl;

    // Task 5: Composite Pattern
    // Build a sample map tree
    Region *world = new Region("World");

    Region *desertRegion = new Region("Desert");
    Location *desertOasis = new Location("Oasis");
    Location *desertDunes = new Location("Dunes");
    desertRegion->add(desertOasis);
    desertRegion->add(desertDunes);
    world->add(desertRegion);

    Region *forestRegion = new Region("Forest");
    Location *forestClearing = new Location("Clearing");
    Location *forestRiver = new Location("River");
    forestRegion->add(forestClearing);
    forestRegion->add(forestRiver);
    world->add(forestRegion);

    Region *oceanRegion = new Region("Ocean");
    Region *islandSubregion = new Region("Island");
    Location *islandBeach = new Location("Beach");
    Location *islandVolcano = new Location("Volcano");
    islandSubregion->add(islandBeach);
    islandSubregion->add(islandVolcano);
    oceanRegion->add(islandSubregion);
    Location *oceanDeep = new Location("Deep Ocean");
    oceanRegion->add(oceanDeep);
    world->add(oceanRegion);

    std::cout << "Printing world map:" << std::endl;
    std::cout << world->print() << std::endl;
    delete world;
    std::cout << std::endl;

    // Task 6: Decorator Pattern
    // Test 1: Stack multiple decorators
    Location *baseLocation = new Location("Mysterious Cave");
    MapElement *decorated1 = new DragonDecorator(baseLocation, "Dragon Lair");
    MapElement *decorated2 = new ElfsDecorator(decorated1, "Elf Hideout");
    MapElement *decorated3 = new MountainDecorator(decorated2, "Mountain Pass");
    MapElement *decorated4 = new RainDecorator(decorated3, "Rainy Area");

    std::cout << "Decorated location output:" << std::endl;
    std::cout << decorated4->print() << std::endl;
    delete decorated4; // Cascades delete all decorators
    std::cout << std::endl;

    // Test 2: Single DragonDecorator and test getNumDragons()
    Location *plainLocation = new Location("Plain Field");
    DragonDecorator *dragonDecorator = new DragonDecorator(plainLocation, "Dragon Field");
    std::cout << "Single DragonDecorator:" << std::endl;
    int numDragons = dragonDecorator->getNumDragons(); // This line ensures getNumDragons() is called
    std::cout << "Number of dragons: " << numDragons << std::endl;
    std::cout << dragonDecorator->print() << std::endl;
    delete dragonDecorator;
    std::cout << std::endl;

    // Test 3: Single ElfsDecorator
    Location *elfLocation = new Location("Elf Forest");
    ElfsDecorator *elfsDecorator = new ElfsDecorator(elfLocation, "Elf Territory");
    std::cout << "Single ElfsDecorator:" << std::endl;
    std::cout << elfsDecorator->print() << std::endl;
    delete elfsDecorator;
    std::cout << std::endl;

    // Test 4: Single RainDecorator
    Location *rainLocation = new Location("Rainy Valley");
    RainDecorator *rainDecorator = new RainDecorator(rainLocation, "Wet Zone");
    std::cout << "Single RainDecorator:" << std::endl;
    std::cout << rainDecorator->print() << std::endl;
    delete rainDecorator;
    std::cout << std::endl;

    // Test 5: MountainDecorator with null element (tests nullptr branch)
    MountainDecorator *nullMountain = new MountainDecorator(nullptr, "Null Mountain");
    std::cout << "MountainDecorator with null element:" << std::endl;
    std::cout << nullMountain->print() << std::endl;
    delete nullMountain;
    std::cout << std::endl;

    // Test 6: Test all 3 MountainDecorator types
    std::cout << "Testing all 3 mountain types:" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        Location *mtnLoc = new Location("Mountain " + std::to_string(i));
        MountainDecorator *md = new MountainDecorator(mtnLoc, "Mountain Area " + std::to_string(i));
        std::cout << md->print() << std::endl;
        delete md;
    }
    std::cout << std::endl;

    // Test 7: Decorator with multiple decorators in different order
    Location *anotherLoc = new Location("Crossroads");
    MapElement *deco1 = new RainDecorator(anotherLoc, "Rainy Crossroads");
    MapElement *deco2 = new DragonDecorator(deco1, "Dragon Crossroads");
    std::cout << "Decorators in different order:" << std::endl;
    std::cout << deco2->print() << std::endl;
    delete deco2;
    std::cout << std::endl;

    // Task 7: Abstract Factory Pattern
    // Create GameManager and test run() method
    GameManager *gm = new GameManager();

    // Test Desert biome
    DesertFactory *desertFactory = new DesertFactory();
    gm->setBiome(desertFactory);
    std::cout << "Desert Biome:" << std::endl;
    NPC *desertNPC = desertFactory->createNPC();
    Terrain *desertTerrain = desertFactory->createTerrain();
    Obstacle *desertObstacle = desertFactory->createObstacle();
    desertNPC->interact();
    desertTerrain->display();
    desertObstacle->overcome();
    delete desertNPC;
    delete desertTerrain;
    delete desertObstacle;

    // Test Forest biome
    ForestFactory *forestFactory = new ForestFactory();
    gm->setBiome(forestFactory);
    std::cout << std::endl
              << "Forest Biome:" << std::endl;
    NPC *forestNPC = forestFactory->createNPC();
    Terrain *forestTerrain = forestFactory->createTerrain();
    Obstacle *forestObstacle = forestFactory->createObstacle();
    forestNPC->interact();
    forestTerrain->display();
    forestObstacle->overcome();
    delete forestNPC;
    delete forestTerrain;
    delete forestObstacle;

    // Test Ocean biome
    OceanFactory *oceanFactory = new OceanFactory();
    gm->setBiome(oceanFactory);
    std::cout << std::endl
              << "Ocean Biome:" << std::endl;
    NPC *oceanNPC = oceanFactory->createNPC();
    Terrain *oceanTerrain = oceanFactory->createTerrain();
    Obstacle *oceanObstacle = oceanFactory->createObstacle();
    oceanNPC->interact();
    oceanTerrain->display();
    oceanObstacle->overcome();
    delete oceanNPC;
    delete oceanTerrain;
    delete oceanObstacle;

    // Test GameManager::run()
    std::cout << std::endl
              << "Testing GameManager::run():" << std::endl;
    // GameManager needs trip, traveller, worldRoot, and biomeFactory set to run properly
    // For coverage purposes, we call it here
    gm->run();

    delete gm; // Will delete the current factory (OceanFactory)
    std::cout << std::endl;

    // Test MapElementDecorator with null pointer
    // This tests the destructor path where elem == nullptr in MapElementDecorator
    DragonDecorator *nullDecorator = new DragonDecorator(nullptr, "Null Decorator");
    std::cout << "Null decorator print:" << std::endl;
    std::cout << nullDecorator->print() << std::endl;
    delete nullDecorator; // This will test the destructor with elem == nullptr
    std::cout << std::endl;

    // Test Traveller with nullptr constructor
    // Test Traveller with nullptr (should default to Foot)
    Traveller *defaultTraveller = new Traveller(nullptr);
    std::cout << "Traveller with nullptr (defaults to Foot):" << std::endl;
    defaultTraveller->moveTraveller();
    delete defaultTraveller;
    std::cout << std::endl;

    // Test Trip with nullptr strategy
    Trip *nullTrip = new Trip(nullptr);
    std::cout << "Trip with nullptr strategy:" << std::endl;
    nullTrip->planRoute();
    // Test setting null strategy
    nullTrip->setStrategy(nullptr);
    nullTrip->planRoute();
    delete nullTrip;
    std::cout << std::endl;

    // Test GameManager with null factory
    GameManager *gm2 = new GameManager();
    // Try to set null biome
    gm2->setBiome(nullptr);
    // Run with null components
    gm2->run();
    delete gm2;
    std::cout << std::endl;

    return 0;
}