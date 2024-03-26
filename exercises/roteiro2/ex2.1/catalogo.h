#ifndef CATALOGO_H
#define CATALOGO_H
#define MAX_SIZE 100

  typedef struct sCatalogoProdutos CatalogoProdutos;
  typedef struct sProduto Produto;

  CatalogoProdutos* criarCatalogo();
  void adicionaProdutos(CatalogoProdutos*, char*, double, int);
  int verificarEstoque(CatalogoProdutos*, char*);
  void imprimirCatalogo(CatalogoProdutos*);

#endif
