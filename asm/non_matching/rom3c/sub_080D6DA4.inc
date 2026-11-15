	THUMB_FUNC_START sub_080D6DA4
sub_080D6DA4: @ 0x080D6DA4
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080C5044
	ldr r5, _080D6E10  @ =gRam
	ldr r1, _080D6E14  @ =0x00000FC2
	add r0, r5, r1
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _080D6E30
	mov r1, #31
	and r1, r1, r0
	ldr r2, _080D6E18  @ =0x000010A2
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	orr r1, r1, r0
	ldr r2, _080D6E1C  @ =0x000009AD
	add r0, r5, r2
	ldrb r0, [r0]
	orr r1, r1, r0
	ldr r2, _080D6E20  @ =0x000010D2
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	orr r1, r1, r0
	ldr r2, _080D6E24  @ =0x00001605
	add r0, r5, r2
	ldrb r0, [r0]
	orr r1, r1, r0
	cmp r1, #0
	bne _080D6DF0
	add r0, r4, #0
	bl sub_080E89E4
_080D6DF0:
	ldr r0, _080D6E28  @ =0x00001052
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080D6E2C  @ =0x00000F92
	add r2, r5, r1
	add r2, r4, r2
	lsl r0, r0, #24
	lsr r0, r0, #27
	mov r1, #1
	and r0, r0, r1
	add r0, r0, #2
	strb r0, [r2]
	b _080D6E40
_080D6E10:
	.4byte gRam
_080D6E14:
	.4byte 0x00000FC2
_080D6E18:
	.4byte 0x000010A2
_080D6E1C:
	.4byte 0x000009AD
_080D6E20:
	.4byte 0x000010D2
_080D6E24:
	.4byte 0x00001605
_080D6E28:
	.4byte 0x00001052
_080D6E2C:
	.4byte 0x00000F92
_080D6E30:
	mov r0, #31
	strb r0, [r1]
	ldr r2, _080D6E48  @ =0x00000F52
	add r1, r5, r2
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080D6E40:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D6E48:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080D6DA4

