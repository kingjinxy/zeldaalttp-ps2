	THUMB_FUNC_START sub_080F0F58
sub_080F0F58: @ 0x080F0F58
	push {r4,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r0, _080F0F74  @ =gSword
	ldrb r0, [r0]
	cmp r0, #1
	bls _080F0F78
	add r0, r4, #0
	mov r1, #49
	mov r2, sp
	bl sub_080C9164
	b _080F0F96
_080F0F74:
	.4byte gSword
_080F0F78:
	add r0, r4, #0
	mov r1, #46
	mov r2, sp
	bl sub_080C9164
	lsl r0, r0, #24
	cmp r0, #0
	beq _080F0F96
	ldr r1, _080F0FA4  @ =gRam
	ldr r0, _080F0FA8  @ =0x00000F52
	add r1, r1, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080F0F96:
	add r0, r4, #0
	bl sub_080F10A0
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
_080F0FA4:
	.4byte gRam
_080F0FA8:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080F0F58

