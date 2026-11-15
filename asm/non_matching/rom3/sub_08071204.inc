	THUMB_FUNC_START sub_08071204
sub_08071204: @ 0x08071204
	push {r4,lr}
	ldr r4, _08071230  @ =gRam
	ldr r1, _08071234  @ =0x00000B0C
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #8
	bhi _0807122A
	bl sub_08130FF8
	ldr r1, _08071238  @ =0x00000CF8
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #23
	bne _0807122A
	ldr r0, _0807123C  @ =0x000009E8
	add r1, r4, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
_0807122A:
	pop {r4}
	pop {r0}
	bx r0
_08071230:
	.4byte gRam
_08071234:
	.4byte 0x00000B0C
_08071238:
	.4byte 0x00000CF8
_0807123C:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_08071204

