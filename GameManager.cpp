#include "GameManager.h"
#include <iostream>

GameManager::GameManager() : trip(nullptr), traveller(nullptr), worldRoot(nullptr), biomeFactory(nullptr)
{}

GameManager::~GameManager()
{
    if(trip != nullptr)
    {
        delete trip;
        trip = nullptr;
    }
    if(traveller != nullptr)
    {
        delete traveller;
        traveller = nullptr;
    }
    if(worldRoot != nullptr)
    {
        delete worldRoot;
        worldRoot = nullptr;
    }
    if(biomeFactory != nullptr)
    {
        delete biomeFactory;
        biomeFactory = nullptr;
    }
}

void GameManager::setBiome(BiomeFactory* f)
{
    if(biomeFactory != nullptr)
    {
        delete biomeFactory;
    }
    biomeFactory = f;
}

void GameManager::run() {
    std::cout << "Wayfarer Engine Initializing..." << std::endl;
    
    if (!trip || !traveller || !worldRoot || !biomeFactory) {
        std::cout << "Error: GameManager cannot run." << std::endl;
        return;
    }
    std::cout << "Starting the main game." << std::endl;
    
}