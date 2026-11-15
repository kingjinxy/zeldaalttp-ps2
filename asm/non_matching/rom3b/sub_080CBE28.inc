	THUMB_FUNC_START sub_080CBE28
sub_080CBE28: @ 0x080CBE28
	push {r4,lr}
	add r2, r0, #0
	mov r1, #7
	ldr r3, _080CBE48  @ =gRam
_080CBE30:
	ldr r4, _080CBE4C  @ =0x00000D1B
	add r0, r3, r4
	add r0, r1, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080CBE50
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r2, #0
	bl sub_080CB7FC
	b _080CBE56
_080CBE48:
	.4byte gRam
_080CBE4C:
	.4byte 0x00000D1B
_080CBE50:
	sub r1, r1, #1
	cmp r1, #0
	bge _080CBE30
_080CBE56:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080CBE28

