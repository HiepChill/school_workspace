import pandas as pd
from sklearn.cluster import KMeans
from sklearn.model_selection import train_test_split
from sklearn.metrics import silhouette_score
from sklearn.metrics import davies_bouldin_score

data = pd.read_csv('WholesaleCustomersData.csv')
# data = data.drop(['quality'], axis = 1)
dt_Train, dt_Test = train_test_split(data, test_size= 0.1, shuffle=False)
for i in range (2 ,10):
    kmeans = KMeans(n_clusters=i, init = 'k-means++', n_init=10).fit(dt_Train)

    cluster_labels = kmeans.predict(dt_Test)

    silhouette_avg = silhouette_score(dt_Test, cluster_labels)
    print("i = %d Silhouette Score: %.5f" % (i , silhouette_avg))
    db_score = davies_bouldin_score(dt_Test, cluster_labels)
    print("i = %d Davies-Bouldin Score: %.5f" % (i ,db_score))
    
    
# from sklearn.cluster import KMeans
# import matplotlib.pyplot as plt

# data = pd.read_csv('WholesaleCustomersData.csv')
# distortions = []
# K = range(2, 10)
# for k in K:
#     kmeanModel = KMeans(n_clusters=k)
#     kmeanModel.fit(data)
#     distortions.append(kmeanModel.inertia_)

# plt.figure(figsize=(8, 6))
# plt.plot(K, distortions, 'bx-')
# plt.xlabel('k')
# plt.ylabel('Distortion')
# plt.title('The Elbow Method')
# plt.show()
