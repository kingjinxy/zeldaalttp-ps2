	THUMB_FUNC_START sub_080D422C
sub_080D422C: @ 0x080D422C
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080D426C  @ =gRam
	mov r3, #150
	lsl r3, r3, #4
	add r2, r1, r3
	mov r3, #0
	strh r3, [r2]
	ldr r4, _080D4270  @ =0x00000964
	add r2, r1, r4
	strh r3, [r2]
	add r4, r4, #4
	add r2, r1, r4
	strh r3, [r2]
	add r4, r4, #4
	add r2, r1, r4
	strh r3, [r2]
	ldr r2, _080D4274  @ =gUnknown_08174ED4
	ldr r3, _080D4278  @ =0x00000F62
	add r1, r1, r3
	add r1, r0, r1
	ldrb r1, [r1]
	lsr r1, r1, #1
	lsl r1, r1, #1
	add r1, r1, r2
	ldrb r1, [r1]
	bl sub_080D3E68
	pop {r4}
	pop {r0}
	bx r0
_080D426C:
	.4byte gRam
_080D4270:
	.4byte 0x00000964
_080D4274:
	.4byte gUnknown_08174ED4
_080D4278:
	.4byte 0x00000F62
	THUMB_FUNC_END sub_080D422C

