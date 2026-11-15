	THUMB_FUNC_START sub_080B09B0
sub_080B09B0: @ 0x080B09B0
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080B09F8  @ =gRam
	ldr r3, _080B09FC  @ =0x00000E1F
	add r1, r2, r3
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080B0A96
	mov r5, #2
	ldr r1, _080B0A00  @ =0x00000E21
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #2
	beq _080B0A96
	ldr r3, _080B0A04  @ =0x00001834
	add r1, r2, r3
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #0
	bge _080B0A96
	mov r0, #0
	strb r0, [r1]
	ldr r1, _080B0A08  @ =0x000015F7
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080B0A0C
	mov r0, #16
	bl sub_080CF370
	b _080B0A12
_080B09F8:
	.4byte gRam
_080B09FC:
	.4byte 0x00000E1F
_080B0A00:
	.4byte 0x00000E21
_080B0A04:
	.4byte 0x00001834
_080B0A08:
	.4byte 0x000015F7
_080B0A0C:
	mov r0, #16
	bl sub_080CF3B8
_080B0A12:
	ldr r2, _080B0A60  @ =gRam
	ldr r3, _080B0A64  @ =0x00001844
	add r0, r2, r3
	add r1, r5, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _080B0A90
	mov r0, #3
	strb r0, [r1]
	ldr r0, _080B0A68  @ =gUnknown_0817F0D4
	ldrb r0, [r0, #3]
	mov r1, #150
	lsl r1, r1, #4
	add r4, r2, r1
	strb r0, [r4]
	ldr r3, _080B0A6C  @ =0x00000E29
	add r0, r2, r3
	add r3, r5, r0
	ldrb r0, [r3]
	add r0, r0, #1
	cmp r0, #10
	bne _080B0A78
	ldr r1, _080B0A70  @ =0x00001832
	add r0, r2, r1
	add r0, r5, r0
	mov r1, #32
	strb r1, [r0]
	ldr r0, _080B0A74  @ =0x00000E1F
	add r1, r2, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #2
	strb r0, [r3]
	b _080B0A96
_080B0A60:
	.4byte gRam
_080B0A64:
	.4byte 0x00001844
_080B0A68:
	.4byte gUnknown_0817F0D4
_080B0A6C:
	.4byte 0x00000E29
_080B0A70:
	.4byte 0x00001832
_080B0A74:
	.4byte 0x00000E1F
_080B0A78:
	strb r0, [r3]
	ldr r0, _080B0A9C  @ =0x00001855
	add r1, r2, r0
	add r1, r5, r1
	ldr r2, _080B0AA0  @ =gUnknown_0817F0AC
	mov r0, #0
	ldrsb r0, [r4, r0]
	ldrb r3, [r3]
	add r0, r0, r3
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
_080B0A90:
	add r0, r5, #0
	bl sub_081180EC
_080B0A96:
	pop {r4,r5}
	pop {r0}
	bx r0
_080B0A9C:
	.4byte 0x00001855
_080B0AA0:
	.4byte gUnknown_0817F0AC
	THUMB_FUNC_END sub_080B09B0

