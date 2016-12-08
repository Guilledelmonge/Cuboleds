//Frecuencia de las notas
#define Do 261
#define Re 294
#define Mi 329
#define Fa 349
#define Sol 391
#define SolSostenido 415
#define La 440
#define LaSos 455
#define LaSostenido 466
#define Si 494
#define DoAlto 524
#define DoSostenidoAlto 555
#define ReAlto 588
#define ReSostenidoAlto 622
#define MiAlto 660
#define FaAlto 699
#define FaSostenidoAlto 740
#define SolAlto 784
#define SolSostenidoAlto 830
#define SolLargo 880
#define LaLargo 932
#define DoGrande 1047
#define DoSostenidoGrande 1109
#define ReGrande 1175
#define MiGrande 1319
#define FaGrande 1397
#define SolGrande 1568
#define LaGrande 1760
#define LaSostenidoGrande 1865
 //Duración de las notas.
#define semifusa 100
#define semif 125 
#define semifu 150 
#define semifus 175
#define semicorchea 200
#define semicor 250
#define fusa 300
#define fusa1 325 
#define fu 350 
#define fus 375
#define corchea 400
#define cor 500 
#define corch 650 
#define negra 800
#define negraymedia 1200
#define blanca 1600

//a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p = para indicar cuales anodos del cubo vamos a encender o apagar con => HIGH o LOW
//q, r, s, t  = para indicar cuales catodos del cubo vamos a encender o apagar con => HIGH o LOW
//30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45 = son los pines que sescogimos para usar en el ARDUINO MEGA.
void PrenderLeds(boolean a, boolean b, boolean c, boolean d, boolean e, boolean f, boolean g, boolean h, boolean i, boolean j, boolean k, boolean l,boolean m,
boolean n, boolean o, boolean p, boolean q, boolean r, boolean s, boolean t){
   digitalWrite( 30, a );digitalWrite( 31, b);digitalWrite( 32, c );digitalWrite( 33, d);digitalWrite( 34, e );digitalWrite( 35, f );
   digitalWrite( 36, g );digitalWrite( 37, h );digitalWrite( 38, i );digitalWrite( 39, j );digitalWrite( 40, k );digitalWrite( 41, l );
   digitalWrite( 42, m);digitalWrite( 43, n );digitalWrite( 44, o );digitalWrite( 45, p );
   
   digitalWrite( 46, q );digitalWrite( 47, r );digitalWrite( 48, s );digitalWrite( 49,t);
   delay(1);
}
