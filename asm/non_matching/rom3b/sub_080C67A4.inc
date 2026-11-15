	THUMB_FUNC_START sub_080C67A4
sub_080C67A4: @ 0x080C67A4
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r0, _080C6808  @ =gRam
	ldr r1, _080C680C  @ =0x00000FF2
	add r0, r0, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #162
	bne _080C67C8
	bl sub_080CAEC0
	lsl r0, r0, #24
	cmp r0, #0
	beq _080C67C8
	mov r0, #4
	bl sub_080C9600
_080C67C8:
	add r0, r4, #0
	bl sub_080CB9D4
	ldr r2, _080C6808  @ =gRam
	ldr r0, _080C6810  @ =0x00000ECD
	add r1, r2, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080C680C  @ =0x00000FF2
	add r0, r2, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #64
	bne _080C6800
	sub r1, r1, #80
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #9
	strb r1, [r0]
	ldr r1, _080C6814  @ =0x00000F92
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #4
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080C65E0
_080C6800:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C6808:
	.4byte gRam
_080C680C:
	.4byte 0x00000FF2
_080C6810:
	.4byte 0x00000ECD
_080C6814:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_080C67A4

