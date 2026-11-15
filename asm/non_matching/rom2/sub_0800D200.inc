	THUMB_FUNC_START sub_0800D200
sub_0800D200: @ 0x0800D200
	push {r4,lr}
	add r2, r0, #0
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r1, _0800D23C  @ =gUnknown_0201EDA8
	mov r0, #128
	lsl r0, r0, #1
	eor r0, r0, r2
	neg r0, r0
	lsr r0, r0, #31
	strb r0, [r1, #4]
	strh r2, [r1]
	ldr r4, _0800D240  @ =gUnknown_083C3A3C
	ldr r3, _0800D244  @ =gSongTable
	ldrh r0, [r1, #2]
	lsl r0, r0, #3
	add r0, r0, r3
	ldrh r1, [r0, #4]
	lsl r0, r1, #1
	add r0, r0, r1
	lsl r0, r0, #2
	add r0, r0, r4
	ldr r0, [r0]
	ldr r1, _0800D248  @ =0x0000FFFF
	bl sub_081356B0
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0800D23C:
	.4byte gUnknown_0201EDA8
_0800D240:
	.4byte gUnknown_083C3A3C
_0800D244:
	.4byte gSongTable
_0800D248:
	.4byte 0x0000FFFF
	THUMB_FUNC_END sub_0800D200

