	THUMB_FUNC_START sub_080A3DE4
sub_080A3DE4: @ 0x080A3DE4
	push {lr}
	ldr r2, _080A3E18  @ =gRam
	ldr r1, _080A3E1C  @ =0x0000180C
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #8
	and r0, r0, r1
	cmp r0, #0
	bne _080A3E12
	mov r1, #4
	ldr r0, _080A3E20  @ =0x00000E15
	add r2, r2, r0
_080A3DFC:
	lsl r0, r1, #24
	asr r1, r0, #24
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #49
	beq _080A3E24
	sub r0, r1, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r0, #0
	bge _080A3DFC
_080A3E12:
	mov r0, #0
	b _080A3E26
	.byte 0x00
	.byte 0x00
_080A3E18:
	.4byte gRam
_080A3E1C:
	.4byte 0x0000180C
_080A3E20:
	.4byte 0x00000E15
_080A3E24:
	mov r0, #1
_080A3E26:
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080A3DE4

	.byte 0x00
	.byte 0x00
