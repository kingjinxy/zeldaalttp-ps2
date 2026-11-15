	THUMB_FUNC_START sub_080FDC28
sub_080FDC28: @ 0x080FDC28
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080FDC88  @ =gRam
	ldr r0, _080FDC8C  @ =0x00000F92
	add r1, r5, r0
	add r1, r4, r1
	ldr r2, _080FDC90  @ =gUnknown_0817AA0C
	ldr r3, _080FDC94  @ =0x00000FB2
	add r0, r5, r3
	add r3, r4, r0
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080FDC98  @ =0x00000996
	add r0, r5, r1
	ldrb r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	bne _080FDCBE
	ldr r0, _080FDC9C  @ =gUnknown_0817AA08
	ldr r2, _080FDCA0  @ =0x00000F62
	add r1, r5, r2
	add r1, r4, r1
	ldrb r1, [r1]
	add r1, r1, r0
	ldrb r2, [r3]
	ldrb r1, [r1]
	cmp r2, r1
	bne _080FDCAC
	bl GetRandomInt
	ldr r3, _080FDCA4  @ =0x00000FC2
	add r2, r5, r3
	add r2, r4, r2
	mov r1, #31
	and r1, r1, r0
	add r1, r1, #48
	strb r1, [r2]
	ldr r0, _080FDCA8  @ =0x00000F52
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	b _080FDCBE
_080FDC88:
	.4byte gRam
_080FDC8C:
	.4byte 0x00000F92
_080FDC90:
	.4byte gUnknown_0817AA0C
_080FDC94:
	.4byte 0x00000FB2
_080FDC98:
	.4byte 0x00000996
_080FDC9C:
	.4byte gUnknown_0817AA08
_080FDCA0:
	.4byte 0x00000F62
_080FDCA4:
	.4byte 0x00000FC2
_080FDCA8:
	.4byte 0x00000F52
_080FDCAC:
	sub r0, r2, r1
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	bne _080FDCBA
	sub r0, r2, #1
	b _080FDCBC
_080FDCBA:
	add r0, r2, #1
_080FDCBC:
	strb r0, [r3]
_080FDCBE:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080FDC28

