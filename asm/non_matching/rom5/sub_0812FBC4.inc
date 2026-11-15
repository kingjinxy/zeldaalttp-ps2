	THUMB_FUNC_START sub_0812FBC4
sub_0812FBC4: @ 0x0812FBC4
	push {r4,r5,lr}
	lsl r0, r0, #24
	ldr r1, _0812FC08  @ =gUnknown_0822BA5A
	lsr r0, r0, #23
	add r0, r0, r1
	ldrh r1, [r0]
	lsr r0, r1, #11
	ldr r5, _0812FC0C  @ =0x000007FF
	and r5, r5, r1
	ldr r1, _0812FC10  @ =gUnknown_0822B324
	add r0, r0, #90
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	ldr r4, _0812FC14  @ =gUnknown_02032000
	add r1, r4, #0
	bl LZ77UnCompWram
	add r4, r5, r4
	ldr r1, _0812FC18  @ =gUnknown_0200B0C0
	add r0, r4, #0
	mov r2, #16
	bl CpuFastSet
	ldr r0, _0812FC1C  @ =gUnknown_02032200
	add r5, r5, r0
	ldr r1, _0812FC20  @ =gUnknown_0200B100
	add r0, r5, #0
	mov r2, #16
	bl CpuFastSet
	pop {r4,r5}
	pop {r0}
	bx r0
_0812FC08:
	.4byte gUnknown_0822BA5A
_0812FC0C:
	.4byte 0x000007FF
_0812FC10:
	.4byte gUnknown_0822B324
_0812FC14:
	.4byte gUnknown_02032000
_0812FC18:
	.4byte gUnknown_0200B0C0
_0812FC1C:
	.4byte gUnknown_02032200
_0812FC20:
	.4byte gUnknown_0200B100
	THUMB_FUNC_END sub_0812FBC4

