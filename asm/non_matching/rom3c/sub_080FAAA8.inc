	THUMB_FUNC_START sub_080FAAA8
sub_080FAAA8: @ 0x080FAAA8
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	add r6, r3, #0
	ldr r4, _080FAB3C  @ =gRam
	ldr r0, _080FAB40  @ =0x00000F92
	add r2, r4, r0
	add r2, r3, r2
	ldr r1, _080FAB44  @ =0x00000996
	add r0, r4, r1
	ldrb r0, [r0]
	lsr r0, r0, #3
	mov r1, #1
	and r0, r0, r1
	strb r0, [r2]
	ldr r2, _080FAB48  @ =0x00001142
	add r0, r4, r2
	add r0, r3, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080FABA8
	ldr r1, _080FAB4C  @ =0x00000FC2
	add r0, r4, r1
	add r7, r3, r0
	ldrb r5, [r7]
	cmp r5, #0
	bne _080FABA8
	ldr r2, _080FAB50  @ =0x00000F62
	add r0, r4, r2
	add r0, r3, r0
	ldrb r2, [r0]
	add r1, r2, #1
	strb r1, [r0]
	ldr r0, _080FAB54  @ =gUnknown_0817A53E
	add r0, r2, r0
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080FAB78
	ldr r0, _080FAB58  @ =0x00000F52
	add r1, r4, r0
	add r1, r3, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080FAB5C  @ =0x00000F22
	add r0, r4, r1
	add r0, r3, r0
	strb r5, [r0]
	ldr r2, _080FAB60  @ =0x00000F12
	add r0, r4, r2
	add r0, r3, r0
	strb r5, [r0]
	ldr r0, _080FAB64  @ =0x00000B6E
	add r1, r4, r0
	mov r0, #1
	strb r0, [r1]
	ldr r1, _080FAB68  @ =0x000009E8
	add r0, r4, r1
	mov r1, #0
	strh r5, [r0]
	ldr r2, _080FAB6C  @ =0x00000A02
	add r0, r4, r2
	strb r1, [r0]
	ldr r2, _080FAB70  @ =0x00000FB2
	add r0, r4, r2
	add r0, r3, r0
	strb r1, [r0]
	ldr r2, _080FAB74  @ =0x00001770
	add r0, r4, r2
	strb r1, [r0]
	b _080FABA8
	.byte 0x00
	.byte 0x00
_080FAB3C:
	.4byte gRam
_080FAB40:
	.4byte 0x00000F92
_080FAB44:
	.4byte 0x00000996
_080FAB48:
	.4byte 0x00001142
_080FAB4C:
	.4byte 0x00000FC2
_080FAB50:
	.4byte 0x00000F62
_080FAB54:
	.4byte gUnknown_0817A53E
_080FAB58:
	.4byte 0x00000F52
_080FAB5C:
	.4byte 0x00000F22
_080FAB60:
	.4byte 0x00000F12
_080FAB64:
	.4byte 0x00000B6E
_080FAB68:
	.4byte 0x000009E8
_080FAB6C:
	.4byte 0x00000A02
_080FAB70:
	.4byte 0x00000FB2
_080FAB74:
	.4byte 0x00001770
_080FAB78:
	ldr r0, _080FABB0  @ =0x00000FB2
	add r3, r4, r0
	add r3, r6, r3
	strb r1, [r3]
	ldr r0, _080FABB4  @ =gUnknown_0817A541
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r7]
	ldr r2, _080FABB8  @ =0x00000F22
	add r1, r4, r2
	add r1, r6, r1
	ldr r2, _080FABBC  @ =gUnknown_0817A543
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080FABC0  @ =0x00000F12
	add r1, r4, r0
	add r1, r6, r1
	ldr r2, _080FABC4  @ =gUnknown_0817A547
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
_080FABA8:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080FABB0:
	.4byte 0x00000FB2
_080FABB4:
	.4byte gUnknown_0817A541
_080FABB8:
	.4byte 0x00000F22
_080FABBC:
	.4byte gUnknown_0817A543
_080FABC0:
	.4byte 0x00000F12
_080FABC4:
	.4byte gUnknown_0817A547
	THUMB_FUNC_END sub_080FAAA8

