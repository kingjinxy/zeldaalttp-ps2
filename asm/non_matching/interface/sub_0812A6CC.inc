	THUMB_FUNC_START sub_0812A6CC
sub_0812A6CC: @ 0x0812A6CC
	push {r4,r5,lr}
	ldr r1, _0812A758  @ =gUnknown_030003CC
	str r0, [r1]
	ldr r1, _0812A75C  @ =0x04000084
	mov r0, #0
	strb r0, [r1]
	mov r0, #128
	strb r0, [r1]
	sub r1, r1, #4
	ldr r2, _0812A760  @ =0x0000FF77
	add r0, r2, #0
	strh r0, [r1]
	add r1, r1, #2
	mov r0, #13
	strb r0, [r1]
	ldr r2, _0812A764  @ =0x04000088
	ldrh r1, [r2]
	ldr r0, _0812A768  @ =0x00003FFF
	and r0, r0, r1
	mov r3, #128
	lsl r3, r3, #7
	add r1, r3, #0
	orr r0, r0, r1
	strh r0, [r2]
	ldr r1, _0812A76C  @ =0x04000060
	mov r0, #8
	strh r0, [r1]
	add r1, r1, #2
	mov r2, #240
	lsl r2, r2, #8
	add r0, r2, #0
	strh r0, [r1]
	ldr r5, _0812A770  @ =0x0812CC58
	ldr r4, _0812A774  @ =gUnknown_03001400
	add r0, r5, #0
	add r1, r4, #0
	mov r2, #216
	bl CpuFastSet
	ldr r0, _0812A778  @ =gUnknown_030003D0
	str r4, [r0]
	ldr r1, _0812A77C  @ =gUnknown_030003D4
	ldr r0, _0812A780  @ =0x0812CD78
	sub r0, r0, r5
	add r0, r0, r4
	str r0, [r1]
	ldr r1, _0812A784  @ =gUnknown_030003D8
	ldr r0, _0812A788  @ =0x0812CE70
	sub r0, r0, r5
	add r0, r0, r4
	str r0, [r1]
	ldr r1, _0812A78C  @ =gUnknown_03000C1C
	ldr r0, _0812A790  @ =gUnknown_02036000
	str r0, [r1]
	ldr r0, _0812A794  @ =gUnknown_030003DC
	bl sub_0812A7C8
	bl sub_0812C688
	bl sub_0812AB14
	bl sub_0812AC0C
	bl sub_0812BCFC
	bl sub_0812C368
	pop {r4,r5}
	pop {r0}
	bx r0
_0812A758:
	.4byte gUnknown_030003CC
_0812A75C:
	.4byte 0x04000084
_0812A760:
	.4byte 0x0000FF77
_0812A764:
	.4byte 0x04000088
_0812A768:
	.4byte 0x00003FFF
_0812A76C:
	.4byte 0x04000060
_0812A770:
	.4byte 0x0812CC58
_0812A774:
	.4byte gUnknown_03001400
_0812A778:
	.4byte gUnknown_030003D0
_0812A77C:
	.4byte gUnknown_030003D4
_0812A780:
	.4byte 0x0812CD78
_0812A784:
	.4byte gUnknown_030003D8
_0812A788:
	.4byte 0x0812CE70
_0812A78C:
	.4byte gUnknown_03000C1C
_0812A790:
	.4byte gUnknown_02036000
_0812A794:
	.4byte gUnknown_030003DC
	THUMB_FUNC_END sub_0812A6CC

