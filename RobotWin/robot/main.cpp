#include <QCoreApplication>

#include "namespaces.h"

//class X
//{
//public:
//    int I;
//    X(int i){I = i;}
//    ~X(){}
//};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

//    Common::Matrix4<float> matrix4;
//    matrix4.set(0);
//    matrix4.get(1, 1);
//    matrix4 *= (new Common::Space3d::AxisAngle(0, 0, 0, 0))->getMatrix();
//    matrix4 *= Common::Space3d::Helpers::getRotationMatrix(0, 0, 0, 0);

//    Common::Array<float> array;

//    array.addItem(1);
//    array += 1;

//    array.operator ++();
//    array.operator ++(0);
//    array++;
//    ++array;
//    array.resize();

//    array.operator --();
//    array.operator --(0);
//    array--;
//    --array;
//    array.clear();

    Common::Space3d::Coordinate c = Common::Space3d::Coordinate(10, 20, 30);
//    c = c + c;

//    Common::Vector3<float> v;
//    v = v.crossProduct(v);
//    float x = v.dotProduct(v);
//    x = Common::Space2d::LineSlopeIntercept().y(x);

//    Common::Space2d::Plot p;
//    p = p - p;

//    Common::UnitVector3 u;

//    Common::Matrix4f m1 = Common::Matrix4<float>();

//    Common::Projection3d::Trimetric projection();

//    Common::Space3d::Helpers::getScalingMatrix(Common::Vector3<float>());

//    Implementations::Qt::getMatrix(Common::Matrix4<float>());
//    opengl.getMatrix();

//    Common::Array<int> j;
//    j.addItem(12);
//    j.addItem(13);
//    j.addItem(14);

//    Common::PArray<Common::Space3d::Coordinate> k;
//    k.addItem(new Common::Space3d::Coordinate(1, 2, 3));
//    k.addItem(new Common::Space3d::Coordinate(4, 5, 6));
//    k.addItem(new Common::Space3d::Coordinate(7, 8, 9));

//    Common::Space3d::Coordinate* j1 = k.Items[0];
//    Common::Space3d::Coordinate* j2 = k.Items[1];
//    Common::Space3d::Coordinate* j3 = k.Items[2];
//    unsigned int j4 = j3->values[0];

//    Movement::Skeletal skeletal = Movement::Skeletal();

//    {
//        unsigned int boneIndex = skeletal.addBone(Movement::Servo(Common::Space3d::Coordinate(), 0));
//        boneIndex = skeletal.addBone(boneIndex, Movement::Servo(Common::Space3d::Coordinate(), 1));
//        boneIndex = skeletal.addBone(boneIndex, new Movement::Servo(Common::Space3d::Coordinate(), 2));
//        boneIndex = skeletal.addBone(boneIndex, new Movement::Servo(Common::Space3d::Coordinate(), 3));
//        boneIndex = skeletal.addBone(boneIndex, new Movement::Servo(Common::Space3d::Coordinate(), 4));
//        boneIndex = skeletal.addBone(boneIndex, new Movement::Servo(Common::Space3d::Coordinate(), 5));
//        boneIndex = skeletal.addBone(boneIndex, new Movement::Servo(Common::Space3d::Coordinate(), 6));
//        boneIndex = skeletal.addBone(boneIndex, new Movement::Servo(Common::Space3d::Coordinate(), 7));
//        boneIndex = skeletal.addBone(boneIndex, new Movement::Servo(Common::Space3d::Coordinate(), 8));
//        boneIndex = skeletal.addBone(boneIndex, new Movement::Servo(Common::Space3d::Coordinate(), 9));
//        skeletal.addBone(boneIndex, new Movement::Servo(Common::Space3d::Coordinate(), 10));
//    }

//    int o = ((Movement::Servo*)skeletal.Actuators[4])->u;
//    Movement::Bone* b = skeletal.Bones[3]->ParentBone;
//    int p = ((Movement::Servo*)skeletal.Bones[3]->ParentBone->ChildActuator)->u;
//    int q;

//    Common::Matrix4<float> m = skeletal.Bones[3]->getMatrix();

//    Common::Matrix4<float> boneMatrix = skeletal.Bones.Items[3].getMatrix();
//    Common::Space3d::Coordinate cMapped = c * boneMatrix;

//    Common::PArray<X> xarray;
//    xarray.addItem(new X(1));
//    xarray.addItem(new X(2));
//    xarray.addItem(new X(3));
//    int y;
//    y = xarray.Items[0]->I;
//    y = xarray.Items[1]->I;
//    y = xarray.Items[2]->I;

//    Movement::Bone* beef[3];
    Common::PArray<Movement::Bone> beef;
    beef.resize(3);
    beef.Items[0] = new Movement::Bone(0, new Movement::Servo(Common::Space3d::Coordinate(), 1));
    beef.Items[1] = new Movement::Bone(beef.Items[0], new Movement::Servo(Common::Space3d::Coordinate(), 2));
    beef.Items[2] = new Movement::Bone(beef.Items[1], new Movement::Servo(Common::Space3d::Coordinate(), 3));

    return a.exec();
}
