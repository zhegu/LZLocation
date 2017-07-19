//
//  LZLocation.h
//  mts-iphone
//
//  Created by lizhe on 16/8/12.
//  Copyright © 2016年 中国电信. All rights reserved.
//

//  Topevery.GPS 转换
//  火星坐标系转换扩展
/*
 从 CLLocationManager 取出来的经纬度放到 mapView 上显示，是错误的!
 从 CLLocationManager 取出来的经纬度去 Google Maps API 做逆地址解析，当然是错的！
 从 MKMapView 取出来的经纬度去 Google Maps API 做逆地址解析终于对了。去百度地图API做逆地址解析，依旧是错的！
 从上面两处取的经纬度放到百度地图上显示都是错的！错的！的！
 
 分为 地球坐标，火星坐标（iOS mapView 高德 ， 国内google ,搜搜、阿里云 都是火星坐标），百度坐标(百度地图数据主要都是四维图新提供的)
 
 火星坐标: MKMapView
 地球坐标: CLLocationManager
 
 当用到CLLocationManager 得到的数据转化为火星坐标, MKMapView不用处理
 
 
 API                坐标系
 百度地图API         百度坐标
 腾讯搜搜地图API      火星坐标
 搜狐搜狗地图API      搜狗坐标
 阿里云地图API       火星坐标
 图吧MapBar地图API   图吧坐标
 高德MapABC地图API   火星坐标
 灵图51ditu地图API   火星坐标
 
 */
#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>


@interface LZLocation : NSObject
//从地图坐标转化到火星坐标
+ (CLLocationCoordinate2D)locationMarsFromEarth:(CLLocationCoordinate2D)coordinate;

//从火星坐标转化到百度坐标
+ (CLLocationCoordinate2D)locationBaiduFromMars:(CLLocationCoordinate2D)coordinate;

//从百度坐标到火星坐标
+ (CLLocationCoordinate2D)locationMarsFromBaidu:(CLLocationCoordinate2D)coordinate;

//从火星坐标到地图坐标
+ (CLLocationCoordinate2D)locationEarthFromMars:(CLLocationCoordinate2D)coordinate;

//从百度坐标到地图坐标
+ (CLLocationCoordinate2D)locationEarthFromBaidu:(CLLocationCoordinate2D)coordinate;



@end
