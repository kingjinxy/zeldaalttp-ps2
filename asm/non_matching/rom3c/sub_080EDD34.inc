	THUMB_FUNC_START sub_080EDD34
sub_080EDD34: @ 0x080EDD34
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080EE12C
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080EDD92
	add r0, r4, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	bne _080EDD92
	add r0, r4, #0
	bl sub_080C5044
	ldr r2, _080EDD98  @ =gRam
	ldr r0, _080EDD9C  @ =0x00001032
	add r1, r2, r0
	add r1, r4, r1
	ldrb r3, [r1]
	mov r0, #64
	orr r0, r0, r3
	strb r0, [r1]
	ldr r0, _080EDDA0  @ =0x00000E75
	add r1, r2, r0
	add r1, r4, r1
	ldrb r3, [r1]
	mov r0, #4
	orr r0, r0, r3
	strb r0, [r1]
	ldr r1, _080EDDA4  @ =gUnknown_08178728
	ldr r0, _080EDDA8  @ =0x00000F52
	add r2, r2, r0
	add r2, r4, r2
	ldrb r0, [r2]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_080EDD92:
	pop {r4}
	pop {r0}
	bx r0
_080EDD98:
	.4byte gRam
_080EDD9C:
	.4byte 0x00001032
_080EDDA0:
	.4byte 0x00000E75
_080EDDA4:
	.4byte gUnknown_08178728
_080EDDA8:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080EDD34

