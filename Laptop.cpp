#include<bits/stdc++.h>
using namespace std;

struct ProcessorType{
    string processor;
    string processorGen;
};

struct AboutStorage{
    string RAM;
    string SSD;
};

struct ScreenSize{
    string Length;
    string width;
};
struct computer{
    string Brand;
    string type;
    ProcessorType  Processor;
    AboutStorage storage;
    string GraphicProcessor;
    ScreenSize size;
    string OperatingSys;
    string weight;
    string touchScreen;
    string processorBrand;
    string storageType;
    string discount ;
    float rating ; 
    string Price;
    
};
 
void computerFeature(computer device)
{
    cout<<"Brand : "<< device.Brand<<endl;
    cout<<"Type : "<<device.type <<endl;
    cout<<"Processor : "<<device.Processor.processor <<endl;
    cout<<"Processor Gen : "<<device.Processor.processorGen <<endl;
    cout<<"RAM Capcity: "<< device.storage.RAM<<endl;
    cout<<"SSD Capcity: "<<device.storage.SSD <<endl;
    cout<<"Graphic Processor : "<< device.GraphicProcessor<<endl;
    cout<<"Length : "<< device.size.Length<<endl;
    cout<<"Width : "<< device.size.width<<endl;
    cout<<"Operating System : "<<device.OperatingSys <<endl;
    cout<<"Weigth : "<<device.weight<<endl;
    cout<<"Is Touch Screen : "<<device.touchScreen <<endl;
    cout<<"Processor Brand : "<< device.processorBrand <<endl;
    cout<<"Storage Type : "<<device.storageType <<endl;
    cout<<"Discount : "<< device.discount<<endl;
    cout<<"Price : "<<device.Price <<endl;
    cout<<"Rating : "<<device.rating <<endl;


}

int main()
{
    computer device;
    device.Brand="Apple";
    device.type="Gaming Laptop";
    device.Processor.processor="Core i7";
    device.Processor.processorGen="14th Gen";
    device.storage.RAM="64 GB";
    device.storage.SSD="2 TB";
    device.GraphicProcessor="UHD Graphics";
    device.size.Length="15.6 inches";
    device.size.width="10.5 inches";
    device.OperatingSys="Mac Os";
    device.weight="1.5kg";
    device.touchScreen="No";
    device.processorBrand="Apple";
    device.storageType="eMMC";
    device.discount="10%";
    device.Price="$1250000 USD";
    device.rating=4.5;
    
    computerFeature(device);
}