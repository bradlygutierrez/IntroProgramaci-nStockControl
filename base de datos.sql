USE [stockControl]
GO
/****** Object:  Table [dbo].[Category]    Script Date: 5/13/2024 4:11:55 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Category](
	[CategoryID] [int] IDENTITY(1,1) NOT NULL,
	[Productdescription] [nvarchar](80) NULL,
	[Producttype] [nvarchar](80) NULL,
	[Productsize] [nvarchar](80) NULL,
 CONSTRAINT [PK_Category] PRIMARY KEY CLUSTERED 
(
	[CategoryID] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[ColorIdentifier]    Script Date: 5/13/2024 4:11:55 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[ColorIdentifier](
	[ColorID] [int] NOT NULL
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Input]    Script Date: 5/13/2024 4:11:55 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Input](
	[InputID] [int] IDENTITY(1,1) NOT NULL,
	[Inputdate] [nvarchar](20) NULL,
	[Inputprice] [decimal](30, 2) NULL,
	[Inputquantity] [int] NULL,
	[ProductID] [int] NOT NULL,
	[UserID] [int] NOT NULL,
 CONSTRAINT [PK_Input] PRIMARY KEY CLUSTERED 
(
	[InputID] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Output]    Script Date: 5/13/2024 4:11:55 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Output](
	[OutputID] [int] IDENTITY(1,1) NOT NULL,
	[Outputdate] [nvarchar](20) NULL,
	[Outputprice] [decimal](30, 2) NULL,
	[Outputquantity] [int] NULL,
	[ProductID] [int] NOT NULL,
	[UserID] [int] NOT NULL,
 CONSTRAINT [PK_Output] PRIMARY KEY CLUSTERED 
(
	[OutputID] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Product]    Script Date: 5/13/2024 4:11:55 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Product](
	[ProductID] [int] IDENTITY(1,1) NOT NULL,
	[Productname] [nvarchar](80) NULL,
	[Productcolor] [nvarchar](80) NULL,
	[Productprice] [decimal](10, 2) NULL,
	[CategoryID] [int] NOT NULL,
	[Productquantity] [int] NULL,
 CONSTRAINT [PK_Product] PRIMARY KEY CLUSTERED 
(
	[ProductID] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[User]    Script Date: 5/13/2024 4:11:55 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[User](
	[UserID] [int] IDENTITY(1,1) NOT NULL,
	[Username] [nvarchar](80) NULL,
	[Useremail] [nvarchar](80) NULL,
	[Userpassword] [nvarchar](80) NULL,
 CONSTRAINT [PK_User] PRIMARY KEY CLUSTERED 
(
	[UserID] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
ALTER TABLE [dbo].[Input]  WITH CHECK ADD  CONSTRAINT [FK_Input_Product] FOREIGN KEY([ProductID])
REFERENCES [dbo].[Product] ([ProductID])
GO
ALTER TABLE [dbo].[Input] CHECK CONSTRAINT [FK_Input_Product]
GO
ALTER TABLE [dbo].[Input]  WITH CHECK ADD  CONSTRAINT [FK_Input_User] FOREIGN KEY([UserID])
REFERENCES [dbo].[User] ([UserID])
GO
ALTER TABLE [dbo].[Input] CHECK CONSTRAINT [FK_Input_User]
GO
ALTER TABLE [dbo].[Output]  WITH CHECK ADD  CONSTRAINT [FK_Output_Product] FOREIGN KEY([ProductID])
REFERENCES [dbo].[Product] ([ProductID])
GO
ALTER TABLE [dbo].[Output] CHECK CONSTRAINT [FK_Output_Product]
GO
ALTER TABLE [dbo].[Output]  WITH CHECK ADD  CONSTRAINT [FK_Output_User] FOREIGN KEY([UserID])
REFERENCES [dbo].[User] ([UserID])
GO
ALTER TABLE [dbo].[Output] CHECK CONSTRAINT [FK_Output_User]
GO
ALTER TABLE [dbo].[Product]  WITH CHECK ADD  CONSTRAINT [FK_Product_Category] FOREIGN KEY([CategoryID])
REFERENCES [dbo].[Category] ([CategoryID])
GO
ALTER TABLE [dbo].[Product] CHECK CONSTRAINT [FK_Product_Category]
GO
