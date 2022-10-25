#include <stdio.h>
#include <stdlib.h>
#include "c_wrapper.h"
//#include "nequip.h"
int main(){
   char model[] = "water-deploy.pth";
   nequipwrap *neq = create_nequip(model);
//    printf("loaded model name: %s\n", neq->model);
//    printf("cutoff %f\n",neq->cutoff);
//    printf("load potential successfully\n");

   double coord[] ={
      42.886169670000001,   -0.055681660000000001,      38.329161120000002,
      34.202588720000001,              -0.6185484,      37.365568080000003,
      30.080392589999999,     -2.0124176500000002,      36.480796079999998,
      28.705791179999999,     -2.6880392799999999,      36.602098329999997,
             36.24794267,    -0.51634849000000005,      34.492359610000001,
      37.696472460000003,   -0.041087279999999997,      35.014073510000003,
      27.760669979999999,      7.4854206000000003,      33.927691950000003,
      28.816099959999999,              6.49857774,             34.21636084,
      37.157637200000003,      9.0188280800000005,      31.926581209999998,
      38.606381650000003,      9.5820079600000003,      32.343597279999997,
      34.303195930000001,      2.2195014400000002,      45.988045190000001,
      33.244413940000001,              1.30253325,      46.469842720000003,
      38.728617479999997,     -5.0541897699999998,      26.074396839999999,
      38.348392150000002,     -6.2832846900000003,      26.986725310000001,
      32.864252090000001,              3.20606327,               30.897116,
      31.290408809999999,      3.0871834699999998,             30.62739775,
      33.751986969999997,             -3.13832624,      39.672760769999996,
      34.664297990000001,             -3.66438591,      38.646602719999997,
      42.717321439999999,      5.1246883700000003,      32.588340119999998,
             41.56274552,      5.5893544000000004,      33.417490280000003,
      32.428380089999997,      9.1182520999999994,             30.54776786,
              32.6432407,             10.77068308,             30.48427787,
      31.484867080000001,      4.6777144699999997,      37.395719499999998,
      32.317188299999998,     -6.2287496200000003,      36.467186439999999,
      26.662134099999999,      3.1708123800000001,      35.682014649999999,
             26.52713675,              1.60390403,      35.488348299999998,
      32.023823659999998,      16.918208029999999,      31.688356989999999,
      31.400657970000001,      7.0315610800000004,      30.239455469999999,
             33.52642531,     -3.5594808100000002,             34.26368308,
      34.640485550000001,             -3.26538336,      35.497148240000001,
      40.056437510000002,    -0.30543864999999998,      29.831207429999999,
      39.478446419999997,             -1.09483146,      38.310114040000002,
      39.704076149999999,      1.9584631400000001,      33.390237599999999,
      38.333857080000001,              2.69671781,             42.92619457,
      40.182045549999998,     -7.2199289499999999,      27.658039049999999,
      39.320443179999998,     -8.4564252700000004,             28.13196589,
             36.38769637,      8.8117085900000003,      38.354536240000002,
      36.320563759999999,      9.0063075799999996,      36.752600139999998,
      29.999158309999999,     -5.5637817500000004,      33.929505059999997,
      30.772854550000002,     -5.0385870199999996,      35.199806719999998,
      40.059251779999997,      6.3305279499999996,      28.257946189999998,
      40.239836089999997,      5.1745923999999999,             29.29629568,
             26.33209111,      2.4393638599999998,      33.565386850000003,
      26.960697119999999,      1.2711078899999999,      32.592388440000001,
      34.837269769999999,    -0.47227084000000003,      30.382436200000001,
      35.396881370000003,             -1.92684834,      30.308183759999999,
      32.121760719999997,    -0.73334299000000003,      36.510438299999997,
      32.218084349999998,      7.8454304099999996,      35.667196779999998,
             36.37809987,     -4.3048878799999999,              36.4539793,
      35.811927560000001,             -3.00139282,      27.034893759999999,
      29.645249140000001,      1.0652123600000001,      35.714365399999998,
      30.379465499999998,   -0.066814650000000003,      34.988246869999998,
             34.21493366,             -1.65591205,      33.887643709999999,
      34.784243549999999,     -1.0252141100000001,      32.503483260000003,
      40.464995450000004,              1.14678254,      31.307350320000001,
      41.326246990000001,     0.65508034999999998,      32.455588290000001,
             29.02108599,      3.5038194900000001,             39.90877029,
      29.494542689999999,      3.7276637300000002,      41.376613800000001,
      34.135966400000001,     -6.7533422300000003,      32.356841029999998,
      34.954657009999998,     -5.7704242399999996,             31.45710669,
      33.253235689999997,      1.5268048299999999,      44.056217189999998,
      33.793166939999999,     0.50146325999999997,      43.059759010000001,
      36.820540960000002,      2.6214681999999998,      40.683400659999997,
      37.555270669999999,              1.56498329,             39.76489351,
      43.209908720000001,   -0.062845650000000003,             47.25931559,
      29.394058350000002,     -2.3133019500000001,      37.140788360000002,
      36.741570840000001,   -0.083871000000000001,      35.259178339999998,
             27.94247769,      6.7622961500000001,      34.564838440000003,
      37.681265600000003,      9.4216399800000001,      32.647864349999999,
      33.317129080000001,      2.0951401700000001,      45.872226509999997,
      37.995135589999997,      4.3611431200000004,             26.55718199,
      32.182467090000003,      2.6611503399999998,      30.457724819999999,
      34.653801209999997,     -3.4374573100000001,      39.588924570000003,
      42.292983370000002,      5.9471069500000002,      32.846099549999998,
      32.960469009999997,      9.9050313200000009,      30.158730670000001,
             31.42818866,     -5.8338304000000001,      36.673874359999999,
             26.05637308,      2.4973869199999998,      35.348687040000002,
      32.033492709999997,      17.325228939999999,      30.811601379999999,
      33.825218239999998,     -2.9520949600000002,      35.022046070000002,
      39.456998159999998,    -0.30727594000000003,      38.934782900000002,
             29.48467089,      2.8692561099999998,      43.006186839999998,
      39.286418410000003,             -7.62061031,      27.627114779999999,
      35.879750280000003,      8.6515870800000005,      37.522173430000002,
      30.358254389999999,     -4.7607656800000004,      34.335564570000003,
      40.709895690000003,      5.8331250199999998,      28.755837589999999,
      26.717908300000001,      2.2415138300000002,      32.657729799999998,
      35.658925619999998,    -0.99689035000000004,      30.574953059999999,
      31.585160200000001,             -1.31218042,      35.901110940000002,
      35.548938669999998,     -3.9056138900000001,      26.821449000000001,
      29.565661609999999,     0.46817945999999999,      34.967071199999999,
             34.76151282,    -0.95696802000000003,      33.489136729999998,
      40.485340669999999,     0.40236209000000001,             31.94254162,
      29.672828979999998,      4.0134825300000001,               40.450578,
      34.127228619999997,     -5.8796882899999998,      31.892542299999999,
      33.116888420000002,      1.2338084899999999,      43.112771199999997,
      37.199699350000003,      2.5049007099999998,      39.791712660000002
};
   int atype[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
   double box[]={9.85, 0.0, 0.0, 0.0, 9.85, 0.0, 0.0, 0.0, 9.85};
   int vecsize = 96;
   double ener=0.0;
   double *force = (double*)malloc(sizeof(double) * vecsize * 3);
   double *atom_ener = (double*)malloc(sizeof(double) * vecsize);

   compute_nequip(neq, &vecsize, &ener,force, atom_ener, &coord[0], &atype[0], &box[0]);
//   printf("the energy is %.7f\n", ener);
//   for (int i=0; i<vecsize*3; i++){
// 	  printf("force[%d]:%f\n",i,force[i]);
//   }
//   for (int i=0; i<vecsize; i++){
// 	  printf("atom_ener[%d]:%f\n",i,force[i]);
//   }
 }
