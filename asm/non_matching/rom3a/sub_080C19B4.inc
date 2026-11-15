	THUMB_FUNC_START sub_080C19B4
sub_080C19B4: @ 0x080C19B4
	push {lr}
	mov r1, #9
	ldr r2, _080C19E4  @ =gRam
_080C19BA:
	ldr r3, _080C19E8  @ =0x00000E15
	add r0, r2, r3
	add r0, r1, r0
	ldrb r0, [r0]
	cmp r0, #43
	beq _080C19DA
	sub r1, r1, #1
	cmp r1, #0
	bge _080C19BA
	mov r1, #4
_080C19CE:
	ldr r3, _080C19E8  @ =0x00000E15
	add r0, r2, r3
	add r0, r1, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080C19EC
_080C19DA:
	lsl r0, r1, #24
	lsr r0, r0, #24
	bl sub_080C0328
	b _080C19F2
_080C19E4:
	.4byte gRam
_080C19E8:
	.4byte 0x00000E15
_080C19EC:
	sub r1, r1, #1
	cmp r1, #0
	bge _080C19CE
_080C19F2:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080C19B4

	.byte 0x00
	.byte 0x00
