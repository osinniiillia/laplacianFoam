IOdictionary transportProperties
(
    IOobject
    (
        "transportProperties",
        runTime.constant(),
        mesh,
        IOobject::MUST_READ,
        IOobject::NO_WRITE
    )
);

dimensionedScalar gamma("gamma", dimLength*dimLength,transportProperties);
dimensionedScalar L("L", dimLength, transportProperties);
//dimensionedScalar T0("T0", ,transportProperties);
//dimensionedScalar TL("TL", transportProperties);
dimensionedScalar k("k", dimless, transportProperties);
dimensionedScalar alpha("alpha", dimless,transportProperties);

volScalarField T
    (
        IOobject
        (
            "T",
            runTime.timeName(),
            mesh,
            IOobject::MUST_READ,
            IOobject::AUTO_WRITE
        ),
        mesh
    );
    
//#include "createFvOptions.H"
