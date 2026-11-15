	THUMB_FUNC_START sub_080C4C10
sub_080C4C10: @ 0x080C4C10
	push {r4,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r2, _080C4C5C  @ =gRam
	ldr r1, _080C4C60  @ =0x000010E2
	add r0, r2, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080C4C8E
	ldr r3, _080C4C64  @ =0x00000996
	add r0, r2, r3
	ldrb r0, [r0]
	add r1, r4, #0
	eor r1, r1, r0
	mov r0, #3
	and r1, r1, r0
	ldr r3, _080C4C68  @ =0x000010C2
	add r0, r2, r3
	add r0, r4, r0
	ldrb r0, [r0]
	orr r1, r1, r0
	cmp r1, #0
	bne _080C4C8E
	mov r1, #161
	lsl r1, r1, #4
	add r0, r2, r1
	add r3, r3, #48
	add r1, r2, r3
	add r1, r4, r1
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	beq _080C4C6C
	mov r0, #0
	b _080C4C7A
	.byte 0x00
	.byte 0x00
_080C4C5C:
	.4byte gRam
_080C4C60:
	.4byte 0x000010E2
_080C4C64:
	.4byte 0x00000996
_080C4C68:
	.4byte 0x000010C2
_080C4C6C:
	add r0, r4, #0
	bl sub_080C46EC
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #0
	bne _080C4C88
_080C4C7A:
	mov r0, sp
	add r1, r4, #0
	bl sub_080C4948
	lsl r0, r0, #24
	cmp r0, #0
	beq _080C4C8E
_080C4C88:
	add r0, r4, #0
	bl sub_080CF418
_080C4C8E:
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080C4C10

	.byte 0x00
	.byte 0x00
