	THUMB_FUNC_START sub_080FB1EC
sub_080FB1EC: @ 0x080FB1EC
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r3, _080FB260  @ =gRam
	ldr r1, _080FB264  @ =0x00001052
	add r0, r3, r1
	add r0, r5, r0
	ldrb r1, [r0]
	lsr r1, r1, #2
	mov r0, #1
	and r1, r1, r0
	ldr r2, _080FB268  @ =0x00000FB2
	add r0, r3, r2
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #1
	orr r1, r1, r0
	lsl r1, r1, #24
	lsr r4, r1, #24
	ldr r0, _080FB26C  @ =0x00000F92
	add r1, r3, r0
	add r1, r5, r1
	ldr r0, _080FB270  @ =gUnknown_0817A6BC
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080FB274  @ =0x00001122
	add r2, r3, r1
	add r2, r5, r2
	ldrb r0, [r2]
	mov r1, #191
	and r1, r1, r0
	ldr r0, _080FB278  @ =gUnknown_0817A6C4
	add r0, r4, r0
	ldrb r0, [r0]
	orr r1, r1, r0
	strb r1, [r2]
	ldr r2, _080FB27C  @ =0x00000996
	add r0, r3, r2
	ldrb r1, [r0]
	add r0, r5, #0
	eor r0, r0, r1
	mov r1, #15
	and r0, r0, r1
	cmp r0, #0
	bne _080FB2FC
	ldr r1, _080FB280  @ =0x00000F22
	add r0, r3, r1
	add r0, r5, r0
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _080FB284
	sub r2, r2, #54
	add r0, r3, r2
	strb r1, [r0]
	b _080FB290
_080FB260:
	.4byte gRam
_080FB264:
	.4byte 0x00001052
_080FB268:
	.4byte 0x00000FB2
_080FB26C:
	.4byte 0x00000F92
_080FB270:
	.4byte gUnknown_0817A6BC
_080FB274:
	.4byte 0x00001122
_080FB278:
	.4byte gUnknown_0817A6C4
_080FB27C:
	.4byte 0x00000996
_080FB280:
	.4byte 0x00000F22
_080FB284:
	mvn r0, r1
	add r0, r0, #1
	mov r2, #150
	lsl r2, r2, #4
	add r1, r3, r2
	strb r0, [r1]
_080FB290:
	ldr r1, _080FB2A8  @ =0x00000F12
	add r0, r3, r1
	add r0, r5, r0
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _080FB2B0
	ldr r2, _080FB2AC  @ =0x00000961
	add r0, r3, r2
	strb r1, [r0]
	b _080FB2BA
_080FB2A8:
	.4byte 0x00000F12
_080FB2AC:
	.4byte 0x00000961
_080FB2B0:
	mvn r0, r1
	add r0, r0, #1
	ldr r2, _080FB2D4  @ =0x00000961
	add r1, r3, r2
	strb r0, [r1]
_080FB2BA:
	mov r1, #150
	lsl r1, r1, #4
	add r0, r3, r1
	ldr r2, _080FB2D4  @ =0x00000961
	add r1, r3, r2
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bcc _080FB2DC
	mov r1, #0
	ldr r2, _080FB2D8  @ =0x00000F22
	b _080FB2E0
	.byte 0x00
	.byte 0x00
_080FB2D4:
	.4byte 0x00000961
_080FB2D8:
	.4byte 0x00000F22
_080FB2DC:
	mov r1, #2
	ldr r2, _080FB310  @ =0x00000F12
_080FB2E0:
	add r0, r3, r2
	add r0, r5, r0
	ldrb r4, [r0]
	mov r0, #128
	and r4, r4, r0
	cmp r4, #0
	beq _080FB2F4
	add r0, r1, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
_080FB2F4:
	ldr r2, _080FB314  @ =0x00000FB2
	add r0, r3, r2
	add r0, r5, r0
	strb r1, [r0]
_080FB2FC:
	add r0, r5, #0
	bl sub_080C6240
	add r0, r5, #0
	bl sub_080D84B0
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080FB310:
	.4byte 0x00000F12
_080FB314:
	.4byte 0x00000FB2
	THUMB_FUNC_END sub_080FB1EC

