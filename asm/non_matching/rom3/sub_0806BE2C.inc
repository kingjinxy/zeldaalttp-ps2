	THUMB_FUNC_START sub_0806BE2C
sub_0806BE2C: @ 0x0806BE2C
	push {r4,r5,lr}
	bl sub_0812E554
	ldr r4, _0806BE64  @ =gRam
	ldr r1, _0806BE68  @ =0x00000CFE
	add r0, r4, r1
	mov r5, #0
	mov r1, #7
	strh r1, [r0]
	ldr r2, _0806BE6C  @ =0x00000D04
	add r0, r4, r2
	strh r1, [r0]
	mov r1, #201
	lsl r1, r1, #4
	add r0, r4, r1
	strh r5, [r0]
	bl sub_08077FA4
	ldr r2, _0806BE70  @ =0x000009A8
	add r4, r4, r2
	str r5, [r4]
	ldr r1, _0806BE74  @ =gAbilityFlags
	mov r0, #232
	strb r0, [r1]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806BE64:
	.4byte gRam
_0806BE68:
	.4byte 0x00000CFE
_0806BE6C:
	.4byte 0x00000D04
_0806BE70:
	.4byte 0x000009A8
_0806BE74:
	.4byte gAbilityFlags
	THUMB_FUNC_END sub_0806BE2C

