	THUMB_FUNC_START sub_080FD018
sub_080FD018: @ 0x080FD018
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r6, r4, #0
	add r0, r4, #0
	bl sub_080FD068
	ldr r5, _080FD05C  @ =gRam
	ldr r1, _080FD060  @ =0x00000996
	add r0, r5, r1
	ldrb r1, [r0]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _080FD03C
	add r0, r4, #0
	bl sub_080FD068
_080FD03C:
	ldr r1, _080FD064  @ =0x00000F82
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #2
	bls _080FD04E
	add r0, r4, #0
	bl sub_080FD068
_080FD04E:
	add r0, r6, #0
	bl Sprite3_Move
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080FD05C:
	.4byte gRam
_080FD060:
	.4byte 0x00000996
_080FD064:
	.4byte 0x00000F82
	THUMB_FUNC_END sub_080FD018

