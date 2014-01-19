#include "SplashScene.h"

USING_NS_CC;

Scene* SplashScene::createScene()
{
    auto scene = Scene::create();
    auto layer = SplashScene::create();
    scene->addChild(layer);

    return scene;
}

bool SplashScene::init()
{
    if ( !Layer::init() )
    {
        return false;
    }
    Size visibleSize = Director::getInstance()->getVisibleSize();
    
    // 白背景
    auto whiteLayer = LayerColor::create(Color4B::WHITE);
    this->addChild(whiteLayer, 0);
    // ロゴ
    auto logo = Sprite::create("image/title/hapisupu_landscape.png");
    logo->setPosition(Point(visibleSize.width/2, visibleSize.height/2));
    this->addChild(logo, 0);
    
    return true;
}
