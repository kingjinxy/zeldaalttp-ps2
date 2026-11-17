	THUMB_FUNC_START sub_0812C99C
sub_0812C99C: @ 0x0812C99C
	push {lr}
	add r3, r0, #0
	ldr r0, [r3, #4]
	lsl r1, r0, #3
	add r1, r1, r0
	lsl r1, r1, #3
	ldr r0, _0812C9BC  @ =gUnknown_03001C88
	add r2, r1, r0
	ldrh r0, [r3]
	cmp r0, #6
	bhi _0812CA2A
	lsl r0, r0, #2
	ldr r1, _0812C9C0  @ =0x0812C9C4
	add r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
_0812C9BC:
	.4byte gUnknown_03001C88
_0812C9C0:
	.4byte _0812C9C0+0x4
	.4byte _0812C9E0
	.4byte _0812C9EA
	.4byte _0812CA00
	.4byte _0812CA0A
	.4byte _0812CA1C
	.4byte _0812CA22
	.4byte _0812CA14
_0812C9E0:
	ldr r0, [r3, #4]
	ldr r1, [r3, #8]
	bl sub_0812C46C
	b _0812CA2A
_0812C9EA:
	ldr r1, [r3, #4]
	lsr r0, r1, #16
	ldr r2, _0812C9FC  @ =0x0000FFFF
	and r1, r1, r2
	ldr r2, [r3, #8]
	bl sub_0812C494
	b _0812CA2A
	.byte 0x00
	.byte 0x00
_0812C9FC:
	.4byte 0x0000FFFF
_0812CA00:
	ldr r0, [r3, #4]
	ldr r1, [r3, #8]
	bl sub_0812C5F0
	b _0812CA2A
_0812CA0A:
	ldr r0, [r3, #4]
	ldrb r1, [r3, #8]
	bl sub_0812C628
	b _0812CA2A
_0812CA14:
	ldr r1, [r3, #8]
	add r0, r2, #0
	add r0, r0, #68
	b _0812CA28
_0812CA1C:
	ldr r0, [r3, #8]
	strh r0, [r2, #50]
	b _0812CA2A
_0812CA22:
	ldr r1, [r3, #8]
	add r0, r2, #0
	add r0, r0, #65
_0812CA28:
	strb r1, [r0]
_0812CA2A:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0812C99C

	.byte 0x00
	.byte 0x00
