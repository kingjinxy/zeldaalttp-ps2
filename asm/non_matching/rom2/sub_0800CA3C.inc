	THUMB_FUNC_START sub_0800CA3C
sub_0800CA3C: @ 0x0800CA3C
	push {lr}
	ldr r2, _0800CA6C  @ =gUnknown_030004A0
	ldrh r1, [r2]
	ldr r0, _0800CA70  @ =0x0000DFFF
	and r0, r0, r1
	mov r1, #0
	strh r0, [r2]
	ldr r0, _0800CA74  @ =gUnknown_03000BC0
	strb r1, [r0]
	ldr r1, _0800CA78  @ =0x040000B0
	ldrh r2, [r1, #10]
	ldr r0, _0800CA7C  @ =0x0000C5FF
	and r0, r0, r2
	strh r0, [r1, #10]
	ldrh r2, [r1, #10]
	ldr r0, _0800CA80  @ =0x00007FFF
	and r0, r0, r2
	strh r0, [r1, #10]
	ldrh r0, [r1, #10]
	bl sub_0800CA38
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0800CA6C:
	.4byte gUnknown_030004A0
_0800CA70:
	.4byte 0x0000DFFF
_0800CA74:
	.4byte gUnknown_03000BC0
_0800CA78:
	.4byte 0x040000B0
_0800CA7C:
	.4byte 0x0000C5FF
_0800CA80:
	.4byte 0x00007FFF
	THUMB_FUNC_END sub_0800CA3C

