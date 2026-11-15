	THUMB_FUNC_START sub_08015D04
sub_08015D04: @ 0x08015D04
	push {r4,r5,lr}
	add r4, r0, #0
_08015D08:
	ldr r0, _08015D2C  @ =0x03000030
	ldr r1, [r0]
	ldr r0, [r4, #4]
	add r5, r1, r0
	ldrb r0, [r4, #2]
	add r2, r0, #1
	ldrh r3, [r4]
	ldr r0, [r4]
	lsr r0, r0, #28
	mov r1, #1
	and r0, r0, r1
	cmp r0, #0
	beq _08015D30
	lsr r1, r3, #5
	add r0, r5, #0
	bl load_palette
	b _08015D3E
_08015D2C:
	.4byte 0x03000030
_08015D30:
	mov r0, #192
	lsl r0, r0, #19
	add r1, r3, r0
	lsl r2, r2, #3
	add r0, r5, #0
	bl CpuFastSet
_08015D3E:
	ldr r0, [r4]
	cmp r0, #0
	bge _08015D48
	add r4, r4, #8
	b _08015D08
_08015D48:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08015D04

	.byte 0x00
	.byte 0x00
