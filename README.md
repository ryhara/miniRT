# miniRT
## MiniLibXを用いたレイトレーシングプログラムの実装 (C言語)
- [MiniLibX](https://harm-smits.github.io/42docs/libs/minilibx/getting_started.html)
- カメラ、環境光、点光源、平面、球、円柱
- カメラ位置の移動、複数オブジェクトの表示
- Phongの反射モデル（環境光(定数)、直接光の拡散反射光、直接光の鏡面反射光）

## Example
<p align="center">
  <img src="images/two_sphere.png" alt="images/two_sphere.png" width="200"/>
  <img src="images/two_sphere2.png" alt="images/two_sphere2.png" width="200"/>
  <img src="images/two_cylinder.png" alt="images/two_cylinder.png" width="200"/>
</p>

![two_sphere.png](images/two_sphere.png)
![two_sphere2.png](images/two_sphere2.png)
![two_cylinder.png](images/two_cylinder.png)
![multi_object.png](images/multi_object.png)
![normal_sphere.png](images/normal_sphere.png)
![normal_sphere2.png](images/normal_sphere2.png)
![normal_cylinder.png](images/normal_cylinder.png)
![rotate_cylinder.png](images/rotate_cylinder.png)
![rotate_plane.png](images/rotate_plane.png)
![multi_sphere.png](images/multi_sphere.png)

## Execution environment
- iMac
- m1 macbook air


## Usage
### compile
```
make
```

### execute
- OK case

```
./miniRT files/my_test/*.rt
./miniRT files/test/*.rt
```

- all OK case

```
make files
```

- NG case

```
./miniRT files/ng/*.rt
```
- all NG case
```
make test
```
