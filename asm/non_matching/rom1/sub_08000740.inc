	THUMB_FUNC_START sub_08000740
sub_08000740: @ 0x08000740
	ldr r1, _080007B8  @ =gUnknown_03005060
	ldr r2, _080007BC  @ =gEntityLinks
_08000744:
	ldr r3, [r1, #8]
	cmp r3, #0
	beq _08000752
	add r1, r1, #144
	cmp r1, r2
	bcc _08000744
	mov pc, lr
_08000752:
	ldr r2, _080007C0  @ =gUnknown_02016D50
	ldr r3, [r2]
	str r1, [r2]
	ldr r2, [r3]
	str r2, [r1]
	str r3, [r1, #4]
	str r1, [r3]
	str r1, [r2, #4]
	mov r2, #1
	strb r2, [r1, #13]
	str r0, [r1, #8]
	mov r1, #94
	ldrb r2, [r0, r1]
	mov r3, #16
	orr r2, r2, r3
	strb r2, [r0, r1]
	mov pc, lr
	THUMB_FUNC_END sub_08000740

_08000774:
	.4byte gUnknown_03000E40
_08000778:
	.4byte _08000440 + 1
_0800077C:
	.4byte _08000524
_08000780:
	.4byte _080004DA + 1
_08000784:
	.4byte gUnknown_081423A0
_08000788:
	.4byte gUnknown_0813E400
_0800078C:
	.4byte _08000506 + 1
_08000790:
	.4byte gUnknown_03006A58
_08000794:
	.4byte gUnknown_03005060
_08000798:
	.4byte gEntityLinks
_0800079C:
	.4byte gUnknown_02016D50
_080007A0:
	.4byte gUnknown_03005060
_080007A4:
	.4byte gEntityLinks
_080007A8:
	.4byte gUnknown_02016D50
_080007AC:
	.4byte gUnknown_03006A44
_080007B0:
	.4byte gUnknown_03006A44
_080007B4:
	.4byte 0x00001051
_080007B8:
	.4byte gUnknown_03005060
_080007BC:
	.4byte gEntityLinks
_080007C0:
	.4byte gUnknown_02016D50

