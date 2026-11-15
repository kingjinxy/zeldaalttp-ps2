	THUMB_FUNC_START sub_0812FC24
sub_0812FC24: @ 0x0812FC24
	push {r4,r5,lr}
	lsl r0, r0, #24
	ldr r1, _0812FC64  @ =gUnknown_0822BA5A
	lsr r0, r0, #23
	add r0, r0, r1
	ldr r1, _0812FC68  @ =0xFFFFF000
	add r4, r1, #0
	ldrh r0, [r0]
	add r4, r4, r0
	lsl r4, r4, #16
	lsr r4, r4, #16
	ldr r0, _0812FC6C  @ =gUnknown_0825381C
	ldr r5, _0812FC70  @ =gUnknown_02032000
	add r1, r5, #0
	bl LZ77UnCompWram
	add r5, r4, r5
	ldr r1, _0812FC74  @ =gUnknown_0200B0C0
	add r0, r5, #0
	mov r2, #16
	bl CpuFastSet
	ldr r0, _0812FC78  @ =gUnknown_02032200
	add r4, r4, r0
	ldr r1, _0812FC7C  @ =gUnknown_0200B100
	add r0, r4, #0
	mov r2, #16
	bl CpuFastSet
	pop {r4,r5}
	pop {r0}
	bx r0
_0812FC64:
	.4byte gUnknown_0822BA5A
_0812FC68:
	.4byte 0xFFFFF000
_0812FC6C:
	.4byte gUnknown_0825381C
_0812FC70:
	.4byte gUnknown_02032000
_0812FC74:
	.4byte gUnknown_0200B0C0
_0812FC78:
	.4byte gUnknown_02032200
_0812FC7C:
	.4byte gUnknown_0200B100
	THUMB_FUNC_END sub_0812FC24

