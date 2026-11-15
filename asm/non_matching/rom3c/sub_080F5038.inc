	THUMB_FUNC_START sub_080F5038
sub_080F5038: @ 0x080F5038
	push {r4,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r1, _080F507C  @ =gRam
	ldr r3, _080F5080  @ =0x00000FC2
	add r0, r1, r3
	add r3, r2, r0
	ldrb r0, [r3]
	add r4, r1, #0
	cmp r0, #0
	beq _080F508C
	cmp r0, #96
	beq _080F505A
	cmp r0, #64
	beq _080F505A
	cmp r0, #32
	bne _080F5066
_080F505A:
	ldr r0, _080F5084  @ =0x00000F92
	add r1, r4, r0
	add r1, r2, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080F5066:
	ldr r1, _080F5088  @ =0x00000996
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	bne _080F509C
	add r0, r2, #0
	bl sub_080F4CB8
	b _080F509C
_080F507C:
	.4byte gRam
_080F5080:
	.4byte 0x00000FC2
_080F5084:
	.4byte 0x00000F92
_080F5088:
	.4byte 0x00000996
_080F508C:
	ldr r4, _080F50A4  @ =0x00000F52
	add r0, r1, r4
	add r0, r2, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #240
	strb r0, [r3]
_080F509C:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F50A4:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080F5038

