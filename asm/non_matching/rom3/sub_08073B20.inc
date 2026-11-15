	THUMB_FUNC_START sub_08073B20
sub_08073B20: @ 0x08073B20
	push {lr}
	ldr r3, _08073B64  @ =gUnknown_020022BB
	ldrb r2, [r3]
	mov r1, #223
	add r0, r1, #0
	and r0, r0, r2
	strb r0, [r3]
	ldr r2, _08073B68  @ =gUnknown_020022FB
	ldrb r0, [r2]
	and r1, r1, r0
	strb r1, [r2]
	sub r2, r2, #229
	ldrh r1, [r2]
	ldr r0, _08073B6C  @ =0x0000FF7F
	and r0, r0, r1
	strh r0, [r2]
	ldr r2, _08073B70  @ =gUnknown_02002050
	ldrh r1, [r2]
	ldr r0, _08073B74  @ =0x0000FEFF
	and r0, r0, r1
	strh r0, [r2]
	bl sub_0812F150
	bl sub_0812FBC0
	ldr r1, _08073B78  @ =gRam
	ldr r0, _08073B7C  @ =0x000009E8
	add r1, r1, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08073B64:
	.4byte gUnknown_020022BB
_08073B68:
	.4byte gUnknown_020022FB
_08073B6C:
	.4byte 0x0000FF7F
_08073B70:
	.4byte gUnknown_02002050
_08073B74:
	.4byte 0x0000FEFF
_08073B78:
	.4byte gRam
_08073B7C:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_08073B20

