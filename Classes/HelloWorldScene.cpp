#include "HelloWorldScene.h"
#include "SimpleAudioEngine.h"

USING_NS_CC;

Scene* HelloWorld::createScene()
{
    // 'scene' is an autorelease object
	auto scene = Scene::create();
	//scene->setRotation3D(Vec3(60, 0, 0));
    
    // 'layer' is an autorelease object
    auto layer = HelloWorld::create();


	/*auto s = Director::getInstance()->getWinSize();
	auto camera = Camera::createPerspective(60, (GLfloat)s.width / s.height, 1, 1000);

	// set parameters for camera
	camera->setPosition3D(Vec3(0, 100, 100));
	camera->lookAt(Vec3(0, 0, 0), Vec3(0, 1, 0));

	scene->addChild(camera);*/ //add camera to the scene

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

void drawChessPiece(Sprite3D *item, Vec3 position, std::string filetex, float scale)
{
	item->setScale(scale);
	item->setTexture(filetex);
	item->setPosition3D(position);
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
    auto visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

    /////////////////////////////
    // 2. add a menu item with "X" image, which is clicked to quit the program
    //    you may modify it.

    // add a "close" icon to exit the progress. it's an autorelease object
    auto closeItem = MenuItemImage::create(
                                           "CloseNormal.png",
                                           "CloseSelected.png",
                                           CC_CALLBACK_1(HelloWorld::menuCloseCallback, this));
    
    closeItem->setPosition(Vec2(origin.x + visibleSize.width - closeItem->getContentSize().width/2 ,
                                origin.y + closeItem->getContentSize().height/2));

    // create menu, it's an autorelease object
    auto menu = Menu::create(closeItem, NULL);
    menu->setPosition(Vec2::ZERO);
    this->addChild(menu, 1);

    /////////////////////////////
    // 3. add your codes below...

    // add a label shows "Hello World"
    // create and initialize a label
    
    /*auto label = Label::createWithTTF("Hello World", "fonts/Marker Felt.ttf", 24);
    
    // position the label on the center of the screen
    label->setPosition(Vec2(origin.x + visibleSize.width/2,
                            origin.y + visibleSize.height - label->getContentSize().height));

    // add the label as a child to this layer
    this->addChild(label, 1);*/

	float level1 = 25.;
	float bigDiffY = 50.;
	float smallDiffY = 25.;
	float leftFrontX = 190.;
	float leftBackX = 165.;
	float leftFrontZ = 0.;
	float leftBackZ = 25.;
	float sizeX = 21.;
	float sizeZ = 24.;
	float bigDiffX = 30.;

	float backSquareX = 12.5;
	float backSquareZ = 12.;

	auto sprite1 = Sprite3D::create("out.c3t");
	//auto sprite2 = Sprite3D::create("out.c3t");
	auto sprite3 = Sprite3D::create("out.c3t");
	auto sprite4 = Sprite3D::create("out.c3t");
	auto sprite5 = Sprite3D::create("out.c3t");
	auto sprite6 = Sprite3D::create("out.c3t");
	auto sprite7 = Sprite3D::create("out.c3t");
	auto sprite8 = Sprite3D::create("out.c3t");
	auto sprite9 = Sprite3D::create("out.c3t");
	auto sprite10 = Sprite3D::create("out.c3t");
	auto sprite11 = Sprite3D::create("out.c3t");
	auto sprite12 = Sprite3D::create("out.c3t");
	auto sprite13 = Sprite3D::create("out.c3t");
	auto sprite14 = Sprite3D::create("out.c3t");
	auto sprite15 = Sprite3D::create("King.obj");
	auto sprite16 = Sprite3D::create("Bishop.obj");
	auto sprite17 = Sprite3D::create("Queen.obj");
	auto sprite18 = Sprite3D::create("Bishop.obj");
	auto sprite19 = Sprite3D::create("pawn.obj");
	/*auto sprite20 = Sprite3D::create("Pawn.obj");
	auto sprite21 = Sprite3D::create("Pawn.obj");
	auto sprite22 = Sprite3D::create("Pawn.obj");*/

	sprite1->setScale(0.05); 
	//sprite2->setScale(0.05);
	sprite3->setScale(0.05);
	sprite4->setScale(0.05);
	sprite5->setScale(0.05);
	sprite6->setScale(0.05);
	sprite7->setScale(0.05);
	sprite8->setScale(0.05);
	sprite9->setScale(0.05);
	sprite10->setScale(0.05);
	sprite11->setScale(0.05);
	sprite12->setScale(0.05);
	sprite13->setScale(0.05);
	sprite14->setScale(0.05);
	drawChessPiece(sprite15, Vec3(leftFrontX - 12.5, level1, -leftFrontZ - 12.), "white_cararra.jpg", 0.5);
	drawChessPiece(sprite16, Vec3(leftFrontX, level1, -leftFrontZ), "white_cararra.jpg", 0.5);
	drawChessPiece(sprite17, Vec3(leftBackX, level1, -leftBackZ), "white_cararra.jpg", 0.5);
	drawChessPiece(sprite18, Vec3(leftBackX - 12.5, level1, -leftBackZ - 12.), "white_cararra.jpg", 0.5);
	drawChessPiece(sprite19, Vec3(leftBackX + 10.5, level1, -leftBackZ - 12.), "white_cararra.jpg", 3);
	//drawChessPiece(sprite20, Vec3(leftBackX - 12.5, level1, -leftBackZ - 12.), "white_cararra.jpg", 0.5);
	//drawChessPiece(sprite21, Vec3(leftBackX - 12.5, level1, -leftBackZ - 12.), "white_cararra.jpg", 0.5);
	//drawChessPiece(sprite22, Vec3(leftBackX - 12.5, level1, -leftBackZ - 12.), "white_cararra.jpg", 0.5);

	sprite1->setPosition3D(Vec3(leftFrontX, level1, -leftFrontZ));
	sprite6->setPosition3D(Vec3(leftBackX + sizeX, level1, -leftBackZ - sizeZ));
	sprite7->setPosition3D(Vec3(leftBackX, level1, -leftBackZ));
	sprite8->setPosition3D(Vec3(leftFrontX + sizeX, level1, -leftFrontZ - sizeZ));

	//sprite2->setPosition3D(Vec3(leftFrontX, level1 + smallDiffY, 24.));

	sprite3->setPosition3D(Vec3(leftFrontX + bigDiffX, level1 + bigDiffY, -leftFrontZ));
	sprite9->setPosition3D(Vec3(leftBackX + bigDiffX + sizeX, level1 + bigDiffY, -leftBackZ - sizeZ));
	sprite10->setPosition3D(Vec3(leftBackX + bigDiffX, level1 + bigDiffY, -leftBackZ));
	sprite11->setPosition3D(Vec3(leftFrontX + bigDiffX + sizeX, level1 + bigDiffY, -leftFrontZ - sizeZ));

	sprite4->setPosition3D(Vec3(leftFrontX + bigDiffX*2, level1 + bigDiffY*2, -leftFrontZ));
	sprite12->setPosition3D(Vec3(leftBackX + bigDiffX*2 + sizeX, level1 + bigDiffY*2, -leftBackZ - sizeZ));
	sprite13->setPosition3D(Vec3(leftBackX + bigDiffX*2, level1 + bigDiffY*2, -leftBackZ));
	sprite14->setPosition3D(Vec3(leftFrontX + bigDiffX*2 + sizeX, level1 + bigDiffY*2, -leftFrontZ - sizeZ));

	sprite5->setPosition3D(Vec3(175 + 140, level1 + bigDiffY*2 + smallDiffY, 0));

	this->addChild(sprite1, 1); //adds sprite to scene, z-index: 1
	//this->addChild(sprite2, 1); 
	this->addChild(sprite3, 1); 
	this->addChild(sprite4, 1); 
	this->addChild(sprite5, 1);
	this->addChild(sprite6, 1);
	this->addChild(sprite7, 1);
	this->addChild(sprite8, 1);
	this->addChild(sprite9, 1);
	this->addChild(sprite10, 1);
	this->addChild(sprite11, 1);
	this->addChild(sprite12, 1);
	this->addChild(sprite13, 1);
	this->addChild(sprite14, 1);
	this->addChild(sprite15, 1);
	this->addChild(sprite16, 1);
	this->addChild(sprite17, 1);
	this->addChild(sprite18, 1);
	this->addChild(sprite19, 1);
 
	/*cocos2d::Vec3 position[8];
	AABB size = sprite1->getAABB();
	size.getCorners(position);*/

	/*auto sprite = Sprite::create("HelloWorld.png");

    // position the sprite on the center of the screen
    sprite->setPosition(Vec2(visibleSize.width/2 + origin.x, visibleSize.height/2 + origin.y));

    // add the sprite as a child to this layer
    this->addChild(sprite, 0);*/
    
    return true;
}


void HelloWorld::menuCloseCallback(Ref* pSender)
{
    //Close the cocos2d-x game scene and quit the application
    Director::getInstance()->end();

    #if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
    
    /*To navigate back to native iOS screen(if present) without quitting the application  ,do not use Director::getInstance()->end() and exit(0) as given above,instead trigger a custom event created in RootViewController.mm as below*/
    
    //EventCustom customEndEvent("game_scene_close_event");
    //_eventDispatcher->dispatchEvent(&customEndEvent);
    
    
}
