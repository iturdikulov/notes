---
date: 2023-07-20
sr-due: 2023-08-25
sr-ease: 228
sr-interval: 1
tags:
- inbox
- research
---

# Polygon mesh

> In 3D [[Computer_graphics]] and [[Solid_modeling]], a polygon mesh is a
> collection of [[Vertex|vertices]], edges and faces that
> defines the shape of a polyhedral object. The faces usually consist of
> triangles (triangle mesh), quadrilaterals (quads), or other simple convex
> polygons (n-gons), since this simplifies rendering, but may also be more
> generally composed of concave polygons, or even polygons with holes.

## Elements of a polygon mesh

<dl>
    <dt>Vertex</dt>
    <dd>A position (usually in 3D space) along with other information such as
        color, normal vector and texture coordinates.</dd>
    <dt>Egde</dt>
    <dd>A connection between two vertices.</dd>
    <dt>Face</dt>
    <dd>A closed set of edges, in which a triangle face has three edges, and a
        quad face has four edges. A polygon is a coplanar set of faces. In
        systems that support multi-sided faces, polygons and faces are
        equivalent. However, most rendering hardware supports only 3- or 4-sided
        faces, so polygons are represented as multiple faces. Mathematically a
        polygonal mesh may be considered an unstructured grid, or undirected
        graph, with additional properties of geometry, shape and topology.</dd>
    <dt>Surfaces</dt>
    <dd>In technical applications of 3D computer graphics such as computer-aided
        design and computer-aided manufacturing, surfaces are one way of
        representing objects. More often called smoothing groups.</dd>
    <dt>Groups</dt>
    <dd>Some mesh formats contain groups, which define separate elements of the
        mesh, and are useful for determining separate sub-objects for skeletal
        animation or separate actors for non-skeletal animation.</dd>
    <dt>Materials</dt>
    <dd>Generally materials will be defined, allowing different portions of the
        mesh to use different shaders when rendered.</dd>
    <dt>UV coordinates</dt>
    <dd>Most mesh formats also support some form of UV coordinates which are a
        separate 2d representation of the mesh "unfolded" to show what portion
        of a 2-dimensional texture map to apply to different polygons of the
        mesh. It is also possible for meshes to contain other such vertex
        attribute information such as colour, tangent vectors, weight maps to
        control animation, etc (sometimes also called channels).</dd>
</dl>